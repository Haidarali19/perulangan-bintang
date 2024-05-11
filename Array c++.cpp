#include <iostream>
using namespace std;

int main() {
    const int JUMLAH_BARANG = 5; // Jumlah barang yang akan dihitung
    double hargaBarang[JUMLAH_BARANG]; // Array untuk menyimpan harga barang
    double totalBelanja = 0.0; // Total belanjaan

    // Mengisi harga barang
    cout << "Masukkan harga " << JUMLAH_BARANG << " barang:\n";
    for (int i = 0; i < JUMLAH_BARANG; ++i) {
        cout << "Barang ke-" << i + 1 << ": ";
        cin >> hargaBarang[i];
        totalBelanja += hargaBarang[i];
    }

    // Menampilkan total belanjaan
    cout << "\nTotal belanjaan: $" << totalBelanja << endl;

    return 0;
}

