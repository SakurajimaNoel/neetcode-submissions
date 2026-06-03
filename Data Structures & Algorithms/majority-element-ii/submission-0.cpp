class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> um;
        for(const auto& n : nums){
            um[n]++;
        }
        for(const auto& [num, freq] : um){
            if(freq > nums.size()/3) ans.push_back(num);
        }
        return ans;
    }
};