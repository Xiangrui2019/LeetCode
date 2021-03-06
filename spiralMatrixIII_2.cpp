#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> results;
        int step = 1;

        while (results.size() < rows * cols)
        {
            // 右
            // [0, i) 为已经输出的
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    results.push_back({rStart, cStart});
                }

                cStart++;
            }
            // 下
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    results.push_back({rStart, cStart});
                }

                rStart++;
            }
            step++;
            // 左
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    results.push_back({rStart, cStart});
                }

                cStart--;
            }
            // 上
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    results.push_back({rStart, cStart});
                }
                
                rStart--;
            }
            step++;
        }

        return results;
    }
};