#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;  //根据实际情况而定

//创建顺序表 
int a[N];    //用足够大是、的数组来模拟顺序表 
int n;      //标记顺序表里面有多少个元素(初始化为0） 
 
//注意约定一般从下标为1的地方开始存储数据 
//注意判断顺序表是否满了 或者顺序表是否为空 

//要是多个顺序表可使用就够体变量或者类进行静态封装 


//尾插法 
void push_back(int x)
{
	a[++n] = x;	
} 

//头插
void push_front(int x)
{
	//1.先把【1，n】的元素全部向后移动一位 
	for(int i = n;i>=1;i--)
	{
		a[i+1] = a[i];	 
	}
	
	//2.把x放在表头 
	a[1] = x;
	//3.元素个数+1 
	n++;
}

//任意位置插入
void insert(int p,int x)
{
	for(int i = n;i>=p;i--)
	{
		a[i+1] = a[i];
	}
	a[p] = x;
	n++;
}

//遍历打印 
void pri()
{
	for(int i = 1 ;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n"<<"\n";
}

//尾删
void pop_back()
{
	cout<<n;
	n--;
	cout<<n;
 } 
 
//头删
void pop_front()
{
	//1.把【2，n】所有元素全部向前移动一位
	for(int i = 2;i<=n;i++)
	{
		a[i] = a[i+1];
	 } 
	//2.元素个数减一 
	n--;
 } 
 
//任意位置删除*注意p的位置合法 
void erase(int p)
{
	//把【p+1，n】的元素全部向前移一位 
	for(int i = p+1;i<n;i++)
	{
		a[i-1] = a[i];
	 } 
	n--;
 } 
 
//按值查找 
int find(int x)
{
	for(int i = 1;i<=n;i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	}
	
	return 0;
 } 
//清空顺序表
void clear()
{
	n = 0;
 } 
//如果存的是指针类型，就要从前向后删除加上释放空间 
int main()
{
	//测试尾插 
	push_back(2);
	pri();
	push_back(3);
	pri();
	push_back(7);
	pri();
	
	
	//测试头插 
	push_front(4);
	pri();
	push_front(1);
	pri();
	
	//测试任意位置插入
	insert(3,0);
	pri(); 
	 
	//测试尾删 
	pop_back();
	pri();
	
	//测试头删
	pop_front();
	pri();
	
	//测试任意位置删除
	erase(2);
	pri();
	erase(4);
	pri();
	
	//查找任意值 
	for(int i = 1;i<=10;i++)
	{
		cout<<"查找"<<i<<":";
		cout<<find(i)<<"\n";
	 } 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
} 
 
