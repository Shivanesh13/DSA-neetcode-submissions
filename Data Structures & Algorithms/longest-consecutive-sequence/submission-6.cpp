class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map <int, int> data;

        for(int i = 0;i < nums.size(); i++) {
            data[nums[i]]++;
        }

        int max = 0;
        for(auto i : data){
            int count = 0;
            int temp = i.first;
            while(data.find(temp) != data.end()){
                count++;
                temp += 1;
            }
            if(max < count){
                max = count;
            }
        }
        return max;
    }
};
