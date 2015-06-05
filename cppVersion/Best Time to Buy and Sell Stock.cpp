class Solution 
{
    public:
        int maxProfit(vector<int>& prices) 
        {
            if(prices.empty())
                return 0;
            int maxprof = 0, normprof = 0;
            for(int i = 0; i < prices.size()-1; ++i)
            {
                normprof = (normprof + prices[i+1] - prices[i] > 0)?(normprof + prices[i+1] - prices[i]):0;
                maxprof = (maxprof > normprof)?maxprof:normprof;
            }
            
            return maxprof;
        }
};