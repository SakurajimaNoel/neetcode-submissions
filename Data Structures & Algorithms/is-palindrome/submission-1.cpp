class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0 , j = s.size()-1;
        bool sol = true;
        while (i<j){
            while(!isalnum(s[i]) && i < s.size()) i++;
            while(!isalnum(s[j]) && j >= 0) j--;

            if(tolower(s[i])!= tolower(s[j])) return false;

            i++; j--;
        }
        return sol;
    }
};
