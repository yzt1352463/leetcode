int romanToInt(string s) 
{
   int sum = 0;
   for(int i = 0; i < s.size(); i++)
   {
     int tmp;
     switch(s[i])
     {
       case "I":
	   if(i < s.size() - 1)
		if(s[i + 1] == "V" || s[i + 1] == "X" || s[i + 1] == "L" || s[i + 1] == "C" || s[i + 1] == "D" || s[i + 1] == "M")
		{
			tmp = -1;
			break;
		}
	   tmp = 1;
	   break;  
       case "V":
	   tmp = 5;
	   break;
       case "X":
	   if(i < s.size() - 1)
		if(s[i + 1] == "L" || s[i + 1] == "C" || s[i + 1] == "D" || s[i + 1] == "M")
		{
			tmp = -10;
			break;
		}
	   tmp = 10;
	   break;
       case "L":
	   tmp = 50;
	   break;
       case "C":
	   if(i < s.size() - 1)
		if(s[i + 1] == "D" || s[i + 1] == "M")
		{
			tmp = -100;
			break;
		}
	   tmp = 100;
	   break;
       case "D":
	   if(i < s.size() - 1)
		if(s[i + 1] == "M")
		{
			tmp = -100;
			break;
		}
	   tmp = 100;
	   break;
       case "M":
	   tmp = 1000;
	   break;
     }    
	sum += tmp;
   }   
   return sum;    
}