class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // [0, j) 为符合题意(没0)  [j, nums.size() - 1] 不一定符合题意
        // j 为当前赋值的元素
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) nums[j++] = nums[i];
        }

        // [0, j) 均为非0 [j, nums.size() - 1] 不一定为0
        for (; j < nums.size(); j++) nums[j] = 0;
    }
};