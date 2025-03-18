class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

vector<int> result;
        while (!matrix.empty()) {
            // 1) Add the first row of the matrix
            result.insert(result.end(), matrix[0].begin(), matrix[0].end());
            matrix.erase(matrix.begin());
        

            // 2) Append the last element of all remaining rows
            if (!matrix.empty() && !matrix[0].empty()) {
                for (auto& row : matrix) {
                    result.push_back(row.back());
                    row.pop_back();
                }
            }
             // 3) Add the reverse of the last row
            if (!matrix.empty()) {
                vector<int> lastRow = matrix.back();
                reverse(lastRow.begin(), lastRow.end());
                result.insert(result.end(), lastRow.begin(), lastRow.end());
                matrix.pop_back();
            }

             if (!matrix.empty() && !matrix[0].empty()) {
                for (int i = matrix.size() - 1; i >= 0; i--) {
                    result.push_back(matrix[i][0]);
                    matrix[i].erase(matrix[i].begin());
                }
            }
    
    }
         return result;   
    }
};