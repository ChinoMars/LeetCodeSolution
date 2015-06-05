class Solution 
{
    public:
        int majorityElement(vector<int>& nums) 
        {
            map<int,int> nummap;
            int len = nums.size();
            for(int i = 0; i < len; ++i)
            {
                if(nummap.find(nums[i]) != nummap.end())
                {
                    if(++nummap[nums[i]] > len/2) return nums[i];
                    
                }
                else nummap[nums[i]] = 1;
                
            }
            return nums[0];
            
        }
};