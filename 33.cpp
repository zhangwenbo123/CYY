#include<iostream.h>
void main()
{
	int a;
	float y1,y2;
	cout<<"������һ������:";
	cin>>a;
	y1=a%3;
	y2=a%7;
	if(y1==0||y2==0)
	{cout<<"YES"<<endl;}
	else{cout<<"NO"<<endl;}
}