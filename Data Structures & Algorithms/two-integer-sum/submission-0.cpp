class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> diff;

        for(int i = 0; i < nums.size(); ++i){
            int d = target - nums[i];

            auto it = diff.find(d);

            if(it != diff.end()){
                vector<int> sol = {it->second,i};
                return sol;
            }
            else{
                diff.insert({nums[i],i});
            }
        }
    }
};
