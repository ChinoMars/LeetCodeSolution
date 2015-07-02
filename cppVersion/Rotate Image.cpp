class Solution 
{
    public:
        void rotate(vector<vector<int>>& matrix) 
        {
            int len = matrix.size();

            for(int i = 0; i < len-1; ++i)
            {
            	for(int j = 0; j < len-i; ++j)
            		swap(matrix[i][j], matrix[len-1-j][len-1-i]);
            }

            for(int i = 0; i < len/2; ++i)
            {
            	for(int j = 0; j < len; ++j)
            	{
            		swap(matrix[i][j],matrix[len-1-i][j]);
            	}
            }
        }
};

// 先转置，再每行逆序
// 或者换个思路，先沿反对称轴转置，再每列逆序，如上