int digitFrequencyScore(int n) {
    int sum=0;
    int rem;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}