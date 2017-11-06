#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,selisih;
	cout<<" Input Bilangan a : "; cin>>a;
	cout<<" Input Bilangan b : "; cin>>b;

if (a>b){
	selisih=a-b;
	
	cout<<"Selisih Nilai A dan B yaitu "<<selisih;
}

else if (b>a){
	selisih=b-a;

	cout<<"Selisih Nilai B dan A yaitu "<<selisih;
}
	return 0;
}
