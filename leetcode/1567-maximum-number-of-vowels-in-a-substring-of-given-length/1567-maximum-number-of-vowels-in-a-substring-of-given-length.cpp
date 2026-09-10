class Solution {
public:
    int maxVowels(string s, int k)
    {
        int ans = 0;
        string vowels = "";
        int count = 0;
        for(int i=0; i<k; i++){
            vowels += s.at(i);
            if(isVowel(s.at(i))){
                count++;
            }
        }
        ans = max(ans, count);
        for(int i=k; i<s.size(); i++){
            if(isVowel(vowels.at(0))){
                count--;
            }
            vowels.erase(0,1);
            vowels.push_back(s.at(i));
            if(isVowel(vowels.at(k-1))){
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
    bool isVowel(char c)
    {
        return c == 
            'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U';
    }
};