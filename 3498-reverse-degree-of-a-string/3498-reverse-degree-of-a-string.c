int reverseDegree(char* s) {
    int len=strlen(s);
    int value=0, i=0;
    while (i<len)
    {
        value=value+(26-(s[i]-'a'))*(i+1);
        i++;
    }
    return value;
}