//// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;                           //output baris kosong
    cout << "===============" << endl;      //output ke layar
    cout << "Masukan Elemen Array" << endl; //output ke layar
    cout << "===============" << endl;      //output ke layar

    for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //output ke layar
        cin >> arr[i];                         //input ke pengguna

    }
}
void bubbleSortArray() { //procedur untuk mengurutkan array dengan metode bublle sort
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { // step 2
            if (arr[j] > arr[j + 1]) { //step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass " << pass - 1 << ": ";  //output ke layar
        for (int k = 0; k < n; k++) {           //looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";              //output ke layar


        }
        cout << endl;

    } while (pass <= n - 1); //step 5
}
void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "===================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // Output setiap element array pada garis baru
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
}



