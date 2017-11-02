class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string findstr;
        if(strs.empty())
            return findstr;
        int minindex = 0;
        int minlen = INT_MAX;
        for(int i = 0; i < strs.size(); i++)
        {
            if(strs[i].size() < minlen)
            {
                minlen = strs[i].size();
                minindex = i;
            }
        }
        for(int i = 0; i < strs[minindex].size(); i++)
        {
            bool flag = true;
            for(int j = 0; j < strs.size(); j++)
            {
                if(strs[minindex][i] != strs[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
              break;
            findstr += strs[minindex][i];
        }
      return findstr;    
    }
};