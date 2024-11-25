#include <iostream>

using namespace std;

int main()
{
    int bilangan1, bilangan2;

    cout << "Masukkan Bilangan Pertama : ";
    cin >> bilangan1;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> bilangan2;

    int penjumlahan = bilangan1 + bilangan2;
    int pengurangan = bilangan1 - bilangan2;
    int perkalian = bilangan1 * bilangan2;
    int pembagian = bilangan1 / bilangan2;

    cout << "Hasil dari penjumlahan : " << penjumlahan << endl;
    cout << "Hasil dari pengurangan : " << pengurangan << endl;
    cout << "Hasil dari perkalian : " << perkalian << endl;
    cout << "Hasil dari pembagian : " << pembagian << endl;
    
    return 0;
    
}