int removeElement(int* nums, int numsSize, int val) {
    int i=0;
    int j=numsSize-1;
    while(i<=j){
        if(nums[j]==val){
            j--;
        }
        else if(nums[i]==val){
            nums[i]=nums[j];
            j--;
            i++;
        }
        else{
            i++;
        }
    }
    return i;

}