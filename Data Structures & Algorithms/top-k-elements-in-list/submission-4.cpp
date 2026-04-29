class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> data_store;
        vector<int>act;
        for(int i = 0; i < nums.size();i++){
            data_store[nums[i]]++;
        }
        int max = 0;
        vector<pair <int, int>> pairs;

        for(auto iter : data_store){
            pair <int, int >temp;
            temp.first = iter.first;
            temp.second = iter.second;
            pairs.push_back(temp);
        }

        sort(pairs.begin(), pairs.end());

        for(int i = 0; i < pairs.size(); i++){
            for(int j = i+1; j < pairs.size(); j++){
                if(pairs[j].second > pairs[i].second){
                    pair <int, int > tmp = pairs[i];
                    pairs[i] = pairs[j];
                    pairs[j] = tmp;
                }
            }
            if(i >= k){
                return act;
            }else {
                act.push_back(pairs[i].first);
            }
        }


        return act;
    }
};
