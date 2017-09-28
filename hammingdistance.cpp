int hammingDistance(int x, int y)
{
	int num_x[32];
	int num_y[32];
	int ham_dis = 0;
	for (int i = 31; i >= 0; i--)
	{
		if (x / (int)pow(2, i))
		{
			num_x[i] = 1;
			x = x - (int)pow(2, i);
		}
		else
		{
			num_x[i] = 0;
		}

		if (y / (int)pow(2, i))
		{
			num_y[i] = 1;
			y = y - (int)pow(2, i);
		}
		else
		{
			num_y[i] = 0;
		}

	}
	for (int i = 0; i < 32; i++)
	{
		if (num_x[i] != num_y[i])
		{
			ham_dis++;
		}
	}
	return ham_dis;
}
//编译不通过，我觉得程序没问题，LeetCode有问题，但这个确实不是最好的办法

class Solution {
public:
    int hammingDistance(int x, int y)
{
	int xor_xy = x ^ y;
    int ham_dis = 0;
    for(int i = 0; i < 32; i++)
    {
       // ham_dis += (xor_xy >> i) & 1;
        ham_dis += xor_xy & 1;
        xor_xy = xor_xy/2;
    }
        return ham_dis;
}
};
//两种方法

