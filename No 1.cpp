#include <iostream>
using namespace std;

int main (){
	int x,y,z;
	
	cout <<"Menghitung Selisih Absolute"<<endl;
	cout<<"Masukkan Nilai X : ";
	cin>>x;
	cout <<"Masukkan Nilai Y : ";
	cin>>y;
	
	if (x>y){
		z=x-y;
	}
	else if (y>x){
		z=y-x;
	}
	
	cout <<"Hasil : "<<z;
	
	
}
