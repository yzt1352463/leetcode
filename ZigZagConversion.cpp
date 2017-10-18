class Solution {
public:
    string convert(string s, int numRows) {
    vector<string> s_arr;
	if (numRows == 1)
		return s;
	for (int i = 0; i < numRows; i++)
	{
		if (i == 0 || i == numRows - 1)
		{
			int iCurPos = i;
			string sCurStr;
			while (iCurPos < s.size())
			{
				sCurStr += s[iCurPos];
				iCurPos += 2 * numRows - 2;
			}
			s_arr.push_back(sCurStr);
		}
		else
		{
			int iCurPos = i;
			string sCurStr;
			while (iCurPos < s.size())
			{
				sCurStr += s[iCurPos];
				//判断奇偶数
				if (sCurStr.size() % 2)
				{
					//当前为奇数列
					iCurPos += 2 * numRows - 2 - 2 * i;
				}
				else
				{
					//偶数
					iCurPos += 2 * i;
				}
			}
			s_arr.push_back(sCurStr);
		}
	}
	string str_res;
	for (int i = 0; i < s_arr.size(); i++)
	{
		str_res += s_arr[i];
	}

	return str_res;
    }
};