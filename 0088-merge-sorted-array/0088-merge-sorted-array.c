void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0, p1=nums1[0], p2=(n>0?nums2[0]:0), j=0;
    int end=m;

    for (i=0; i<end && j<n;)
    {
        if (p1<p2)
        {
            i++;
            if (i<end) p1=nums1[i];
        }
        else
        {
            int k = end;
            while (k > i)
            {
                nums1[k] = nums1[k-1];
                k--;
            }
            nums1[i] = p2;
            end++;
            j++;
            if (j<n) p2=nums2[j];
            i++;
            if (i<end) p1=nums1[i];
        }
    }

    while (j<n)
    {
        nums1[end] = nums2[j];
        end++;
        j++;
    }
}