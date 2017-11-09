map<char, string> digitsmap{
	{ '2', "abc" },	{ '3', "def" },	{ '4', "ghi" },
	{ '5', "jkl" },	{ '6', "mno" },	{ '7', "pqrs" },
	{ '8', "tuv" },	{ '9', "wxyz" }
};

vector<string> letterCombinations(string digits)
{
	vector<string> ret;
	for (int i = 0; i < digits.length(); i++)
	{
		char ch = digits[i];
		string chstr = digitsmap[ch];
		if (ret.empty())
		for (int j = 0; j < chstr.length(); j++)
		{
			ret.push_back(chstr.substr(j, 1));
		}
		else
		{
			vector<string> expandret;
			for (int k = 0; k < ret.size(); k++)
			{
				for (int n = 0; n < chstr.size(); n++)
				   expandret.push_back(ret[k] + chstr.substr(n, 1));
			}
			ret = expandret;
		}
	}
	return ret;
}