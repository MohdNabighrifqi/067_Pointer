#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim(); //deklarasi method
};

void mahasiswa::shownim() { //implementasi method diluar class 
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };    //object mahasiswa
	mhs.shownim();         //member access operator

	mahasiswa& ref = mhs;  //pointer refrence pmhs 
	ref.nim = 2;           //member access operator 
	mhs.shownim();

	mahasiswa* pMhs = &mhs; //pointer defrenreces pMhs 
	pMhs->nim = 3;          //Arrow Operator 
	pMhs->shownim();
	system("pause");
	return 0;
}