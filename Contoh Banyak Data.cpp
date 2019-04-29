#include <iostream>
#include <tuple>

using namespace std;

class Simpul{
	public:
		double nomor;
		string nama;

		Simpul* pBerikutnya;

		//konstruktor
		Simpul(double dd,string nama):nomor(dd),nama(nama),pBerikutnya(NULL){

		}

		void tampilSimpul(){
			cout<<nomor<<"-";
			cout<<nama<<"  ";
		}
};

class SenaraiBerantaiGanda{
	private:
		Simpul* pPertama;
		Simpul* pAkhir;
	public:
		SenaraiBerantaiGanda():pPertama(NULL),pAkhir(NULL){

		}

		~SenaraiBerantaiGanda(){
			Simpul* pSekarang = pPertama;

			while(pSekarang != NULL){
				Simpul* pTemp = pSekarang;
				pSekarang = pSekarang->pBerikutnya;

				delete pTemp;
			}
		}

		bool apaKosong(){
			return pPertama == NULL;
		}

		void sisipAkhir(double dd,string nama){
			Simpul* pSimpulBaru = new Simpul(dd,nama);

			// if(apaKosong()){
			// 	pPertama = pSimpulBaru;
			// }else{
			// 	pAkhir->pBerikutnya = pSimpulBaru;
			// }

			apaKosong() ? pPertama = pSimpulBaru:pAkhir->pBerikutnya = pSimpulBaru;

			pAkhir = pSimpulBaru;
		}

		tuple<double,string> cobaHapus(){
			Simpul* pTemp = pPertama;

			double temp = pPertama->nomor;
			string s = pPertama->nama;

			if(pPertama->pBerikutnya == NULL){
				pAkhir = NULL;
			}

			pPertama = pPertama->pBerikutnya;

			delete pTemp;
			return make_tuple(temp,s);
		}

		double hapusPertama(){
			Simpul* pTemp = pPertama;

			double temp = pPertama->nomor;

			if(pPertama->pBerikutnya == NULL){
				pAkhir = NULL;
			}

			pPertama = pPertama->pBerikutnya;

			delete pTemp;
			return temp;
		}

		void tampilSenarai(){
			Simpul* pSekarang = pPertama;

			while(pSekarang != NULL){
				pSekarang->tampilSimpul();

				pSekarang = pSekarang->pBerikutnya;
			}
			cout<<endl;
		}
};

class Antrian{
	private:
		SenaraiBerantaiGanda senarai;

	public:
		bool apaKosong(){
			return senarai.apaKosong();
		}

		void sisip(double data,string nama){
			senarai.sisipAkhir(data,nama);
		}

		tuple<double,string> hapus(){
			return senarai.cobaHapus();
		}

		void tampilAntrian(){
			cout<<"Antrian (Depan --> Belakang )"<<endl;
			senarai.tampilSenarai();
		}
};



int main(){

	Antrian antrian;

	double data;
	string nama;

	antrian.sisip(20,"restu");
	antrian.sisip(30,"intan");
	antrian.sisip(40,"ginanjar");
	antrian.sisip(50,"alifia");

	antrian.tampilAntrian();

	cout<<endl;
	tie(data,nama) = antrian.hapus();

	cout<<"antrian "<<data<<"-"<<nama<<endl<<endl;
	antrian.tampilAntrian();


	return 0;
}