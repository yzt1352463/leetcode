int maxArea(vector<int>& height)
{
    int max = 0;
	for(int i = 0, j = height.size() - 1; j != i;)
	{
		int tmp;
		if(height[i] < height[j])
		{
			tmp = height[i] * (j - i);
			i++;
		}
		else
		{
			tmp = height[j] * (j - i);
			j--;
		}
		if(tmp > max)
		 max = tmp;
	}
	return max;
}