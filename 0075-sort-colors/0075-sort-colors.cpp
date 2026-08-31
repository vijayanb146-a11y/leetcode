class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0;
        int low=0;
        int high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
            nums[mid]=nums[low];
            nums[low]=0;
            low++;
            mid++;

            }
            else if(nums[mid]==1){
                mid++;
             }
             else{
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
             }
        }

    }
};