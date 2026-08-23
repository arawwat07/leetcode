bool sumGame(char* num) {
    int i=0, len=strlen(num), j=len/2, left=0, right=0, suml=0, sumr=0;
    while (i<len)
    {
        if (i<len/2)
        {
            if (num[i]=='?')
            {
                left++;
            }
            if (num[i]>='0' && num[i]<='9')
            {
                suml=suml+num[i]-'0';
            }
        }
        else if (j<len) 
        {
            if (num[j]=='?')
            {
                right++;
            }
            if (num[j]>='0' && num[j]<='9')
            {
                sumr=sumr+num[j]-'0';
            }
            j++;
        }
        i++;
    }
    if (left==right)
    {
        if (suml==sumr)
        {
            return false;
        }
        else if (suml!=sumr)
        {
            return true;
        }
    }
    int diff=left-right;
    int sumdiff=suml-sumr;
    if (diff%2!=0)
    {
        return true;
    }
    if (diff > 0) {
        int extra = (diff / 2) * 9;
        if (sumdiff + extra == 0)
        {
            return false;
        }
        return true;
    }
    else {
        int extra = ((-diff) / 2) * 9;
        if (sumdiff - extra == 0)
        {
            return false;
        }
        return true;
    }
}