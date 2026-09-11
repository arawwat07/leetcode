int totalNumbers(int* digits, int digitsSize) {
    int i=0, one=0, ten=0, hundred=0, count=0, freq[10]={};
    for (i=0; i<digitsSize; i++)
    {
        freq[digits[i]]++;
    }
    for (i=100; i<1000; i++)
    {
        if (i%2==0)
        {
            one=i%10;
            ten=(i%100)/10;
            hundred=i/100;
            int need[10]={};
            need[one]++;
            need[ten]++;
            need[hundred]++;
            if (need[one]<=freq[one] && need[ten]<=freq[ten] && need[hundred]<=freq[hundred])
            {
                count++;
            }
        }
    }
    return count;
}