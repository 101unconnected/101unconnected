#include <iostream>

using namespace std;

main (){
	string kata;
	cout << "Masukkan kata = Halo" << endl;
	cin >> kata;
	
	if (kata == "Halo"){
		cout << "Kata yang dimasukkan sesuai" << endl;
	} else {
		cout << "Kata yang dimasukkan tidak sesuai" << endl;
	}
	return 0;
}
