class Solution {
public:
    int countlive(vector<vector<int>> board,int i,int j,int m,int n){
        int count = 0;
        if(board[i][j]==1) count--;
        for(int a = i-1;a<i+2;a++){
            for(int b=j-1;b<j+2;b++){
                if(a>=0 && a<m && b>=0 &&  b<n && board[a][b]==1) count++;
            }
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> ans(m,vector(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count = countlive(board,i,j,m,n);
                if(board[i][j]==1){
                    if(count<2 || count>3) ans[i][j] = 0;
                    else ans[i][j] = 1;
                }
                else{
                    if(count==3) ans[i][j] = 1;
                    else ans[i][j] = 0;
                }
            }
        }
        board = ans;
    }
};