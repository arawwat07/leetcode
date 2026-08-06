int smallestNumber(int n, int t) {
    int temp=n, digit=0, rem=0, k=0;
     while (n<101 && n>0)
     {
        temp=n;
        digit=1;
        while (temp>0)
        {
            rem=temp%10;
            digit=digit*rem;
            temp=temp/10;
        }
        if (digit%t==0)
        {
            k=n;
            break;
        }
        n++;
     }
     return k;
}