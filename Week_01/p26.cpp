//leetcode problem 26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //注意审题，题目明确不用删除多余的，双指针法
        //时间复杂度 O(n) 空间复杂度 O(1)
        if(nums.size() == 0) return 0; //特殊情况判断
        int outidx = 0;//低位置的指针
        for(int idx=1;idx < nums.size();idx++)//idx是高位置指针
        {
            if(nums[outidx] != nums[idx] )
            {
                nums[++outidx] = nums[idx];//替换第一个不相等的
            }
        }
        return ++outidx;//输出的是长度，数组是从0计算的需要加一
    }
};
