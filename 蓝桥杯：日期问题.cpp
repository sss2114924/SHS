#include<bits/stdc++.h>
using namespace std;

/*想查看更多题目，请前往蓝桥杯云课第一章——日期问题*/ 

//枚举每一个月的天数 ,注意下标 
int data_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

//特殊技巧2，年->月->日 枚举最佳循环 

//判断是否为闰月 
bool leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int cnt = 0;
//week = (week+1)%7   把周日当做0，求下一天的星期 

int main()
{
	int year = 2022;
	if(leap(year)){
		data_in_month[2] = 29; 
	}
	//判断是否为闰年，修改2月数值 
	
	int T = 6;
	
	int month = 12;
	int data = 31; 
	
	for(year = 2022;year<=2022;year++)
	{ 
		for(int i = 1;i<=12;i++)
		{
			for(int j = 1;j<=data_in_month[i];j++,T++)
			{
				if(T%7==6||T%7==0||j==1||j==11||j==21||j==31)  
				 //技巧1：特殊日期: n % 10 == 1
				{
					cnt++;
				}
			}
		}
	}
	
	printf("%04d--%02d--%02d\n",year,month,data);
	//%04d表示输出四位，不足的前面补0 
	 
	
	
	return 0;
 } 
