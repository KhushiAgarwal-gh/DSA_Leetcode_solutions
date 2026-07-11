class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>ms;
        ms['I']=1;
        ms['V'] =5;
        ms['X']=10;
       ms['L']= 50;
        ms['C']=100;
        ms['D']=500;
        ms['M']=1000;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(ms[s[i]]<ms[s[i+1]]){
                ans-=ms[s[i]];
            }
            else{
               ans+=ms[s[i]];
            }
        }
        return ans;
    }
};