int subsetXORSum(int* nums, int numsSize) {
    int mask=1<<numsSize;
    int sum=0;
    for(int i=0;i<mask;i++){
        int xorsum=0;
        for(int j=0;j<numsSize;j++){
            if(i & (1<<j)){
                xorsum=xorsum^nums[j];
            }
        }
       sum=sum+xorsum;
    }


    return sum;
}