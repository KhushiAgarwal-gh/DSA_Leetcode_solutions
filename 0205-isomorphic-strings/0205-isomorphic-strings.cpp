class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ms;
        unordered_map<char,char>mt;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(ms.find(s[i])!=ms.end()){
                if(ms[s[i]]!=t[i]) return false;
               
            }
            else{
                 ms[s[i]]=t[i];
            }

            if(mt.find(t[i])!=mt.end()){
                if(mt[t[i]]!=s[i]) return false;
            }
            else{
                mt[t[i]]=s[i];
            }
        }
             
        return true;
    }
};