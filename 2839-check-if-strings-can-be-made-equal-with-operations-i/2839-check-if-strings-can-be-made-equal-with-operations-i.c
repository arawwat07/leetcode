bool canBeEqual(char* s1, char* s2) {
    int i=0, j=2;
    char temp;
    int x=0;
    while (i<3 && j<5)
    {
    if (x==strcmp(s1,s2))
    {
        return true;
    }
    if (s1[0]!=s2[0])
    {
    temp=s1[0];
    s1[0]=s1[2];
    s1[2]=temp;
    }
    if (s1[1]!=s2[1])
    {
    temp=s1[1];
    s1[1]=s1[3];
    s1[3]=temp;
    }
    i++;
    j++;
    }
    return false;
}