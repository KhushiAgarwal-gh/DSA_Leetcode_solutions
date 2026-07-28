class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        auto comp = [&](char a , char b){
            if(freq[a]==freq[b]) return a<b;
            return freq[a]>freq[b];
        };
        sort(s.begin(),s.end(),comp);
        return s;
    }
};