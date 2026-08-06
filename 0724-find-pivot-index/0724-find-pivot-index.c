int pivotIndex(int* nums, int numsSize) {
    int *prefarr=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(i==0){
            prefarr[i]=nums[i];
        }
        else{
        prefarr[i]=prefarr[i-1]+nums[i];
    }
    }
    int total=prefarr[numsSize-1];

    for(int i=0;i<numsSize;i++){
        int left= (i==0)?0:prefarr[i-1];
        int right=total-prefarr[i];

        if(left==right)
               return i;
    }
    return -1;
     
}