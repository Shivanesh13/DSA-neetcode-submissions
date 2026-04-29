class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> hash_map;
        for(int i = 0; i < s.length(); i++){
            hash_map[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            auto find = hash_map.find(t[i]);
            if(find == hash_map.end()){
                return false;
             }
            else if(hash_map[t[i]] == 0){
                return false;
            }
            else {
                hash_map[t[i]]--;
            }
        }
        for(auto i = hash_map.begin(); i != hash_map.end(); i++){
            if(i->second > 0)
                return false;
        }
        return true;
    }
};
