class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> diff;

        for(int i = 0; i < nums.size(); ++i){
            int d = target - nums[i];
            if(diff.find(d) != diff.end()){
                
                return {diff[d],i};
            }
            else{
                diff.insert({nums[i],i});
            }
        }
    }
};
