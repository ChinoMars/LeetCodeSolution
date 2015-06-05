class Solution 
{
    public:
        int climbStairs(int n) 
        {
            if(!n) return 0;
            if(1 == n) return 1;
            if(2 == n) return 2;
            
            // s[n] = s[n-1] + s[n-2]
            int step[2] = {1,2};
            for(int i = 3; i <= n; ++i)
            {
                int tmp = step[1];
                step[1] = step[0]+step[1];
                step[0] = tmp;
            }
            
            return step[1];
        }
};