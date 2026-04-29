class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int right = s1.length()-1;

        unordered_map <char, int> maps1;
        unordered_map <char, int> maps2;

        for(int i = 0;i < s1.length(); i++){
            maps1[s1[i]]++;
            maps2[s2[i]]++;
        }

        while(right < s2.length()){
            bool works = true;
            for(char iter : s1){
                if(maps2.find(iter) != maps2.end()){
                    if(maps2[iter] == maps1[iter] && works == true){
                        works = true;
                    } else{
                        works = false;
                    } 
                } else {
                    works = false;
                }
            }
            if(works == true){
                return true;
            } 
            maps2[s2[left]]--;
            left++;
            right++;
            maps2[s2[right]]++;
        }
        return false;
    }
};
