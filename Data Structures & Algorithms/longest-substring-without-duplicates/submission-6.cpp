class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int index = 0;
        unordered_map <char,int> umap;
        int l = 0;
        int r = l+1;
        int max = 0;
        if(s.length() == 0) return 0;
        else if(s.length() == 1) return 1;
        umap[s[l]]++;
        while((r < s.size())){
            if(umap.find(s[r]) != umap.end()){
                int temp = l;
                while(s[temp] != s[r]){
                    umap.erase(s[temp]);
                    temp++;
                }
                //umap.erase(s[temp]);
                l = temp + 1;
                r++;
                //cout << "l : " << l << " r : " << r << endl;
            }else {
                //cout << "l : " << l << " r : " << r << endl;
                umap[s[r]] = 1;
                r++;
            }

            if(max < umap.size()) max = umap.size();
            
        }
        return max;
    }
};
