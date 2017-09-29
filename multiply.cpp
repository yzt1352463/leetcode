class Solution {
public:
    string multiply(string num1, string num2) {
         vector<int> num1_vec;
	 vector<int> num2_vec;
	 for (int i = 0; i < num1.size(); i++)
	 {
		 num1_vec.push_back(num1[num1.size() - i - 1] - '0');
	 }
	 for (int i = 0; i < num2.size(); i++)
	 {
		 num2_vec.push_back(num2[num2.size() - i - 1] - '0');
	 }

	 vector<vector<int>> allsum;
	 for (int i = 0; i < num2_vec.size(); i++)
	 {
		 vector<int> onesum;
		 int flag = 0;
		 for (int j = 0; j < i; j++)
			 onesum.push_back(0);
		 for (int j = 0; j < num1_vec.size(); j++)
		 {
			 int tmpmul = num2_vec[i] * num1_vec[j] + flag;
			 flag = tmpmul / 10;
			 onesum.push_back(tmpmul % 10);
		 }
		 if (flag)
		 {
			 onesum.push_back(flag);
		 }
		 allsum.push_back(onesum);
	 }

	 vector<int> sum;
	 for (int i = 0, tmp = 0; i < allsum.size(); i++)
	 {
		 for (int j = 0; j < allsum[i].size(); j++)
		 {
			 if (j < sum.size())
			 {	
				 sum[j] += allsum[i][j];
			 }
			 else
			 {
				 sum.push_back(allsum[i][j]);
			 }
		 }
	 }
	 int flag = 0;
	 for (int i = 0; i < sum.size(); i++)
	 {
		 sum[i] += flag;
		 flag = sum[i] / 10;
		 sum[i] = sum[i] % 10;
	 }
	 if (flag)
		 sum.push_back(flag);
	 string sum_str;
	 for (int i = 0; i < sum.size(); i++)
	 {
		 sum_str += (char)(sum[sum.size() - 1 - i] + '0');
	 }
        if (sum_str[0] == '0')
		 return "0";
	 return sum_str;
        
    }
};