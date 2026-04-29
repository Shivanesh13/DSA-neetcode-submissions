class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> arr;
        int large=1;
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size();i++){
            if(arr.find(nums[i]-1) != arr.end()){
                arr[nums[i]] = arr[nums[i]-1] + 1;
                if(arr[nums[i]] > large){
                    large = arr[nums[i]];
                }
            }else {
                arr[nums[i]] = 1;
            }
        }
        return large;
    }
};
