class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int curr = 0, ans = 0;
        if (nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());


        for(int i = 1; i < nums.size(); ++i){
            if(nums[i]-nums[i-1] == 1) curr++;
            else if(nums[i]-nums[i-1] == 0) continue;
            else {
                ans = ans>curr?ans:curr;
                curr = 0;
            }
        }
        return ans>curr?ans+1:curr+1;
    }
};
