class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        for(const auto& n: nums){
            um[n]++;
            if(um[n]>nums.size()/2) return n;
        }
        return 0;
    }
};