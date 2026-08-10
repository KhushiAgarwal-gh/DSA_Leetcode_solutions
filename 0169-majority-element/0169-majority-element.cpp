class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mini = (n/2)+1;
        
        int el=nums[0];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
        else if(el==nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            if(el==nums[i]){
                cnt++;
            }
        }
        if(cnt>=mini)
        return el;
        return -1;
    }
};