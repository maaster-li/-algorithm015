//49. 字母异位词分组
//使用map，key值是字母排序后的值，字母异位词排序后是相同的值

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vRes;
        if(strs.empty()) return vRes;
        map<string ,int> strMap;//利用key来获取字母异或
        for(auto& str : strs){
            string raw = str;
            sort(str.begin(), str.end());//排序，获取key
            if(strMap.find(str) != strMap.end())
            {
                vRes[strMap[str]].push_back(raw);
            }
            else{
                strMap[str] = (signed) vRes.size();
                vRes.push_back(vector<string>{raw});
            }
        }
        return vRes;
    }
};

