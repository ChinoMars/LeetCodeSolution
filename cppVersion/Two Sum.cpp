class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            map<int,int> nummap;
            vector<int> res;
            for(int i = 0; i < nums.size(); ++i)
            {
                if(nummap.find(nums[i]) == nummap.end()) nummap[nums[i]] = i;
                
                int subtar = target - nums[i];
                if(nummap.find(subtar) != nummap.end() && nummap[subtar] != i)
                {
                    res.push_back(nummap[subtar]+1);
                    res.push_back(i+1);
                    break;
                }
            }
            
            return res;
        }
};