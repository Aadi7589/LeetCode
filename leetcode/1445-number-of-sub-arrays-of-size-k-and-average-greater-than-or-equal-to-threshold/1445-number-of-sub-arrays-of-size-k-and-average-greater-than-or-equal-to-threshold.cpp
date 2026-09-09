class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double ans = 0;
        double avg = 0;
        int sum = 0;
        int j = 0;
        for(int i=0; i<k; i++){
            sum += arr.at(i);
        }
        avg = sum/k;
        if(avg>=threshold){
            ans++;
        }
        for(int i=k; i<arr.size(); i++){
            sum = sum + arr.at(i) - arr.at(j);
            avg = sum/k;
            if(avg>=threshold){
                ans++;
            }
            j++;
        }
        return ans;
    }
};