class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> data;
        for(int i = 0;i < nums.size(); i++) {
            data[nums[i]]++;
            if(data[nums[i]] > 1) return true;
        }
        return false;
    }
};