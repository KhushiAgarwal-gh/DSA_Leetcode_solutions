class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int,int>mpp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                mpp[grid[i][j]]++;
            }
            }
            int missing =-1;
            int repeating =-1;
            for(int i=1;i<=n*n;i++){
                if(mpp[i]==2){
                    repeating =i;
                }
                if(mpp[i]==0){
                    missing =i;
                }
            }
            return {repeating,missing};
    }
};