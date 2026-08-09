int lengthOfLastWord(char* s) {
    int i=0;
    int len = strlen(s);
    int last=0;
    i=len-1;
    while (i>=0 && s[i]==' ')
    {
        i--;        
    }
    while (i>=0 && s[i]!=' ')
    {
        last++;
        i--;
    }
    return last;
}