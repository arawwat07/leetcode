int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* p = (int*)malloc((digitsSize + 1) * sizeof(int));
    int i;

    for (i = 0; i < digitsSize; i++) {
        p[i] = digits[i];
    }

    for (i = digitsSize - 1; i >= 0; i--) {
        if (p[i] < 9) {
            p[i]++;
            *returnSize = digitsSize;
            return p;
        }
        p[i] = 0;
    }

    p[0] = 1;
    for (i = 1; i <= digitsSize; i++) {
        p[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return p;
}