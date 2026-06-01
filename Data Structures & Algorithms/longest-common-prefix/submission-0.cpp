class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol = "";
        for(int i = 0; i < strs[0].size(); ++i){
            for(int j = 1; j < strs.size(); ++j){
                if (i>=strs[j].size()) return sol;
                else if(strs[0][i] != strs[j][i]) return sol;
            }
            sol.push_back(strs[0][i]);
        }
        return sol;
    }
};