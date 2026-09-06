class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int current=0;
        int maxone=0;
        for(int j=0;j<n;j++){
            if(nums[j]==1){
                current++;

            }
            else{
                maxone=max(maxone,current);
                current=0;
                }
        }
         return max(maxone,current);
    }
   
};