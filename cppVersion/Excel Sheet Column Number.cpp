class Solution
{
    public:
        int titleToNumber(string s) 
        {
            int colNum = 0;
            for(int i = s.size()-1; i >= 0; --i)
            {
                int weight = pow(26,s.size()-1-i);
                colNum += (s[i]-'@')*weight;
            }
            
            return colNum;
        }
};