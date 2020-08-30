//p189 旋转数组
//方法1：使用3次反转
//方法2：使用暴力法，直接移动k次
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //if(nums.size() <= 1) return ;
        if(k > nums.size()) k = k % nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

