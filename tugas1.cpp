#include <iostream>
using namespace std;

int main() {
	
	string nama;
	int n1; //basis data
	int n2; //aljabar
	int n3; //PAI
	int n4; //Struktur data
	int n5; //Pemrograman
	int hasil;
	
	cout<<"Tulis Nama : ";
	cin>>nama;
	cout<<"Masukkan Nilai BD : ";
	cin>>n1;
	cout<<"Masukkan Aljabar : ";
	cin>>n2;
	cout<<"Masukkan PAI : ";
	cin>>n3;
	cout<<"Masukkan SD : ";
	cin>>n4;
	cout<<"Masukkan Pemrograman : ";
	cin>>n5;
	
	hasil = (n1+n2+n3+n4+n5)/5;
	
	if(hasil>=86) {
		cout<<"Predikat Anda : A";
	} else if(hasil>=80) {
		cout<<"Predikat Anda : B";
	} else if(hasil>=70) {
		cout<<"Predikat Anda : C";
	} else if(hasil>=0) {
		cout<<"Predikat AndaD";
	} else {
		cout<<"Predikat Anda : E";
	}
}
