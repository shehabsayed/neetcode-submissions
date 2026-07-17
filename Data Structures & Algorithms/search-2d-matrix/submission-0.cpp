class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int max_row = matrix.size()-1, max_col = matrix[0].size()-1;
        int low_row = 0, high_row = max_row, mid_row = 0;
        while(high_row >=0 && low_row <= max_row && low_row <= high_row){
            mid_row = low_row + ((high_row - low_row) / 2);
            if(matrix[mid_row][max_col] < target){
                if(matrix[mid_row][0] < target) low_row = mid_row + 1;
                else break;
            }
            else if(matrix[mid_row][max_col] > target){
                if(matrix[mid_row][0] > target) high_row = mid_row - 1;
                else break;
            }
            else return true;
        }
        int low_col = 0, high_col = max_col, mid_col = 0;
        while(high_col >=0 && low_col <= max_col && low_col <= high_col){
            mid_col = low_col + ((high_col - low_col) / 2);
            if(matrix[mid_row][mid_col] < target) low_col = mid_col + 1;
            else if(matrix[mid_row][mid_col] > target) high_col = mid_col - 1;
            else return true;
            
        }
        return false;
    }
};