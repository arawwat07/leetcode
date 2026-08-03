int maxArea(int* height, int heightSize) {
    int left=0, right=heightSize-1, temp=-1, area=0, a=0, b=0;
    while (left<right)
    {
        if (height[left]>height[right] && left<right)
        {
            area=(right-left)*height[right];
            if (area>temp)
            {
                temp=area;
            }
            right--;
        }
        else if (height[left]<height[right] && left<right)
        {
            area=(right-left)*height[left];
            if (area>temp)
            {
                temp=area;
            }
            left++;
        }
        else
        {
            a=left;
            b=right;
            area=(b-a)*height[right];
            if (area>temp)
            {
                temp=area;
            }
            left++;
            right--;
        }
    }
    return temp;
}