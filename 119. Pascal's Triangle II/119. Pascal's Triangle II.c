/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize=rowIndex+1;

    int *r=(int *)malloc((rowIndex+1) * sizeof(int));
    r[0]=1;
    for(int i=1; i<=rowIndex; i++){
        r[i]=(long) r[i-1] * (rowIndex-i+1)/i;
    }
    return r;
}

