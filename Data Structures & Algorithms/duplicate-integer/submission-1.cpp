class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> hash_map;
        for(int i = 0; i < nums.size(); i++){
            hash_map[nums[i]]++;
            if(hash_map[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};