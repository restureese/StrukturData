#include <iostream>
#define N 20

using namespace std;


void bubble(int *arrBilangan, int juml){
	
	int tampung;
	for(int x = 0; x < juml;x++){
		for(int i = 0; i < juml-1;i++){
			if(arrBilangan[i] > arrBilangan[i+1]){
				tampung = arrBilangan[i];
				arrBilangan[i] = arrBilangan[i+1];
				arrBilangan[i+1] = tampung;
			}
		}
	}

}


void binary(int arrBilangan[],int max,int cari){
	int tengah = 0;
	int awal = 0;
	int akhir = max;
	bool ketemu = false;

	while(awal <= akhir && !ketemu){
		tengah = (awal + akhir)/2;
		if(arrBilangan[tengah] == cari){
			ketemu = true;
			break;
		}else{
			if(arrBilangan[tengah] < cari){
				awal = tengah+1;
			}else{
				akhir = tengah-1;
			}
		}
	}

	if(ketemu){
		cout<<"Data Ditemukan Dinomor Indek Ke-"<<tengah<<endl;
	}else{
		cout<<"Data tidak Ditemukan"<<endl;
	}


	for (int i = 0; i < max; ++i)
	{
		cout<<arrBilangan[i]<<" ";
	}
}



int main(){

	int tampung;
	int cari;
	int bilangan[N];
	int jumlah;
	int *BilanganPtr = NULL;
	BilanganPtr = &bilangan[0];

	cout<<"Masukkan jumlah data yang akan diinputkan : ";
	cin>>jumlah;

	cout<<"Masukkan nilai sebanyak "<<jumlah<<" data"<<endl;
	for(int x = 0; x< jumlah;x++){
		cin>>bilangan[x];
	}
	cout<<endl;
	cout<<"Masukkan Nilai Yang Di Cari : ";
	cin>>cari;
	bubble(BilanganPtr,jumlah);
	binary(bilangan,jumlah,cari);
	return 0;
}
