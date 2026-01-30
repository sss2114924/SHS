#include<bits/stdc++.h>
using namespace std;
/*	------------------------------------  */
//二分法查找第一个元素出现的位置

int findFirst(int arr[],int n,int target)
{
	int right = n-1;
	int left = 0;
	int result = -1;   //如果没查找到那么输出-1 
	int mid;
	
	while(left<=right)
	{
		mid =(right+left)/2; 
		if(arr[mid]==target)
		{
			result = mid;
			right = mid-1;
		}else if(arr[mid]<target)
		{
			left = mid+1;
		}else {
			right = mid-1;
		}	
	}
	
	return result; 
 } 
