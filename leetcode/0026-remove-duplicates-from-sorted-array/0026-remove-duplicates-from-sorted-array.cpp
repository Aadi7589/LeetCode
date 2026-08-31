class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        for(int fast=1;fast<nums.size();fast++){
            if(nums.at(slow) != nums.at(fast)){
                slow++;
                nums.at(slow) = nums.at(fast);
            }
        }
        return slow+1;
    }
};