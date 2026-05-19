class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        vector<vector<string>> ans;
        for (const auto &s: strs){
            vector<int> count(26,0);
            for (char c : s){
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i =1 ; i < 26; ++i){
                key += ',' + to_string(count[i]);
            }
            um[key].push_back(s);

        }

        for(const auto& p : um){
            ans.push_back(p.second);
        }

        return ans;
    }
};
