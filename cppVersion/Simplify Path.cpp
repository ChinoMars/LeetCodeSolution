class Solution 
{
    public:
        string simplifyPath(string path) 
        {
            string subdir, simPath;
            vector<string> stack;
            
            path.push_back('/');
            for(int i = 0; i < path.size(); ++i)
            {
                if(path[i] == '/')
                {
                    if(subdir.empty())
                        continue;
                    else if(subdir == ".")
                        subdir.clear();
                    else if(subdir == "..")
                    {
                        if(!stack.empty())
                            stack.pop_back();
                        subdir.clear();
                    }
                    else
                    {
                        stack.push_back(subdir);
                        subdir.clear();
                    }
                }
                else
                    subdir.push_back(path[i]);
            }
            
            for(int i = 0; i < stack.size(); ++i)
                simPath.append("/"+stack[i]);
                
            if(simPath.empty()) return "/";
            else return simPath;
        }
};