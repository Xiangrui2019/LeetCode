#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m);
        int x = 0, y = 0, cnt = 1;
        ListNode* cur = head;
        for (int i = 0; i < m; i++) matrix[i].resize(n);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) matrix[i][j] = -1;
        matrix[x][y] = cur->val;

        while (cnt < m * n && cur->next != nullptr)
        {
            // right
            while (y < n - 1 && matrix[x][y + 1] == -1 && cur->next != nullptr)
            {
                matrix[x][++y] = cur->next->val;
                cur = cur->next;
                ++cnt;
            }

            // down
            while (x < m - 1 && matrix[x + 1][y] == -1 && cur->next != nullptr)
            {
                matrix[++x][y] = cur->next->val;
                cur = cur->next;
                ++cnt;
            }

            // left
            while (y > 0 && matrix[x][y - 1] == -1 && cur->next != nullptr)
            {
                matrix[x][--y] = cur->next->val;
                cur = cur->next;
                ++cnt;
            }

            // up
            while (x > 0 && matrix[x - 1][y] == -1 && cur->next != nullptr)
            {
                matrix[--x][y] = cur->next->val;
                cur = cur->next;
                ++cnt;
            }
        }

        return matrix;
    }
};