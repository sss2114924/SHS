#include<iostream>
using namespace std;

const int N = 1e3; 
//创建 
int head[N];
int nex[N];
int h = 0,idx = 0;

//头插法
void push_front(int data)
{
	idx++;
	head[idx] = data;
	
	//先让新指针指向旧指针 
	nex[idx] = nex[h];
	//让头结点指向新来的节点 
	nex[h] = idx; 
} 

//遍历链表
void printf_()
{
	for(int i = nex[h];i;i = nex[i])
	{
		cout<<head[i]<<" ";	
	}
	cout<<'\n'<<'\n';
} 

//按值查找 
int chazhao(int data)
{
	for(int i = nex[h];i;i = nex[i])
	{
		if(head[i] == data)
		{
			return i;
		}
	 }
	 return 0; 
 } 
 
int main()
{

	for(int i= 0;i<4;i++)
	{
		push_front(i);
	}
	
	printf_();
} 
