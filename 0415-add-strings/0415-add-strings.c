char* addStrings(char* num1, char* num2) {
    int l1=strlen(num1), l2=strlen(num2), len=l1+l2, i=0, carry=0, sum=0, bit1, bit2;
    char *p=(char*)malloc((len+1)*sizeof(char));
    while ((l1-1)>=0 || (l2-1)>=0)
    {
    if (l1>0)
    {
        bit1=num1[l1-1]-'0';
    }
    else 
    {
        bit1=0;
    }
    if (l2>0)
    {
        bit2=num2[l2-1]-'0';
    }
    else 
    {
        bit2=0;
    }
    sum=bit1+bit2+carry;
    p[i]=(sum%10)+'0';
    carry=sum/10;
    i++;
    l1--;
    l2--;
    }
    if (carry>=1 && carry<=9)
    {
        p[i]=carry+'0';
        i++;
    }
    p[i]='\0';
    int left=0, right=i-1; 
    char temp;
    while (left<right)
    {
        temp=p[left];
        p[left]=p[right];
        p[right]=temp;
        left++;
        right--;
    }
    return p;
}