class Solution {
public:
    long long caltotalHr(vector<int>& piles , int speed){
        long long totalHr=0;
        for(auto bananas:piles){
            totalHr+=ceil((double)bananas/speed);
        }
        return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int max_pile=*max_element(piles.begin(),piles.end());
        int high=max_pile;
        int ans=max_pile;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalHr=caltotalHr(piles,mid);
            if(totalHr<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};