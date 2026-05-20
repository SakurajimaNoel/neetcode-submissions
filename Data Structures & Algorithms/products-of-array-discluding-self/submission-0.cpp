class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol;
        vector<int> pre, suf;
        int tmp = 1;
        for(int i = 0; i < nums.size(); ++i){
            if(i == 0) {pre.push_back(tmp); continue;}
            tmp *= nums[i-1];
            pre.push_back(tmp);
        }
        tmp=1;
        for(int i = nums.size()-1; i >=0; --i){
            if(i == nums.size()-1) {suf.push_back(1); continue;}
            tmp *= nums[i+1];
            suf.push_back(tmp);
        }
        for(int i = 0; i < nums.size(); ++i){
            sol.push_back(pre[i]*suf[nums.size()-1-i]);
        }
        return sol;
    }
};
