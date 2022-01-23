class Solution {
public:
    bool isValidCell(vector<vector<char>> &board,int row,int col){
        set<char>st;
        int cnt=0;
        for(int r=0;r<9;r++){
            if(board[r][col]!='.'){
                st.insert(board[r][col]);
                cnt++;
            }
        }
        if(st.size()!=cnt){
            return 0;
        }
        st.clear();
        cnt=0;
        for(int c=0;c<9;c++){
            if(board[row][c]!='.'){
            st.insert(board[row][c]);
            cnt++;
            }
        }
        
        if(st.size()!=cnt){
            return 0;
        }
        
        int startRow=row-(row%3);
        int startCol=col-(col%3);
        st.clear();
        cnt=0;
        for(int i=startRow;i<startRow+3;i++){
            for(int j=startCol;j<startCol+3;j++){
                if(board[i][j]!='.'){
                st.insert(board[i][j]);
                cnt++;
                }
            }
        }
        if(cnt!=st.size()){
            return 0;
        }
        
        return 1;
        
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(!isValidCell(board,i,j)){
                    return 0;
                }
            }
        }
        return 1;
    }
};