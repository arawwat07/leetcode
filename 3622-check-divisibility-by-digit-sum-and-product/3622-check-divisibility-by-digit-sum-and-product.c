bool checkDivisibility(int n) {
    int num1=n, temp=0, product=1, sum=0;
    while (num1!=0)
    {
        temp=num1%10;
        sum=sum+temp;
        product=product*temp;
        num1=num1/10;
    }
        
    if (n%(sum+product)==0)
    {
        return true;
    }
    return false;
}