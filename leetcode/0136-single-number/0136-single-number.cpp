class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int val : nums){
            num = num^val;
        }
        return num;
    }
};