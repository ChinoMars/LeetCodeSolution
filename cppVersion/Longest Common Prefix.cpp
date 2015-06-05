class Solution
{
    public:
        string longestCommonPrefix(vector<string>& strs) 
        {
            if(strs.empty()) return "";
            
            if(strs[0] == "") return "";
            string prefixer = strs[0];
            
            for(int i = 1; i < strs.size(); ++i)
            {
                if(strs[i] == "") return "";
                int prefixLen = prefixer.length() < strs[i].length() ? prefixer.length() : strs[i].length();
                
                int j = 0;
                for(; j < prefixLen; ++j)
                {
                    if(prefixer[j] != strs[i][j]) break;
                }
                prefixer = prefixer.substr(0,j);
            }
            
            return prefixer;
            
        }
};