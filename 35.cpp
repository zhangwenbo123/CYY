#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s;
	cout<<"������������:";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<"�������ε������:"<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
}