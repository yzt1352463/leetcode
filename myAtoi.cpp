int myAtoi(string str) 
{
   long long curvalue = 0;
   int index = 0;
   if(str[0] == '-' || str[0] == '+')
   {
  	index = 1;   
   }
   for(int i = index; i < str.size(); i++)
   {
     int tmp = str[i] - '0';
	if(tmp > 0 && tmp < 9)
	{
		curvalue = curvalue * 10 + tmp;
		if(curvalue > INT_MAX)
		{
		  curvalue = INT_MAX;
		  break;
		}
		else if(curvalue < INT_MIN)
		{
		  curvalue = INT_MIN;
		  break;
		}
	}
	else
	{
		break;
	}
   }
   if(str[0] == '-')
   return -curvalue;
   else
   return curvalue;
}