int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i=0, j=0, sum=-1, temp=0;
    for (i=0; i<accountsSize; i++)
    {
        temp=0;
        for (j=0; j<accountsColSize[i]; j++)
        {
            temp=temp+accounts[i][j];
        }
        if (sum<temp)
        {
            sum=temp;
        }
    }
    return sum;
}