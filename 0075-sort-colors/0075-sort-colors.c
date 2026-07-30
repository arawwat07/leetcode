void sortColors(int* nums, int numsSize) {
    int i=0, j=0, one=0, zero=0, two=0;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]==0)
        {
            zero++;
        }
        else if (nums[i]==1)
        {
            one++;
        }
        else 
        {
            two++;
        }
    }
    i=0;
    while (i<zero)
    {
        nums[j]=0;
        i++; j++;
    }
    i=0; 

    while (i<one)
    {
        nums[j]=1;
        i++; j++;
    }
    i=0; 
    
    while (i<two)
    {
        nums[j]=2;
        i++; j++;
    }
    
    for (j=0; j<numsSize; j++)
    {
        printf("%d ", nums[j]);
    }

}