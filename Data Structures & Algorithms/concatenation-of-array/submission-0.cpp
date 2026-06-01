class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(2*(int)nums.size());
        for(const auto& n : nums){
            ans.push_back(n);
        }
        for(const auto& n : nums){
            ans.push_back(n);
        }
        return ans;
    }
};