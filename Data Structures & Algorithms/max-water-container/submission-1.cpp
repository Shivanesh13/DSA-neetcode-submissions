class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int sum = 0;
        while(i < j){
            if(sum < ((min(heights[i], heights[j])*(j-i)))){
                sum = (min(heights[i], heights[j])*(j-i));
            }
            if(heights[i] < heights[j]){
                i++;
            } else if((i+1) < (j-1) && heights[i] == heights[j] && heights[i+1] > heights[j-1]) {
                i++;
            }
            else {
                j--;
            }
        }
        return sum;
    }
};
