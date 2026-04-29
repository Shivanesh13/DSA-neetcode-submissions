class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> umaps;
        vector<vector<string>> temp;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            umaps[temp].push_back(strs[i]);
        }

        for(auto iter : umaps){
            temp.push_back(umaps[iter.first]);
        }
        return temp;
    }
};
