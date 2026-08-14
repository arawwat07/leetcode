bool isPalindrome(char* s) {
    int i=0,j=0,n;
    while (s[i]!='\0')
    {
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            s[j]=s[i];
            j++;
        }
        i++;
    }
    if (j==0)
    {
        return true;
    }
    n=j-1;
    j=0;
    while (j<n)
    {
        if (s[j]!=s[n])
        {
            return false;
        }
        j++;
        n--;
    }
    return true;
}