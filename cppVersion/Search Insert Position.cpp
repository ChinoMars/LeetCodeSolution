class Solution
{
    public:
        int searchInsert(vector<int>& nums, int target) 
        {
            if(nums.empty()) return 0;
            if(nums.size() == 1 && target < nums[0]) return 0;
            if(target == nums[0]) return 0;
            if(target < nums[0]) return 0;
            for(int i = 1; i < nums.size(); ++i)
            {
                if(target == nums[i]) return i;
                if(target < nums[i] && target > nums[i-1]) return i;
            }
            return nums.size();
        }
};