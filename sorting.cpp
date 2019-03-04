#include <iostream>

using namespace std;


void SelectionSort(int arrAngka[],int panjang){
	int temp = 0;
	int smallest = 0;


	//sorting
	for (int i = 0; i < panjang-1; ++i)
	{
		smallest = i;
		for (int a = i; a < panjang; ++a)
		{
			if(arrAngka[smallest] > arrAngka[a]){
				smallest = a;
			}
		}
		temp = arrAngka[i];
		arrAngka[i] = arrAngka[smallest];
		arrAngka[smallest] = temp;
	}


	//output
	for (int i = 0; i < panjang; ++i)
	{
		cout<<arrAngka[i]<<endl;
	}
}

void BubbleSort(int arrAngka[],int panjang){
	int temp = 0;

	//sorting
	for (int i = 0; i < panjang; i++)
	{
		for (int a = 0; a < panjang; ++a)
		{
			if(arrAngka[a] < arrAngka[a+1]){
				temp = arrAngka[a];
				arrAngka[a] = arrAngka[a+1];
				arrAngka[a+1] = temp;
			}
		}
	}



	for (int i = 0; i < panjang; ++i)
	{
		cout<<arrAngka[i]<<"  ";;
	}
}

int main(){
	int x = 8;
	int arrAngka[] = {5,34,32,25,75,42,22,2};

	cout << "Data Sebelum Diurutkan"<<endl;
	for (int i = 0; i < 8; i++)
	{
		cout<<arrAngka[i]<<"  ";
	}
	cout<<endl<<endl;
	cout << "Data Sebelum Diurutkan"<<endl;
	BubbleSort(arrAngka,x);
	// SelectionSort(arrAngka,x);
	cout<<endl;
	return 0;
}