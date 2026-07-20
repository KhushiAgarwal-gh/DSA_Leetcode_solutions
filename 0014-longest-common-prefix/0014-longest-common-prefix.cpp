class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string First = strs.front();
        string Last = strs.back();
        int i=0;
        while(i<First.size()&&i<Last.size()&&First[i]==Last[i]){
            i++;
        }
        return First.substr(0,i);
    }
};