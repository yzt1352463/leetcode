class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int iMaxval = 0;
	//起始位置
	for (int i = 0; i < s.size(); i++)
	{
		//当前位置
		string sTmp;
		sTmp = s[i];
		int iTmpval = 1;
		for (int j = i + 1; j < s.size(); j++)
		{
			if(sTmp.find(s[j]) == std::string::npos)
			{
				sTmp += s[j];
			}
			else
			{
				break;
			}
			iTmpval = sTmp.size();
		}
		if (iMaxval < iTmpval)
		{
			iMaxval = iTmpval;
		}
	}
	return iMaxval;
    }
};