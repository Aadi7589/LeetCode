class Solution
{
public:
    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while(i<j){
            if(s.at(i) != s.at(j)){
                return palindrome(i+1,j,s) || palindrome(i,j-1,s);
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool palindrome(int i, int j, string& s){
        while(i<j){
            if(s.at(i) != s.at(j)){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};