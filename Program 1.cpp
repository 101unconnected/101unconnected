//9_nestedif.cpp - Jumat, 02 Mei 2025

#include <iostream>
using namespace std;
int main (){
	int umur;
	cout << "Masukkan umur: " << endl;
	cin >> umur;
	
	if(umur <= 17){
		cout << "Anak-anak." << endl;
	} else if (umur == 18) { 
		cout << "Remaja." << endl;
	} else {
		cout << "Bukan usia anak maupun remaja." << endl;
	}
	
	return 0;
}
