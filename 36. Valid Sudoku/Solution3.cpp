class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false}, col[9][9]={false}, box[9][9]={false};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char ch = board[i][j];
                if(ch=='.'){continue;}
                int n = ch - '1';
                int boxer = (i/3)*3 + (j/3);
                if(row[i][n] || col[j][n] || box[boxer][n]){
                    return false;
                }
                row[i][n] = col[j][n] = box[boxer][n] = true;
            }
        }
        return true;
    }
};
