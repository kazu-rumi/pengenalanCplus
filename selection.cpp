#include <iostream>
using namespace std;

int main() {
	/*selection
	-if (kondisi){
			hasil
		}
	-if (kondisi){
			hasil
		}
		else{
			hasil
		}
	-if (kondisi){
		hasil}
		else if(kondisi){
			hasil
		}
	*/
	int nilai;
	cout<<"Masukkan nilai : ";
	cin>>nilai;
	if(nilai>=80){
		cout<<"LULUS";
	}else if(nilai >=70) {
		cout<<"BAIK";
	}else {
		cout<<"KURANG BAIK";
	}
}
