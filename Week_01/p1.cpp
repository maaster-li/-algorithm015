// p1 两数之和
// 1.暴力法
// 2.两遍hash
// 3.一遍hash 
// 本次采用方法3， 时间复杂度 O(n) 算法复杂度O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mData;   // unordered_map 效率最好，key为值，value为下标
        for(int i = 0; i < nums.size(); i++)
        {
            if(mData.find(target-nums[i]) != mData.end())     
            return {mData[target-nums[i]], i};        
            //  m[target-nums[i]]为已经加入map的元素的索引，所以小于本轮循环中的i，放在前面
            mData[nums[i]] = i;       //向map中添加元素
        }
        return {};//返回空
    }
};


