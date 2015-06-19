class Solution 
{
	public:
	    int maxArea(vector<int>& height) 
	    {
	    	int n = height.size();
	    	int left = 0, right = n-1;
	    	int res = 0;

	    	while(left < right)
	    	{
	    		res = max(res,(right-left)*min(height[left],height[right]));
	    		if(height[left] < height[right])
	    		{
	    			int tmp = left;
	    			while(tmp < right && height[tmp] <= height[left]) tmp++;
	    			left = tmp;
	    		}
	    		else
	    		{
	    			int tmp = right;
	    			while(tmp > left && height[tmp] <= height[right]) tmp--;
	    			right = tmp;
	    		}	
	    	}

	    	return res;
	        
	    }
};

// 由两边先中间靠拢，由于靠拢过程中区间长度减小，要使容量增加，则必须要得到更高的内部高度