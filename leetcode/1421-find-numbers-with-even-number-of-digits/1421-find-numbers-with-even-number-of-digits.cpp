class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int output = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10 && nums[i]<=99){
                output++;
            }else if(nums[i]>=1000 && nums[i]<=9999){
                output++;
            }else if(nums[i] == 100000){
                output++;
            }
        }
        return output;
    }
};