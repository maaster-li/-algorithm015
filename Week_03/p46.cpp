//46. 全排列

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> result;
        getpermute(nums,nums.size(),output,result);       
        
        return output;
        
    }
 //回溯方法
    void getpermute(vector<int> &nums,int level,vector<vector<int>> &output,vector<int> &result){
        if(level == 0){
            output.push_back(result);
            return;
        }
        
        for(int i = 0;i<nums.size();i++){
            if(find(result.begin(),result.end(),nums[i])!= result.end()){
                continue;
            }
            result.push_back(nums[i]);
            getpermute(nums,level-1,output,result);
            result.pop_back();
        }        
        
    }

};
