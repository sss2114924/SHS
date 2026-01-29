#include<bits/stdc++.h>

using namespace std;

int sum(int n) 
{
	if(n<=2)
	return 1;
	return sum(n-1)+sum(n-2);
	
}

int main()
{
//递归二要素---部分情况可以和循环相互转化 
//将大规模问题拆解为小规模问题
//递归终止条件	
/*	------------------------------------  */
	//斐波那契数列
	
	int n;
	cin>>n; 
	int Fn = sum(n);
	cout<<Fn<<'\n';
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
