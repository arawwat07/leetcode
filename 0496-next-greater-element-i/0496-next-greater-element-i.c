/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *p=(int *)malloc(nums1Size*sizeof(int));
    int i=0, j=0, k=0;
    while (i<nums1Size)
    {
        j=0;
        while (j<nums2Size && nums1[i]!=nums2[j])
        {
            j++;
        }
        if (j==nums2Size)
        {
            p[i]=-1;
            i++;
            continue;
        }
        for (k=j; k<nums2Size; k++)
        {
            if (k+1<nums2Size && nums2[k+1]>nums2[j])
            {
                p[i]=nums2[k+1];
                break;
            }
            else 
            {
                p[i]=-1;
            }
        }
        i++;
    }
    *returnSize=nums1Size;
    return p;
}