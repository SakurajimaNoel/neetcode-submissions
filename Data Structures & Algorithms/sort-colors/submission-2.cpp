class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp =0,i = 0,r = 0, b = nums.size()-1;

        while(i<=b){
            if(nums[i] == 0){
                temp = nums[r];
                nums[r++] = nums[i];
                nums[i] = temp;
                i++; 
            }
            else if(nums[i] == 2){
                temp = nums[b];
                nums[b--] = nums[i];
                nums[i] = temp;
            }
            else i++;
        }
    }
};