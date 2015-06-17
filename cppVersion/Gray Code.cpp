class Solution 
{
	public:
	    vector<int> grayCode(int n) 
	    {
	    	int codeSize = 1<<n;
	    	vector<int> gCode;

	    	for(int i = 0; i < codeSize; ++i)
	    	{
	    		int gCodeTmp = i ^ i>>1;
	    		gCode.push_back(gCodeTmp);
	    	}

	    	return gCode;

	    }
};