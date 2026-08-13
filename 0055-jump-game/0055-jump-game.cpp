class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int max_Ind=nums[0];
        for(int i=1;i<=n-1;i++){
            if(i>max_Ind) return false;
            max_Ind=max(max_Ind,i+nums[i]);
        }
        return true;
    }
};