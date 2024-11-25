#include <iostream>

using namespace std;

void luasPersegi(){
    int a, b;
    cout << "-----Luas Persegi-----" << endl;
    cout << "Rumus Luas Persegi" << endl << "L = s x s" << endl;
    cout << "Masukkan Panjang Sisi 1 : ";
    cin >> a;
    cout << "Masukkan Panjang Sisi 2 : ";
    cin >> b;
    cout << endl << "Jawaban: " << a*b << endl;
    
}

int main()
{
    luasPersegi();
    

    return 0;
}