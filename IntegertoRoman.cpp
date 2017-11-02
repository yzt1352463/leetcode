string intToRoman(int num) 
{
	string str;
	int cur = num % 10;
	num = num / 10; 
	//个位数
	switch(cur)
	{
		case 1:
			str += "I";
			break;
		case 2:
			str += "II";
			break;
		case 3:
			str += "III";
			break;
		case 4:
			str += "IV";
			break;
		case 5:
			str += "V";
			break;
		case 6:
			str += "VI";
			break;
		case 7:
			str += "VII";
			break;
		case 8:
			str += "VIII";
			break;
		case 9:
			str += "IX";
			break;
		default:
			break;
	}

	cur = num % 10;
	num = num / 10; 
	//十位数
	switch(cur)
	{
		case 1:
			str += "X";
			break;
		case 2:
			str += "XX";
			break;
		case 3:
			str += "XXX";
			break;
		case 4:
			str += "XL";
			break;
		case 5:
			str += "L";
			break;
		case 6:
			str += "LX";
			break;
		case 7:
			str += "LXX";
			break;
		case 8:
			str += "LXXX";
			break;
		case 9:
			str += "XC";
			break;
		default:
			break;
	}

	cur = num % 10;
	num = num / 10; 
	//百位数
	switch(cur)
	{
		case 1:
			str += "C";
			break;
		case 2:
			str += "CC";
			break;
		case 3:
			str += "CCC";
			break;
		case 4:
			str += "CD";
			break;
		case 5:
			str += "D";
			break;
		case 6:
			str += "DC";
			break;
		case 7:
			str += "DCC";
			break;
		case 8:
			str += "DCCC";
			break;
		case 9:
			str += "CM";
			break;
		default:
			break;
	}	      

	cur = num % 10;
	num = num / 10; 
	//千位数
	switch(cur)
	{
		case 1:
			str += "M";
			break;
		case 2:
			str += "MM";
			break;
		case 3:
			str += "MMM";
			break;
		default:
			break;
	}  
	return str;
}