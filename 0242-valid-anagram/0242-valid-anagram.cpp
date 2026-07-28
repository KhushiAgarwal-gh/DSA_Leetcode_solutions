class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ms;
        unordered_map<char,int>mt;
        if(s.length()!=t.length()) return false;
        for(auto el:s){
            ms[el]++;
        }
        for(auto el:t){
            mt[el]++;
        }
        return ms==mt;
    }
};