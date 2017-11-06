#include <iostream>
using namespace std;

int main(){ 
	char pilih,A ,B ;
	int al, p, l, t, L ;
	
	cout <<"A : Persegi Panjang"<<endl;
	cout <<"B : Segitiga"<<endl;
	cout << " Luas Yang Akan Dihitung A atau B : "; cin>>pilih;
	
		if (pilih=='A'){
			system("cls");
			cout<<"Anda Memilih Mengitung Luas Persegi Pajang"<<endl;
			cout<<""<<endl;
			cout<<"Input Panjang dari (Persegi Panjang)= "; cin>>p;
			cout<<"Input Lebar dari (Persegi Panjang) = "; cin>>l;
			L=p*l;
			
			cout << " Jadi Luas Persegi Panjang Adalah  ? "<<L;
		}
		
		else if (pilih=='B'){
			system("cls");
			cout<<"Anda Memilih Mengitung Luas Segitiga"<<endl;
			cout<<""<<endl;
			cout<<"Input (Alas Segitiga)= "; cin>>al;
			cout<<"Input (Tinggi Segitiga) = "; cin>>t;
			L=0.5*al*l;
			
			cout << " Jadi Luas segitiga Adalah ?  "<<L;
		}
}
