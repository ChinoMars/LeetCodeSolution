class Solution 
{
	public:
	    int uniquePaths(int m, int n) 
	    {
	    	vector<vector<int> > mat(m,vector<int>(n));
	    	for(int i = 0; i < n; ++i)
	    		mat[0][i] = 1;
	    	for(int i = 0; i < m; ++i)
	    		mat[i][0] = 1;
	    	for(int r = 1; r < m; ++r)
	    		for(int c = 1; c < n; ++c)
	    			mat[r][c] = mat[r-1][c] + mat[r][c-1];

	    	return mat[m-1][n-1];
		}
};