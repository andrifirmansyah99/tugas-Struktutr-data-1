#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa{
	string nim;
	string nama;
	int nilai_harian[5];
	int uts;
	int uas;
};

int masukan(){
	
	int banyak_mhs;
	
		cout<<"Banyak mahasiswa :";
	cin>>banyak_mhs;

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
		
		cout<<endl;
		
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

int main()
{
	Mahasiswa mhs[999];
	
	cout<<"Data Nilai Mahasiswa"<<endl;
	cout<<"====================="<<endl;
	
	masukan();
}
