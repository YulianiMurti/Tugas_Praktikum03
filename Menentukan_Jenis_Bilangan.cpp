#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"MENENTUKAN SEBUAH PROGRAM JENIS BILANGAN"<<endl;
	cout<<""<<endl;
	cout<<"MASUKAN SEBUAH BILANGAN : ";cin>>a;
	cout<<""<<endl;
	if (a < 0)
	{
		cout<<"Yang anda input adalah sebuah bilangan negatif"<<endl;
	}
	
	else if (a>0)
	{
		cout<<"Yang anda input adalah sebuah bilangan positif"<<endl;
	}
	else if (a==0)
	
		cout<<"Yang anda input adalah sebuah bilangan nol "<<endl;

	return 0;
}
