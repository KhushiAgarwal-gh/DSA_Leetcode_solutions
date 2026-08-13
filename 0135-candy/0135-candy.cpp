class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum=1;
        int i=1;
        int n=ratings.size();
        
        while(i<n){
            if(ratings[i]==ratings[i-1]){
                sum+=1;
                i++;
                continue;
            
            
        }
        int Peak=1;
        while(i<n&&ratings[i]>ratings[i-1]){
            Peak+=1;
            sum+=Peak;
            i++;

        }
        int down=1;
        while(i<n&&ratings[i]<ratings[i-1]){
            sum+=down;
            down++;
            i++;
        }
        if(down>Peak){
            sum=sum+(down-Peak);
        }
        }
        return sum;
    }
};