/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize=2;
    int *arr=(int *)malloc((*returnSize)*sizeof(int));
    int i=0;
    int j=numbersSize-1;
    while(1){
        if(numbers[i]+numbers[j]<target){
            i++;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
        else if(numbers[i]+numbers[j]==target){
            arr[0]=i+1;
            arr[1]=j+1;
            return arr;
        }
        else{
            arr[0]=arr[1]=0;
            return arr;
        }
    }
    
}