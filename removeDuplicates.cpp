class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();

        // [0, j) 之内数据满足题意  [j, len-1]不一定满足题意
        // j 是准备要赋值的元素
        int j = 1;
        for (int i = 1; i < len; i++) {
            if (nums[j - 1] != nums[i])
                nums[j++] = nums[i];
        }

        return j;
    }
};