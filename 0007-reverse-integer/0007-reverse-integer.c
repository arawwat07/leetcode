int reverse(int x){
    int rem=0, temp=x;
    long int digit=0;
    while (x!=0)
    {
        rem=x%10;
        digit=digit*10+rem;
        x=x/10;
    }
    if (digit>2147483647 || digit<(-2147483648))
    {
        return 0;
    }
    return (int)digit;
    
}