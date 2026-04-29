class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        for i in range(0,9):
            row = set()
            colm = set()
            for j in range(0,9):
                if board[i][j] in row:
                    print(f" 1st row : {i} colm : {j}")
                    return False
                elif board[i][j] != ".": 
                    print(f" 1st row : {i} colm : {j} data : {board[i][j]}")
                    row.add(board[i][j])
                
                if board[j][i] in colm: 
                    print(f" 2nd row : {j} colm : {i}")
                    return False
                elif board[j][i] != ".": 
                    print(f" 2nd row : {j} colm : {i} data : {board[j][i]}")
                    colm.add(board[j][i])
            
        for i in range(0,9,3):
            for j in range(0,9,3):
                block = set()
                for k in range(0,3):
                    r = i + k
                    for m in range(0,3):
                        c = j + m
                        if board[r][c] in block:
                            print(f" 3rd row : {r} colm : {c} k : {k}")
                            print(block)  
                            return  False
                        elif board[r][c] != ".":
                            block.add(board[r][c])

        return True

        