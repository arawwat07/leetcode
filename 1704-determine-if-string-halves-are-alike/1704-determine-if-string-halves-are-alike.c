bool halvesAreAlike(char* s) {
    int i=0, a=0, b=0;
    int len=strlen(s)-1;
    while (i<=len/2)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            a++;
        }
        i++;
    }
    while (i<=len)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            b++;
        }
        i++;
    }
    if (a==b)
    {
        return true;
    }
    return false;
}