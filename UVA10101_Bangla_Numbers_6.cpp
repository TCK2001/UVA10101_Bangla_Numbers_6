/*
Sample Input
23764
45897458973958
Sample Output
1. 23 hajar 7 shata 64
2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void kuti(long long int num)
{
	if(num>=10000000)
	{
		kuti(num/10000000); //그냥 상황에 맞는 이름 출력; 
		cout<<" Kuti";
		num%=100000000;
	}
	if(num>=100000)
	{
		kuti(num/100000);
		cout<<" lakh";
		num%=100000;
	}
	if(num>=1000)
	{
		kuti(num/1000);
		cout<<" hajar";
		num%=1000;
	}
	if(num>=100)
	{
		kuti(num/100);
		cout<<" shata";
		num%=100;
	}
	if(num)
	{
		cout<<" "<<num;
	}
}
int main()
{
	long long int n;
	int time=1;
	while(cin>>n)
	{
		cout<<setw(4)<<time<<"."; //횟수 출력; 
		if(n==0)
		{
			cout<<" 0"<<endl;
			time++;
		}
		else
		{
			kuti(n);
			time++;
			cout<<endl;
		}
	}
return 0;
}

