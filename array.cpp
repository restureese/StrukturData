#include <iostream>

using namespace std;


int main(){
	
	//deklarasi array
	int array_angka[11];

	
	//perulangan buat isi array
	for (int i = 0; i <= 10; ++i){
		//cout<<"masukkan angka = ";
		// cin>>array_angka[i];
		array_angka[i] = i;
	}

	//perulangan buat menampilkan isi array
	for (int i = 0; i <=10 ; ++i){
		cout<<array_angka[i]<<endl;
	}


	return 100;
}