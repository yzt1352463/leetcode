vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<vector<int>> ret;
	for (int i = 0; i < nums.size(); i++)
	{
		int j = i + 1;
		int k = nums.size() - 1;
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
		while (j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			if (sum == 0)
			{
				vector<int> tmp;
				tmp.push_back(nums[i]);
				tmp.push_back(nums[j]);
				tmp.push_back(nums[k]);
				int second = nums[j];
				int third = nums[k];
				ret.push_back(tmp);
				j++;
				while(j < k && nums[j] == second)
						j++;
				k--;
				while (j < k && nums[k] == third) 
						k--;
			}
			else if (sum < 0)
				j++;
			else
				k--;
		}
	}
	return ret;
}