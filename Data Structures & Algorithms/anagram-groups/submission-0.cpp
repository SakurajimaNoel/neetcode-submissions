class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_set<string> occur;
        vector<vector<string>> answer;
        for(int i =0; i < strs.size(); ++i)
        {
            auto[it, insert] = occur.insert(strs[i]);
            if(!insert) continue;
            vector<string> sublist;
            sublist.push_back(strs[i]);
            for(int j = i+1; j <strs.size(); ++j){
                vector<int> freq(26,0);
                if(strs[i].size() != strs[j].size()) continue;
                for(int k = 0; k<strs[i].size(); k++){
                    freq[strs[i][k]-'a']++;
                    freq[strs[j][k]-'a']--;
                }
            bool allzero = all_of(freq.begin(), freq.end(), [](int count) { 
                    return count == 0; 
                });
            if (allzero) {
                sublist.push_back(strs[j]);
                occur.insert(strs[j]);
            }
            }
            answer.push_back(sublist);
        }
        return answer;
    }
};
