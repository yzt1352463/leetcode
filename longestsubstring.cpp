class Solution {
public:
    string longestPalindrome(string s) {
		string sLongstr;
		for(int i = 0; i < s.size(); i++)
		{
			sLongstr = s[0];
			string sTmpstr;
			//1.ABA型
			if(i > 0 && i < s.size() - 1)
			{
				int iOffset = 1;
				if(s[i - 1] == s[i + 1])
				{
					iOffset++;
					while(i - iOffset >= 0 && i + iOffset < s.size())
					{
						if(s[i - iOffset] != s[i + iOffset])
							break;
						iOffset++;
					}
					iOffset--;
					sTmpstr = sLongstr.substr(i - iOffset, 2 * iOffset + 1);
					if(sTmpstr.size() > sLongstr.size())
					sLongstr = sTmpstr;
				}
			}
			//2.ABBA型
			if(i < s.size() - 1)
			{
				int iOffset = 0;
				if(s[i] == s[i + 1])
				{
					iOffset++;
					while(i - iOffset >= 0 && i + iOffset + 1 < s.size())
					{
						if(s[i - iOffset] != s[i + iOffset + 1])
							break;
						iOffset++;
					}
					iOffset--;
					sTmpstr = sLongstr.substr(i - iOffset, 2 * iOffset);
					if(sTmpstr.size() > sLongstr.size())
					sLongstr = sTmpstr;
				}
			}
			
		}
		/*
		string sLongstr;
        for(int i = 0; i < s.size() - 1; i++)
		{
			string sTmpstr;
			int iOffset = 0;
				if(s[i] == s[i + 1])
				{
					iOffset++;
					while(i - iOffset >= 0 && i + iOffset < s.size())
					{
						if(s[i + iOffset + 1] != s[i - iOffset])
							break;
					}
					sTmpstr = s.substr(s.begin() + i - iOffset + 1, s.begin() + i + iOffset);
				}
				else if(s[i - 1] == s[i + 1])
				{
					iOffset++;
					while(i - iOffset >= 0 && i + iOffset < s.size())
					{
						if(s[i + iOffset + 1] != s[i - iOffset - 1])
							break;
					}
					sTmpstr = s.substr(s.begin() + i - iOffset, s.begin() + i + iOffset);
				}
				if(sTmpstr.size() > sLongstr.size())
					sLongstr = sTmpstr;
		}
		return sLongstr;
		*/
    }
};