class Solution
{
    public:
        int maxProfit(vector<int>& prices)
        {
            if(prices.empty()) 
                return 0;
            int prof = 0;
            for(int i = 0; i < prices.size()-1; ++i)
            {
                int sub = prices[i+1] - prices[i];
                if(sub > 0)
                    prof += sub;
            }
            
            return prof;
        }
};