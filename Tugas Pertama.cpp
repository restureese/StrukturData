#include <iostream>
#include <cstdlib>
using namespace std;


struct Mahasiswa{
	string nim;
	string nama;
	string jenis_kelamin;
	string jurusan;
	int nilai_harian[3];
	int rata_rata;
};



int main(){
	

	int banyak_mhs = 10;
	Mahasiswa mhs[banyak_mhs];
	Mahasiswa temp;

	int pilih;
	int jumlah_mhs = 0;
	int jumlah_nilai = 0;
	

	string nim;
	int ketemu = 0;

			

	do{
		cout<<"1. Input Data Mahasiswa"<<endl;
		cout<<"2. Tampil Berdasarkan Nilai Rata - Rata Tertinggi"<<endl;
		cout<<"3. Pencarian Berdasarkan NIM"<<endl;
		cout<<"0. Keluar"<<endl;
		cout<<"Pilih Menu : ";
		cin>>pilih;

		switch(pilih){
			case 0:
				cout<<"Keluar"<<endl;
				break;
			case 1:
				//input data
				cout<<"Masukkan Banyak Mahasiswa : ";
				cin>>jumlah_mhs;
				
				for (int i = 0; i < jumlah_mhs; i++){
					cout<<"Masukkan NIM\t: ";
					cin>>mhs[i].nim;

					cout<<"Masukkan Nama\t: ";
					cin>>mhs[i].nama;

					cout<<"Masukkan Jenis Kelamin\t: ";
					cin>>mhs[i].jenis_kelamin;

					cout<<"Masukkan Jurusan\t: ";
					cin>>mhs[i].jurusan;

					jumlah_nilai = 0;
					for(int nilai = 0; nilai < 3; nilai++){
						cout<<"Masukkan Nilai ke-"<<(nilai+1)<<"\t: ";
						cin>>mhs[i].nilai_harian[nilai];
						jumlah_nilai += mhs[i].nilai_harian[nilai];
					}

					mhs[i].rata_rata = jumlah_nilai/3;
				}
				system("clear");
				break;
			case 2:
				//sorting
				for (int i = 0; i < jumlah_mhs; i++)
				{
					for (int a = 0; a < jumlah_mhs-1; a++)
					{
						if(mhs[a].rata_rata < mhs[a+1].rata_rata){
							temp = mhs[a];
							mhs[a] = mhs[a+1];
							mhs[a+1] = temp;
						}
					}
				}

				for (int i = 0; i < jumlah_mhs; i++){

					cout<<"NIM\t\t: "<<mhs[i].nim<<endl;

					cout<<"Nama\t\t: "<<mhs[i].nama<<endl;

					cout<<"Jurusan\t\t: "<<mhs[i].nama<<endl;

					
					for(int nilai = 0; nilai < 3; nilai++){
						cout<<"Nilai Ke-"<<nilai+1<<"\t: "<<mhs[i].nilai_harian[nilai]<<endl;
					}
					cout<<"Rata - Rata\t: "<<mhs[i].rata_rata<<endl;
				}

				break;
			case 3:
				//searching
				cout<<"Masukkan NIM : ";
				cin>>nim;
				for (int i = 0; i < jumlah_mhs; i++){
					if(nim == mhs[i].nim)
						ketemu = i;

				}

				if(ketemu){
					cout<<"ketemu di indek ke-"<<ketemu<<endl;
					cout<<"NIM\t\t: "<<mhs[ketemu].nim<<endl;
					cout<<"Nama\t\t: "<<mhs[ketemu].nama<<endl;
					cout<<"Jurusan\t\t: "<<mhs[ketemu].nama<<endl;
					for(int nilai = 0; nilai < 3; nilai++){
						cout<<"Nilai Ke-"<<nilai+1<<"\t: "<<mhs[ketemu].nilai_harian[nilai]<<endl;
					}
					cout<<"Rata - Rata\t: "<<mhs[ketemu].rata_rata<<endl;
				}

				break;
			default:
				cout<<"Menu Tidak Tersedia";
		}
	}while(pilih != 0);

	return 0;
}

