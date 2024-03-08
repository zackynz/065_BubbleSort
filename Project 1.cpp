#include <iostream>
#include <string>
using namespace std;

int arr[20];			// Deklarasi variabel global array a dengan ukuran 20
int n;					// Deklarasi variabel global n untuk menyimpan banyaknya elemen pada array


void input() {			// procedur untuk input
	int d;
	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; 1++) { // Looping dengan i dimulai dari 0 hingga n- 1
		cout << "Data ke-" << (i + 1) << "; "; //Output ke layar
		cin >> arr[i]

	}

	void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
		int pass = 1; // step 1
		
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			//step
			if (arr[j] > arr[j + 1]) { // step 3
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			
			} 
			pass = pass + 1; //step 4
			cout << "\nPass" << pass - 1 << ": "; // number of pass
			for (int k = 0; k < n; k++) {


			}
					
		} 
		cout << endl;
		while (pass <= n - 1); //step 5
}

	void display() {
		cout << endl;
		cout << "=================================" << endl;
		cout << "Element Array yang telah tersusun" << endl;
		cout << "=================================" << endl;
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << Arr[j]; // menampilkan array
			if (j < n - 1) {
				cout << "-->";
			}
		
		}
		cout << endl;
		cout << endl;

		cout << " jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
		cout << endl;
		cout << endl;

	}

	int main() {
	
	
	input();

	bubbleSortArray();
	display();

	system("pause");
	return 0;
	
		


