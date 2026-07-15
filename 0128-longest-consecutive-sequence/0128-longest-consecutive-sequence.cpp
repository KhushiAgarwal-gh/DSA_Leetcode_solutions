class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int cnt=0;
        int length = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                cnt=1;
               int x=it;

                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt+=1;
                }
                length =max(length,cnt);
            }
        }
        return length;
    }
};