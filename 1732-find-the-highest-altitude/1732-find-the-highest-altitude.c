int largestAltitude(int* gain, int gainSize) {
    int i=0, highest=0, sum=0;
    for (i=0; i<gainSize; i++)
    {
        sum = sum+gain[i];
        if (highest<sum)
        {
            highest=sum;
        }
    }
    return highest;
}