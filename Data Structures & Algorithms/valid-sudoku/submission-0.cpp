class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.size() == 0 || board[0].size() == 0) return false;
        int M = board.size();
        int N = board[0].size();
        set <char> rows;
        set <char> colm;
        set <char> box;
        int row = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int clm = 3*j;
                int row = 3*i;
                box.clear();
                for(int k = 0; k < 9; k++){
                    row = 3*i + (k/3);
                    clm = 3*j + (k%3);
                    if(board[row][clm] != '.'){
                        if(box.find(board[row][clm]) != box.end()){
                            cout << i << " " << j << " " << k << "row " << row << "colm : " << clm << " Third" << endl;
                            return false;
                        }
                        box.insert(board[row][clm]);
                    }
                }
            }
        }

        for(int i =0;i < M;i++){
            colm.clear();
            rows.clear();
            for(int j = 0; j < N;j++){
                if(board[i][j] != '.'){
                    if(colm.find(board[i][j]) != colm.end()){
                        cout << i << " " << j << " First" << endl;
                        return false;
                    }
                    colm.insert(board[i][j]);
                } 
                if(board[j][i] != '.'){
                    if(rows.find(board[j][i]) != rows.end()){
                        cout << i << " " << j << " Second " << board[j][i] << endl;
                        return false;
                    }
                    rows.insert(board[j][i]);
                }
            }
        }
        return true;
    }
};
