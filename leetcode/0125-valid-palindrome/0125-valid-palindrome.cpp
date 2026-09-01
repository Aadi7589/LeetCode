class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while (left<right){
            if(isspace(s[left]) || ispunct(s[left])){
                left++;
                continue;
            }
            else if (isspace(s[right]) || ispunct(s[right]))
            {
                right--;
            }
            else if (tolower(s.at(left)) != tolower(s.at(right)))
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};