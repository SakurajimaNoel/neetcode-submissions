class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> um;
        vector<vector<string>>answer;
        int idx =0;
        
        for(int i = 0 ; i < strs.size(); ++i){
            string key = strs[i];
            sort(key.begin(), key.end());
            auto[it,insert] = um.insert({key,idx});
            if(insert){
                answer.push_back({strs[i]});
                idx++;
            }
            else{
                answer[it->second].push_back(strs[i]);
            }
        }
        return answer;

    }
};
