class Solution 
{
    public:
        void setZeroes(vector<vector<int> >& matrix) 
        {
            // use the first row and first col as the tag array
            // before this should check if they need to be set zero
            int rows = matrix.size();
            if(rows == 0) return;
            int cols = matrix[0].size();
            if(cols == 0) return;
            
            bool fr0 = false, fc0 = false;
            for(int i = 0; i < rows; ++i)
            {
                if(matrix[i][0] == 0) fc0 = true;
            }
            for(int i = 0; i < cols; ++i)
            {
                if(matrix[0][i] == 0) fr0 = true;
            }
            
            for(int i = 1; i < rows; ++i)
            {
                for(int j = 1; j < cols; ++j)
                {
                    if(matrix[i][j] == 0)
                    {
                        matrix[0][j] = 0;
                        matrix[i][0] = 0;
                    }
                }
            }
            
            for(int i = 1; i < rows; ++i)
            {
                if(matrix[i][0] == 0)
                {
                    for(int j = 1; j < cols; ++j)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
            for(int i = 1; i < cols; ++i)
            {
                if(matrix[0][i] == 0)
                {
                    for(int j = 1; j < rows; ++j)
                    {
                        matrix[j][i] = 0;
                    }
                }
            }
            
            if(fr0)
            {
                for(int i = 0; i < cols; ++i) matrix[0][i] = 0;
            }
            if(fc0)
            {
                for(int i = 0; i < rows; ++i) matrix[i][0] = 0;
            }
            
            return;
            
        }

};