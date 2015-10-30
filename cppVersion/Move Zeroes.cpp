class Solution {
public:
	void moveZeroes(vector<int>& nums)
	{
		for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		{
			if(*it == 0 && it != nums.end()-1)
			{
				for(vector<int>::iterator itt = it+1; itt != nums.end(); ++itt)
				{
					if(*itt != 0)
					{
						int tmp = *it;
						*it = *itt;
						*itt = tmp;
						break;
					}
				}
			}
		}
	}
};