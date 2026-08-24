char* addBinary(char* a, char* b) {
    int l1=strlen(a), l2=strlen(b), len=l1+l2, i=0, carry=0, sum=0, bit1, bit2;
    char *p=(char*)malloc((len+1)*sizeof(char));
    while ((l1-1)>=0 || (l2-1)>=0)
    {
    if (l1>0)
    {
        bit1=a[l1-1]-'0';
    }
    else 
    {
        bit1=0;
    }
    if (l2>0)
    {
        bit2=b[l2-1]-'0';
    }
    else 
    {
        bit2=0;
    }
    sum=bit1+bit2+carry;
    p[i]=(sum%2)+'0';
    carry=sum/2;
    i++;
    l1--;
    l2--;
    }
    if (carry==1)
    {
        p[i]='1';
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