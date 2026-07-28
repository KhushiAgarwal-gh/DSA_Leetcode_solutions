class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size();
        int cnt=0;
        int length=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);

            
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                cnt=1;
                int x=it;
            
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt++;
            }
            
          length=max(length,cnt);
        }
        }
        return length;
    }
};