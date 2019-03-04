#include <iostream>

using namespace std;

struct Mahasiswa{
	string nim;
	string nama;
	int nilai_harian[5];
	int uts;
	int uas;
};

int main(){

	int banyak_mhs = 3;
	Mahasiswa mhs[banyak_mhs];

	int angka[9];

	for (int i = 0; i < banyak_mhs; i++)
	{
		cout<<"Masukkan NIM\t: ";
		cin>>mhs[i].nim;

		cout<<"Masukkan Nama\t: ";
		cin>>mhs[i].nama;

		cout<<"Masukkan UTS\t: ";
		cin>>mhs[i].uts;

		cout<<"Masukkan UAS\t: ";
		cin>>mhs[i].uas;
	}

	for (int i = 0; i < banyak_mhs; i++)
	{
		cout<<"NIM\t: "<<mhs[i].nim<<endl;

		cout<<"Nama\t: "<<mhs[i].nama<<endl;

		cout<<"UTS\t: "<<mhs[i].uts<<endl;

		cout<<"UAS\t: "<<mhs[i].uas<<endl;
	}


	return 0;
}