#include<string.h>
#include<stdlib.h>
char* largestOddNumber(char* num) {
    int size=100001;
    char *p = (char *)malloc(size * sizeof(char));
    int len=strlen(num)-1;
    int i=0, j=0;
    while (len>=i)
    {
        if (num[len]%2!=0)
        {
            j=len;
            break;
        }
        len--;
        if (len<i)
        {
            p[0]='\0';
            return p;
        }
    }
    i=0, len=0;
    while (i<=j)
    {
        p[len]=num[i];
        len++;
        i++;
    }
    p[len]='\0';
    return p;
}