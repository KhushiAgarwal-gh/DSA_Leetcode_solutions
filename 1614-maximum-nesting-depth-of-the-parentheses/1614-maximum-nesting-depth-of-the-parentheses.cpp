class Solution {
public:
    int maxDepth(string s) {
        int curr =0;
        int res =0;
        for(char  el:s){
            if(el=='('){
                curr++;
                res = max(res,curr);
            }
            if( el==')')
                curr--;
                
            
        }

        return res;
    }
};