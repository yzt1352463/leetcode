int threeSumClosest(vector<int>& nums, int target) 
{
	int minvalue = INT_MAX;
	int ret;
	if (nums.size() < 3)
		return -1;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++)
	{
		int j = i + 1;
		int k = nums.size() - 1;
		//minvalue = abs(sum - target);
		while (j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			int difvalue = sum - target;
			if (difvalue == 0)
			{
				return sum;
			}
			else if (difvalue < 0)
			{
				j++;
			}
			else
			{
				k--;
			}
			if (abs(difvalue) < minvalue)
			{
				minvalue = abs(difvalue);
				ret = sum;
			}	
		}
	}
	return ret;
}