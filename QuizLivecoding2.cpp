#include <iostream>
#include <iomanip>
// iomanip digunakan untuk mengambil 2 angka di belakang koma
using namespace std;

void main() {
    double berat_apel, berat_jeruk, berat_semangka;
    const double harga_apel_per_kg = 24000;
    const double harga_jeruk_per_kg = 16250;
    const double harga_semangka_per_kg = 8000;

    // Input berat masing-masing buah
    cout << "Masukkan berat apel (kg): ";
    cin >> berat_apel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> berat_jeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> berat_semangka;
}