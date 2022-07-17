#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n);
        int x = 0, y = 0, cnt = 1; 
        for (int i = 0; i < matrix.size(); i++) matrix[i].resize(n);
        matrix[x][y] = 1;

        while (cnt < n * n)
        {
            // 右
            while (y < n - 1 && !matrix[x][y + 1]) matrix[x][++y] = ++cnt;
            // 下
            while (x < n - 1 && !matrix[x + 1][y]) matrix[++x][y] = ++cnt;
            // 左
            while (y > 0 && !matrix[x][y - 1]) matrix[x][--y] = ++cnt;
            // 上
            while (x > 0 && !matrix[x - 1][y]) matrix[--x][y] = ++cnt;
        }

        return matrix;
    }
};