#include<iostream>
using namespace std;
int main(){
	double ton=35273.92;
	double berat;
	int  ons,jumlah;
	cout<<"Masukkan Berapa Berat Sereal Dalam 1 Kotak Kemasan (Dalam Satuan Ounce)= ";cin>>ons;
	cout<<""<<endl;
	berat=ons/ton;
	jumlah=1/berat;
	cout<<"1 Kotak kemasan sereal beratnya = "<<berat;cout<<" Ton"<<endl;
}
