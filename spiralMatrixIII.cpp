#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> results;
        int cnt = rows * cols, step = 1;

        while (results.size() < rows * cols)
        {
            // 右
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    vector<int> t;
                    t.push_back(rStart);
                    t.push_back(cStart);
                    results.push_back(t);
                }

                cStart++;
                cnt--;
            }
            // 下
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    vector<int> t;
                    t.push_back(rStart);
                    t.push_back(cStart);
                    results.push_back(t);
                }
                rStart++;

                cnt--;
            }
            step++;
            // 左
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    vector<int> t;
                    t.push_back(rStart);
                    t.push_back(cStart);
                    results.push_back(t);
                }
                cStart--;

                cnt--;
            }
            // 上
            for (int i = 0; i < step; i++)
            {
                // 判断
                if (rStart >= 0 && cStart >= 0 && rStart <= rows - 1 && cStart <= cols - 1)
                {
                    vector<int> t;
                    t.push_back(rStart);
                    t.push_back(cStart);
                    results.push_back(t);
                }
                rStart--;

                cnt--;
            }
            step++;
        }

        return results;
    }
};