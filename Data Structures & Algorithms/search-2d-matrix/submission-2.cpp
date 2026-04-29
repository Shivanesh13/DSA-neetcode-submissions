class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row = 0;
     int colm = 0;

     int total_colm = matrix[0].size();
     int total_row = matrix.size();

     int top = 0;
     int bottom = total_row-1;
     int left = 0;
     int right = total_colm-1;

    while(top <= bottom){
        int mid = top + (bottom - top)/2;
        if(target < matrix[mid][right] && target > matrix[mid][left]){
            row = mid;
            break;
        }else if(target > matrix[mid][right]){
            top = mid + 1;
        } else if(target < matrix[mid][left]){
            bottom = mid - 1;
        }
        else if(target == matrix[mid][right] || target == matrix[mid][left]){
            return true;
        }
    }

    while(left <= right){
        int mid = left + (right - left)/2;
        if(target < matrix[row][mid]){
            right = mid - 1;
        }else if(target > matrix[row][mid]){
            left = mid + 1;
        }
        else {
            return true;
        }
    }
    return false;

    }
};
