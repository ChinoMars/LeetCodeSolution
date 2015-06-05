class Solution 
{
    public:
        inline int rtoi(char r)
        {
            switch(r)
            {
                case 'M': return 1000;
                case 'D': return 500;
                case 'C': return 100;
                case 'L': return 50;
                case 'X': return 10;
                case 'V': return 5;
                case 'I': return 1;
                default: return 0;
            }
        }
        
        int romanToInt(string s) 
        {
            int num = 0;
            for(int i = 0; i < s.size(); ++i)
            {
                if(rtoi(s[i]) < rtoi(s[i+1]) && i < s.size()-1) num -= rtoi(s[i]);
                else num += rtoi(s[i]);
            }
            return num;
        }
};