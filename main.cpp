class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        multimap<int, int> tempData;
        
        for (int i = 0; i < nums.size(); ++i) {
            tempData.insert(std::pair<int, int>(nums[i], i));
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            
            multimap<int, int>::iterator iter = tempData.find(diff);
            
            if (iter != tempData.end() && iter->second != i) {
                ret.push_back(i);
                ret.push_back(iter->second);
                break;
            }
        }
        return ret;
    }
};
