class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n));
        int l=0,top=0; int r=n-1,bot=n-1;
        int x = 1;
        while(l<=r && top<=bot){
            for(int i=l; i<=r; i++){
                result[top][i] = x++;
            }
            top++;
            for(int i=top; i<=bot; i++){
                result[i][r] = x++;
            }
            r--;
            if(top<=bot){
                for(int i=r; i>=l; i--){
                    result[bot][i] = x++;
                }
                bot--;
            }
            if(l<=r){
                for(int i=bot; i>=top; i--){
                    result[i][l] = x++;
                }
                l++;
            }
        }
        return result;
    }
};
