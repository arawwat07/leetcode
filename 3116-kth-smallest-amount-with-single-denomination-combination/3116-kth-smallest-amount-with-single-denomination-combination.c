    // int i=0, j=0; 
    // int freq[100001]={};
    // for (int i=0; i<100001; i++)
    // {
    //     j=0;
    //     while (j<coinsSize)
    //     {
    //         if (i%coins[j]==0)
    //         {
    //             freq[i]=1;
    //             break;
    //         }
    //         j++;
    //     }
    // }
    // int r=0;
    // long long ans=0;
    // for (i=0; i<100001; i++)
    // {
    //     if (freq[i]==1)
    //     {
    //         r++;
    //         if (r==k+1)
    //         {
    //             ans=i;
    //             break;
    //         }
    //     }
    // }
    // return ans;
    
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long findKthSmallest(int* coins, int coinsSize, int k) {
    long long low = 1;
    long long high = 25LL * k;

    while (low < high) {
        long long mid = low + (high - low) / 2;

        long long count = 0;

        for (int mask = 1; mask < (1 << coinsSize); mask++) {
            long long multiple = 1;
            int bits = 0;

            for (int i = 0; i < coinsSize; i++) {
                if (mask & (1 << i)) {
                    multiple = lcm(multiple, coins[i]);
                    bits++;
                }
            }

            if (multiple > mid)
                continue;

            if (bits % 2 == 1)
                count += mid / multiple;
            else
                count -= mid / multiple;
        }

        if (count >= k)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}
