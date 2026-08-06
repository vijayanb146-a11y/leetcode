/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *prefarr=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(i==0){
            prefarr[i]=nums[i];
        }
        else{
        prefarr[i]=prefarr[i-1]+nums[i];
    }
    }
    return prefarr;
    
}