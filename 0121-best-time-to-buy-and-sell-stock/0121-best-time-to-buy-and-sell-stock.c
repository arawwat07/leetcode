int maxProfit(int* prices, int pricesSize) {
    int i=0,b=1000,b1=0,b2=0,k=0,s1=-1,s2=-1,profit=-1;
    for (i=0; i<pricesSize; i++)
    {
        if (i==0)
        {
            b=*(prices + i);
        }
        if (b>*(prices + i))
        {
            b=*(prices + i);
            k=i;
        }
        if (b<*(prices +i))
        {
            b1=*(prices + i) - b;
            if (b1>b2)
            {
                b2=b1;
            }
        }
    }
    if ((k+1)==pricesSize)
    {
        return b2;
    }
    for (i=k+1; i<pricesSize; i++)
    {
        if (*(prices + i)>b)
        {
            s1=*(prices + i);
            if (s2<s1)
            {
                s2=s1;
            }
        }
        profit = s2-b;
    }
    if (profit >= b2)
    {
        return profit;
    }
    else if (b2 >= profit)
    {
        return b2;
    }
    else 
    {
        return 0;
    }
}