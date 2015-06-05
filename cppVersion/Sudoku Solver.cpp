class Solution
{
    public:
   		const static int NUM = 3;
		const static int QNUM = 9;
 
    	bool isValid(vector<vector<char> >& board, int row, int col)
        {
        	int subrow = row / NUM;
        	int subcol = col / NUM;
        	for(int i = 0; i < QNUM; ++i)
        	{
        		if(i != col && board[row][col] == board[row][i])
        			return false;
        		if(i != row && board[row][col] == board[i][col])
        			return false;
        		int r = subrow*NUM + i%NUM, c = subcol*NUM + i/NUM;
        		if(!(r == row && c == col) && board[row][col] == board[r][c])
        			return false;
        	}
        	return true;
        }

        bool solverSudo(vector<vector<char> >& board, int r, int c)
        {
        	if(r > QNUM-1) return true;
        	int r_next = c==8?r+1:r;
        	int c_next = c==8?0:c+1;

        	if(board[r][c] != '.')
        	{
        		if(solverSudo(board,r_next,c_next)) return true;
        	}
        	else
        	{
        		for(char i = '1'; i <= '9'; i++)
        		{
        			board[r][c] = i;
        			if(isValid(board,r,c) && solverSudo(board,r_next,c_next))
        				return true;
        		}
        		board[r][c] = '.';
        	}
        	return false;

        }

    	void solveSudoku(vector<vector<char> >& board)
    	{
    		if(board.size() != QNUM || board[0].size() != QNUM)
    			return;
    		solverSudo(board,0,0);
    	}
        
};