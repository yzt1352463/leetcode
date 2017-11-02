class Solution {
public:
 int reverse(int x)
{
	long long y = 0;
	while (x)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	
	if (y < INT_MIN || y > INT_MAX)
		return 0;
	return y;
}
};