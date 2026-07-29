class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int minilen=INT_MAX;
        for(char ch:t){
          mp[ch]++;
        }
        int left=0;
        int start =0;
        int cnt = t.size();
        for(int right=0;right<s.size();right++){
            if(mp[s[right]]>0)
            cnt--;

            mp[s[right]]--;

            while(cnt==0){
                if(right-left+1<minilen){
                    minilen=right-left+1;
                    start=left;
                }

                mp[s[left]]++;

                if(mp[s[left]]>0){
                    cnt++;
                }
                left++;
            }


        }
        if(minilen == INT_MAX)
    return "";
        return s.substr(start,minilen);
    }
};