/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
   int i=0, j=0, max=-1, min=1000; 
   for (i=0; i<numsSize; i++)
   {
        if (nums[i]>max)
        {
            max=nums[i];
        }
   }
   for (i=0; i<numsSize; i++)
   {
        if (nums[i]<min)
        {
            min=nums[i];
        }
   }
   int *ptr = (int *)malloc((max-min+1)*sizeof(int));
   int freq[max+1]={};
   for (i=0; i<numsSize; i++)
   {
        freq[nums[i]]++;
   }
   for (i=min; i<=max; i++)
   {
        if (freq[i]==0)
        {
            *(ptr+j)=i;
            j++;
        }
   }
   *returnSize=j;
   return ptr;
}