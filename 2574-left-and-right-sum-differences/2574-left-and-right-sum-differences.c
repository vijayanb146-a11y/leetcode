/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int total=0;
    for(int i=0;i<numsSize;i++){
        total+=nums[i];
    }
    int* arr=(int*)calloc(numsSize,sizeof(int));
    int leftsum=0;
    for(int i=0;i<numsSize;i++){
        int rightsum= total-leftsum-nums[i];
        arr[i]=abs(rightsum-leftsum);
        leftsum+=nums[i];
    }
    return arr;
}