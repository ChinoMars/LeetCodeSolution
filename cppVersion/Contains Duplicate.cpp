class Solution 
{
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            if(nums.empty()) return false;
            set<int> myhush;
            for(int i = 0; i < nums.size(); ++i)
            {
                if(myhush.find(nums[i]) == myhush.end())
                    myhush.insert(nums[i]);
                else
                    return true;
            }
            return false;
        }
};