vector<vector<int>> fourSum(vector<int>& nums, int target)
{
	vector<vector<int>> vec_ret;
	if (nums.size() < 4)
		return vec_ret;
	sort(nums.begin(), nums.end());
	for (int i = 0, first = nums[0] - 1; i < nums.size() - 3; i++)
	{
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
		for (int j = i + 1, second = nums[i + 1] - 1; j < nums.size() - 2; j++)
		{
			if (j > i + 1 && nums[j] == nums[j - 1])
				continue;
			int k = j + 1;
			int m = nums.size() - 1;
			while (k < m)
			{
				int val = nums[i] + nums[j] + nums[k] + nums[m];
				vector<int> ret;
				if (val == target)
				{
					ret.push_back(nums[i]);
					ret.push_back(nums[j]);
					ret.push_back(nums[k]);
					ret.push_back(nums[m]);
					vec_ret.push_back(ret);
					k++;
                    while (k < m && nums[k] == nums[k - 1])
						k++;
					m--;
                    while (k < m && nums[m] == nums[m + 1])
						m--;
				}
				else if (val < target)
				{
					k++;
					while (k < m && nums[k] == nums[k - 1])
						k++;
				}
				else
				{
					m--;
					while (k < m && nums[m] == nums[m + 1])
						m--;
				}
			}
		}
	}
	return vec_ret;
}