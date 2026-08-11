class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int student=0;
        int cookie=0;
        while(student<g.size()&&cookie<s.size()){
            if(s[cookie]>=g[student]){
                student++;
            }
            cookie++;
        }
        return student;
    }
};