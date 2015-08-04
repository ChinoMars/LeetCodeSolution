class Solution
{
public:
    bool isAnagram(string s, string t)
    {
    	if(s.size() != t.size())
    	{
    		return false;
    	}    

    	int bit[26] = {0}, len = s.size();

    	for(int i = 0; i < len; ++i)
    	{
    		bit[s[i]-'a']++;
    	}

    	for(int i = 0; i < len; ++i)
    	{
    		if(--bit[t[i]-'a'] < 0)
    		{
    			return false;
    		}
    	}

    	return true;
    }
};