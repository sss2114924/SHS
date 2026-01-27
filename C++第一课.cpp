#include<bits/stdc++.h>  //万能头文件 
using namespace std;     //使用头文件 

typedef long long ll; 

//const表示常量，后续不可更改
const int N = 1e5+9;
int c[N];  //全局数组a[N],自动初始化为0 

int main()
{
	//取消同步流，加速 cin和cout
	ios::sync_with_stdio(0), cin.tie(0),cout.tie(0);
/*	------------------------------------  */
	cout<<"Hello,World!"<<endl;
	printf("Hello,World!\n");
	
	printf("2字符串,1回车，2字符串，1回车。6数字.1字符串\n");
/*	------------------------------------  */	
	bool T =true;//布尔值（真/假false）
	//0表示false，1表示true 
	
	cout<<"bool的表示:"<<T<<'\n';  //'\n'换行比endl快 
/*	------------------------------------  */	
	int aa[N];   //aa[N]数组值未定 
	ll aaa[N];
/*	------------------------------------  */
	char ch = 'A';
	char s[] = "Hello"; 
		
	for(int i=0;i<5;i++){
		cout<<s[i];
	}
	
	cout<<'\n';
	cout<<"cin的字符串输出:"<<s<<'\n';
/*	------------------------------------  */	
	int n=3,m=5;
	int tmp;
	tmp = n;
	n = m;
	m = tmp;
	
	cout<<"cout的交换字符:"<<n<<' '<<m<<'\n';
/*	------------------------------------  */
	char s1[20];
	scanf("%s",s1);        //%s遇到空格和回车都停止，s本身是字符串指针 
	printf("s1 =%s\n",s1);
	
	char s2[20];
	scanf("%[^\n]",s2);     //[]正则表达式，表示只要不是回车就继续读
	printf("s2 =%s\n",s2);
/*	------------------------------------  */ 
    char s3[20];
	cin>>s3;
	cout<<"S3 = "<<s3<<'\n'; 
	
	string s4;
	getline(cin,s4);       //无法用正则表达式 
	cout<<"s4 = "<<s4<<'\n';
/*	------------------------------------  */
	//自动判断类型 	
	double nn,mm;
	cin>>nn>>mm;
	cout<<fixed<<setprecision(3)<<"cout的小数输出:"<<nn<<' '<<mm<<'\n'; 
	//fixed setprecision(?)  设置小数 
	  
	//小测试，方法一
	int a,b;
	scanf("%d %d",&a,&b);
	printf("方法一的输出：%d\n",a+b);
	
	//方法二
	cin>>a>>b;
	cout<<"方法二的输出:"<<a+b<<'\n'; 
	
//全部运行一遍 之后，你可以发现，不要cin/cout和scanf/printf混着用 
/*	------------------------------------  */
	string str1(6,'A');           //str1为6个A 
	string str2 = str1.substr(0,2);  //string功能5：提取子字符串 
  //str2为从str1的第0位到第2位 
		
	cout<<"str1: "<<str1<<'\n';
	cout<<"str2: "<<str2<<'\n';
/*	------------------------------------  */
	char bur[] = "lanqiao";
	string str(bur);     //用bur来构造string str 
	
	//string为c++字符串，printf为c语言输出
	//构造c_str()将string转换为c风格
	printf("str = %s\n",str.c_str());
	
	string strA = "Hello";
	string strB = "world!";
	
	string strC = strA+", "+strB;  //string功能1：拼接 
	int length = strC.length();    //string功能2：获得长度 
	//int length = str.size(); 
	int pos = strC.find("world");  //string功能3：查找位置
	strC.replace(7,5,"Universe");  //srting功能4：替换 
	cout<<"result:"<<strC<<'\n'; 
	int result = strA<strB;        //string功能6： 比较字符串大小 
	
	//string遍历方法1 ：循环遍历
	for(int i = 0;i<strC.length();i++)
	{
		cout<< strC[i];
	} 
	cout<<'\n';
	 
	//string遍历方法2： auto枚举
	for(auto i:strC)  //把strC复制到i中
	{
		cout<<i;
		i = 'a';      //此处修改无用，i是拷贝的不是引用的 
	} 
	cout<<'\n';
	 
	for(auto &i:strC) //此处修改会改变字符串 
	{
		cout<<i;
		i = 'a';
	} 
	cout<<'\n';
	cout<<strC<<'\n';  //此处strC变为"aaaaa" 
/*	------------------------------------  */
   //小测试，方法一	:倒装 
   string sstr;
   getline(cin,sstr);
   //1>
   reverse(sstr.begin(),sstr.end()); 
   //2>
   for(int i = 0;i<sstr.length()/2;i++)
   {
   	swap(sstr[i],s[sstr.length()-i-1]);
   }
   
   cout<<"sstr: "<<sstr<<'\n';
	
	//方法二
	for(int i = sstr.length()-1;i>=0;i--)
	{
		cout<<sstr[i];	
	} 
	cout<<'\n';
	
	
	
	return 0;
}
