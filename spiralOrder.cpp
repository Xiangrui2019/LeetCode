#include <vector>
using namespace std;

#define BE_PRINTED -500

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(); // m 行 n列
        vector<int> results;
        int x = 0, y = 0, cnt = 1;
        results.push_back(matrix[x][y]);
        matrix[x][y] = BE_PRINTED;

        while (cnt < m * n)
        {
            // right
            while (y < n - 1 && matrix[x][y + 1] != BE_PRINTED) {
                results.push_back(matrix[x][++y]);
                matrix[x][y] = BE_PRINTED;
                cnt++;
            }
            // down
            while (x < m - 1 && matrix[x + 1][y] != BE_PRINTED) {
                results.push_back(matrix[++x][y]);
                matrix[x][y] = BE_PRINTED;
                cnt++;
            }
            // left
            while (y > 0 && matrix[x][y - 1] != BE_PRINTED) {
                results.push_back(matrix[x][--y]);
                matrix[x][y] = BE_PRINTED;
                cnt++;
            }
            // up
            while (x > 0 && matrix[x - 1][y] != BE_PRINTED) {
                results.push_back(matrix[--x][y]);
                matrix[x][y] = BE_PRINTED;
                cnt++;
            }
        }

        return results;
    }
};