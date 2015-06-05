class Solution 
{
    public:
        string minWindow(string s, string t) 
        {
            int tmap[128] = {0};
            bool isvalid[128] = {false};
            for(int i = 0; i < t.size(); ++i)
            {
                isvalid[t[i]] = true;
                ++tmap[t[i]];
            }
            
            int cnt = 0, head = 0, minhead = 0, minsize = s.size()+1;
            for(int tail = 0; tail < s.size(); ++tail)
            {
                if(isvalid[s[tail]])
                {
                    if(-- tmap[s[tail]] >= 0)
                    {
                        ++cnt;
                    }
                    
                    while(cnt == t.size())
                    {
                        if(tail - head + 1 < minsize)
                        {
                            minsize = tail-head+1;
                            minhead = head;
                        }
                        if(isvalid[s[head]])
                        {
                            if(++ tmap[s[head]] > 0)
                            {
                                --cnt;
                            }
                        }
                        ++head;
                    }
                }
            }
            
            if(minsize > s.size())
                return "";
            else
                return s.substr(minhead,minsize);
            
        }
};