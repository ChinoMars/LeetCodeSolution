class Solution 
{
	public:
	    void sortColors(vector<int>& nums) 
	    {
	    	int left = 0, right = nums.size()-1;
	    	int cur = left;
	    	while(cur <= right)	    
	    	{
	    		if(nums[cur] == 0) 
	    		{
	    			if(cur > left) myswap(nums,cur,left++);
	    			else ++cur;
	    		}
	    		else if(nums[cur] == 2)
	    		{
	    			if(cur < right) myswap(nums,cur,right--);
	    			else ++cur;
	    		}
	    		else ++cur;
	    	}
	    }

	private:
		void myswap(vector<int>& nums, int i, int j)
		{
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
};