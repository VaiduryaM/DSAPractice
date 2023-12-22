//74. Search a 2D Matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //s30
        //convert to 1D array
        if(matrix.size() == 0) return false;
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0, high = m*n - 1;

        while(low <= high){
            int mid = low +(high - low) /2;

            int r = mid / n;
            int c = mid % n;

            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] < target) low = mid+1;
            else high = mid -1;
        }

        return false;

        /*
        //parse through rows
        int lowR = 0;
        int highR = matrix.size() - 1;

        while(lowR < highR){
            int mid = lowR+(highR - lowR) /2;

            if(matrix[mid][0] == target){
                return true;
            }
            //effects?
            if(matrix[mid][0] < target && target < matrix[mid+1][0]){
                lowR = mid;
                break;
            }

            if(matrix[mid][0] < target){
                lowR = mid+1;
            }
            else{
                highR = mid -1;
            }
        }


        //parse through cols
        int lowC = 0;
        int highC = matrix[0].size() - 1;
        
        while(lowC <= highC){
            int mid = lowC + (highC - lowC)/2;

            if(matrix[lowR][mid] == target){
                return true;
            }

            if(matrix[lowR][mid] < target){
                lowC = mid+1;
            }else{
                highC = mid -1;
            }
            
            
            
        }

        return false;
        */
    }
};