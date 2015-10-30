class Solution {
public:
	vector<int> singleNumber(vector<int>& nums)
	{
		int AxorB = 0;
		for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		{
			AxorB ^= *it;
		}
		
		int A = 0, B = 0;
		int mask = AxorB & (~(AxorB - 1));
		for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
		{
			if((mask&*it) == 0)
			{
				A ^= *it; 
			}
			else
			{
				B ^= *it;
			}
		}
		vector<int> res;
		res.push_back(A);
		res.push_back(B);

		return res;
	}
};