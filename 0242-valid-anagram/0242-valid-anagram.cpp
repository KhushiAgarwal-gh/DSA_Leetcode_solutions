class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s.length()!=t.length()) return false;
        for(char el:s){
            mp1[el]++;
        }
        for(char el:t){
            mp2[el]++;
        }
        return mp1==mp2;
    }
};