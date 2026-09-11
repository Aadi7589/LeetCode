class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int frequency = 0;
        for(int i=0; i< nums.size(); i++){
            if(frequency == 0){
                count = nums.at(i);
            }
            if(count == nums.at(i)){
                frequency++;
            }else{
                frequency--;
            }
        }
        return count;
    }
};