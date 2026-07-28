class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string First = strs[0];
        string last = strs[strs.size()-1];
        int i=0;
        while(i<First.size()&&i<last.size()&&First[i]==last[i])
        i++;

        return First.substr(0,i);
    }
};