#include<iostream>
using namespace std;
int main(){
	double lr,p=0.234495,jbp,bp,bpp,a,b,jbph,tb;
	cout<<"Luas Rumah : ";cin>>lr;
	cout<<"Jumlah box parket :";cin>>jbp;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Luas Rumah : "<<lr;cout<<" m2"<<endl;
	cout<<"Luas 1 box parket : "<<p;cout<<" m2"<<endl;
	a=p*jbp;
	b=lr/a;
	jbph=b*103/100;
	cout<<"jumlah box parket : "<<jbph<<endl;
	bp=jbph*500;
	cout<<"Biaya parkat(Rp) : "<<bp<<endl;
	bpp=lr*20;
	cout<<"Biaya pasang(Rp) : "<<bpp<<endl;
	tb=bp+bpp;
	cout<<"Total Biaya (Rp) : "<<tb<<endl;
}
