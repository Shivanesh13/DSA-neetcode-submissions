class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i =0;
        int j = nums.size()-1;
        int sum = 0;
        vector<int>vect;
        unordered_map<int, int> arr;
        for(int i = 0;i < nums.size(); i++){
            if(arr.find(nums[i]) != arr.end()){
                vect.push_back(arr[nums[i]]);
                vect.push_back(i);
                return vect;
            }
                arr[target - nums[i]] = i;
        }
        return vect; 
    }
};
