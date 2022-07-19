class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /**
          * [0, j) 中 无任何元素等于val   [j, nums.size() - 1]中可能有也可能无
          * j 是下一个要赋值的元素
        **/
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != val) nums[j++] = nums[i];

        return j;
    }
};