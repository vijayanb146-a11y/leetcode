/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *left=(int*)malloc(numsSize*sizeof(int));
    int *right=(int*)malloc(numsSize*sizeof(int));
    int *total=(int*)malloc(numsSize*sizeof(int));
    right[0]=1;
    for (int i=1;i<numsSize;i++){
        right[i]=right[i-1]*nums[i-1];
    }
    left[numsSize-1]=1;
    for(int n=numsSize-2;n>=0;n--){
        left[n]=left[n+1]*nums[n+1];
    }
    for(int i=0;i<numsSize;i++){
        total[i]=left[i]*right[i];

            }
            *returnSize=numsSize;
            return total;

}