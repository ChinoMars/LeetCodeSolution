class Solution 
{
	public:
	    int removeElement(vector<int>& nums, int val) 
	    {
	    	if(nums.empty()) return 0;
	    	int n = nums.size();
	    	int len = n;
	    	for(int i = 0, curpos = 0; i < n; ++i)
	    	{
	    		if(nums[i] == val) --len;
	    		else nums[curpos++] = nums[i];
	    	}

	    	return len;
	        
	    }
};

// 遇到目标数字则将其用当前非目标数字覆盖