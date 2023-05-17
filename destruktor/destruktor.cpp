#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka();	//Desctructor
	void cetakdata();
	void isiData();
};
//Definisi member Function
angka::angka(int i) { //Constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //Destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
} 

void angka::cetakdata() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::cetakdata() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
	cout <<endl;
}

int main() {
	angka belajarcpp(3); //Constructor Dipanggil
	angka* ptrBelajarcpp = new angka(5); //Constructor Dipanggil
	delete ptrBelajarcpp; //Destructor DIpanggil

	return 0;
}//Destructor Dipanggil