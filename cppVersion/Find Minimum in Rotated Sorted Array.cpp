class Solution 
{
    public:
        int findMin(vector<int>& nums) 
        {
            if(nums.size() == 1) return nums[0];
            if(nums[0] < nums[nums.size()-1]) return nums[0];
            
            int half = nums.size()/2;
            int flag = nums.size()-1;
            while(nums[half] > nums[half+1])
            {
                if(nums[half] > nums[flag])
                {
                    half = (half+flag)/2;
                }
                else
                {
                    flag = half;
                    half = half/2;
                }
            }
            return nums[half];
        }
};