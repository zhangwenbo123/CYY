#include <iostream.h>
float fun(double h)
{
	double H;
	int m,n;
	m=(int)(h*1000)%10;//mΪС��������λ
	n=h*100;
	if(m>4)
		n+=1;
	H=n/(double)100;
	return H;
}
void main()
{
	double h;
	cout<<"������h��ֵ��"<<endl;
	cin>>h;
	cout<<fun(h)<<endl;
}
