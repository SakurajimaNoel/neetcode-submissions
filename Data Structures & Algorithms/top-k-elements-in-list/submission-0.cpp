class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans ;
        unordered_map<int,int> um;
        for(const auto& n : nums){
            um[n]++;
        }
        vector<pair<int,int>> pv(um.begin(),um.end());
        sort(pv.begin(),pv.end(), [](const auto&a, const auto&b){
            return a.second>b.second;
        });

        for (int i=0; i<k; i++){
            ans.push_back(pv[i].first);
        }
        return ans;
    }
};
