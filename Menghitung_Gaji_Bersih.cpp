#include <iostream>
using namespace std;

int main(){ 
	float jk, le, gtot, gp, gb,ul, jam,pa;
	cout<<" MENENTUKAN SEBUAH PROGRAM GAJI BERSIH KARYAWAN "<<endl;
	cout<<""<<endl;
	cout<<"Lama Jam Kerja Karyawan    : "; cin>> jk;
	cout<<"Gaji Perjam Karyawan   : "; cin>>gp;

if (jk>40){
	system("cls");
	cout<<" MENENTUKAN SEBUAH PROGRAM GAJI BERSIH KARYAWAN "<<endl;
	cout<<" JAM LEMBUR YANG DIDAPATKAN KARYAWAN "<<endl;
	cout<<""<<endl; 
	le=jk-40;
	jam=le*1.5;
	ul=gp*jam;
	pa=ul*0.15;
	gtot=gp-pa;
	gb=gtot-(jk*40)+((gp-40)*jk*1.5);
	
		cout<<"Lama Kerja Karyawan Dalam Waktu Seminggu          : "<<jk<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<le<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Diterima Karyawan          : Rp  "<<gp<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<ul<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<gb<<endl;

}

	else {
		system,("cls");
		cout<<""<<endl;
		cout<<" MENENTUKAN SEBUAH PROGRAM GAJI BERSIH KARYAWAN"<<endl;
		cout<<" KARYAWAN TIDAK MENDAPAT JAM LEMBUR"<<endl;
		cout<<""<<endl;
		gtot=gp*40;
		pa=gtot*0.15;
		gb=gtot-pa;
		
		cout<<"Lama Kerja Karyawan Dalam Waktu Seminggu          : "<<jk<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<le<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Diterima Karyawan          : Rp  "<<gp<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<ul<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<gb<<endl;
		
	}
}
