class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0;
        double avg = 0;
        int j = 0;
        for(int i=0; i<k; i++){
            sum += nums.at(i);
        }
        avg = sum/k;
        ans = max(ans, avg);
        for(int i=k; i<nums.size(); i++){
            sum = sum + nums.at(i) - nums.at(j);
            avg = sum/k;
            ans = max(ans, avg);
            j++;
        }
        return ans;
    }
};