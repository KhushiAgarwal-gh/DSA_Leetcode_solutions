class Solution {
public:
    bool possible(vector<int>& arr,int  bloomDay,int m,int k){
        int n = arr.size();
        int cnt=0;
        int bouquetes = 0;
        for(int i=0;i<n;i++){
             if(arr[i]<=bloomDay){
                cnt++;
                if(cnt==k){
                    bouquetes++;
                    cnt=0;
                }
             }
             else{
                cnt=0;
             }
        }
        return bouquetes>=m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
       
            long long total = 1LL*k*m;
            int ans=-1;
            if(total>n) return -1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(possible(bloomDay,mid,m,k)){
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