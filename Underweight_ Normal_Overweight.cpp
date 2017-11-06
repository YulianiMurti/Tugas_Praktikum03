#include <iostream>

using namespace std;

int main() 
{
	cout<<"||----MENENTUKAN SEBUAH PROGRAM underweight, normal, atau overweight----||"<<endl;
    float bb;
    int tb;
    
    cout << "Silahkan anda masukkan ukuran tinggi badan(cm) : "; cin >>tb;
    cout << "Silahkan anda masukkan berat badan(kg) : " ;
    cin >> bb;
    
    if (bb<tb/2.5)
       cout << "  Anda Sedang Mengalami : Underweight(kekurangan berat badan)" << endl;
            else if (tb/2.3 < bb)
                 cout << "  Anda Sedang Mengalami : Overweight(kelebihan berat badan)" << endl;
            else if (tb/2.5 <= bb <= tb/2.3)
           		 cout << "  Selamat!!! : Normal" << endl;
                 
                 
                 return 0;
    }
