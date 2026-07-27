class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el;
        int mini = (n/2)+1;
        int cnt=0;
        for(int i=0;i<n;i++){
           if(cnt==0){
            el=nums[i];
            cnt=1;
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
            if(cnt>=mini){
                return el;

            }
        }
        return -1;
    }
};