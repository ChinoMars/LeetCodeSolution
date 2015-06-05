class Solution 
{
    public:
        int singleNumber(vector<int>& nums) 
        {
            int count[32] = {0};
            int res = 0;
            int len = nums.size();
            for(int i = 0; i < 32; ++i)
            {
                for(int j = 0; j < len; ++j)
                {
                    if((nums[j] >> i) & 1)
                    {
                        count[i]++;
                    }
                }
                res |= ((count[i] % 3) << i);
            }
            
            return res;
        }
};