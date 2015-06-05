class Solution 
{
    public:
        int maxSubArray(vector<int>& nums) 
        {
            int len = nums.size();
            int fnlsum = INT_MIN, tmpsum = 0;

            for(int i = 0; i < len; ++i)
            {
                tmpsum = tmpsum>=0 ? tmpsum+nums[i] : nums[i];
                fnlsum = max(fnlsum,tmpsum);
            }
            
            return fnlsum;
        }
};