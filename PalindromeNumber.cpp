bool isPalindrome(int x)
{
	if(x < 0)
	return false;
    vector<int>   bigendian;
	vector<int>   littleendian;
	while(x/10)
	{
	  bigendian.push_back(x%10);
	  x = x/10;
	}
	bigendian.push_back(x%10);
	for(int i = 0; i < bigendian.size(); i++)
	{
		littleendian.push_back(bigendian[bigendian.size() - i - 1]);
	}
	bool flag  = true;
	for(int i = 0; i < bigendian.size(); i++)
	{
	    if(bigendian[i] != littleendian[i])
		{
			flag = false;
			break;
		}
	}
	return flag;
}