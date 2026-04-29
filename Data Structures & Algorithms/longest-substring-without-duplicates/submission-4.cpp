class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = l+1;
        int temp = 1;
        unordered_map<char, int> umap;
        if(s.size() == 0){
            return 0;
        }
        umap[s[l]] = l;
        while(l < s.size()-1 && r < s.size()){
            if(s[l] == s[r]){
                umap[s[r]] = r;
                l++;
                r++;
            } else {
                if(umap.find(s[r]) != umap.end() && umap[s[r]] > l){
                    l = umap[s[r]] + 1;
                    umap[s[r]] = r;
                    r++;
                } else {
                    umap[s[r]] = r;
                    if(r - l + 1 > temp){
                        temp = r - l + 1;
                        cout << l << " " << r << " " << temp << endl; 
                    }
                    r++;
                }
            }
        }
        return temp;
    }
};
