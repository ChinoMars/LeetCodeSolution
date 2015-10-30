class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
    	int len = nums.size();
    	vector<int> res(len, 1);
    	int left = 1;
    	for(int i = 0; i < len; ++i)
    	{
    		res[i] *= left;
    		left *= nums[i];
    	}
    
    	int right = 1;
    	for(int i = len-1; i >= 0; --i)
    	{
    		res[i] *= right;
    		right *= nums[i];
    	}
    
    	return res;
    }
};