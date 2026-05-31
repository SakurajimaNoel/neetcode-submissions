class Solution {
public:
    int maxArea(vector<int>& heights) {
        int sol = 0;
        int i = 0 , j = heights.size()-1;

        while(i<j){
            sol = max(sol,(abs(j-i) * min(heights[i],heights[j])));
            if(heights[i]>heights[j]) --j;
            else ++i;
        }

        return sol;
    }
};
