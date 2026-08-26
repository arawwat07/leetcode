char* shortestBeautifulSubstring(char* s, int k) {
    int l=strlen(s), i=0, j=0, x=0, count=0, first=0, len=l+1, a=0, size=0;
    char *p=(char*)malloc((l+1)*sizeof(char));

    while (i<l)
    {
        if (s[i]=='1')
        {
            count++;

            if (count>k)
            {
                while (s[j]!='1')
                {
                    first++;
                    j++;
                }

                count--;
                first++;
                j++;
            }

            if (count==1)
            {
                first=i;
                j=first+1;
            }

            if (count==k)
            {
                size=i-first+1;

                if (len>size)
                {
                    len=size;
                    a=first;
                }
                else if (len==size)
                {
                    for (x=0; x<len; x++)
                    {
                        if (s[first+x] < s[a+x])
                        {
                            a=first;
                            break;
                        }

                        if (s[first+x] > s[a+x])
                            break;
                    }
                }
            }
        }

        i++;
    }

    if (len==l+1)
    {
        p[0]='\0';
        return p;
    }

    for (i=0; i<len; i++)
    {
        p[i]=s[a+i];
    }

    p[i]='\0';

    return p;
}
