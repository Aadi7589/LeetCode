class Solution {
public:
    int reverse(int x) {
        int temp = 0;
        long long sum = 0;
        while(x != 0){
            temp = x % 10;
            sum = (sum * 10) + temp;
            x /=10;
        }
        if (sum > INT_MAX || sum < INT_MIN){
            return 0;
        }
        return sum;
    }
};