class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ma;
        unordered_map<char,int>mt;
        for(const auto &el:s){
            ma[el]++;

        }
        for(const auto &el:t){
            mt[el]++;
        }
        return ma==mt;
    }
};