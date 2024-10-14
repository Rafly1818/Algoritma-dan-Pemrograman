#include <iostream>

using namespace std;

void luasPersegi(){
    int a, b;
    float sum;

    cout << "-----Luas Persegi-----" << endl;
    cout << "Rumus Luas Persegi : " << "L = S x S" << endl;
    cout << "Masukkan Panjang Sisi 1 : ";
    cin >> a;
    cout << "Masukkan Panjang Sisi 2 : ";
    cin >> b;
    sum = a*b;
    cout << "Hasil Dari luas Persegi Adalah : " << sum << endl;
}

void luasLingkaran(){
    int x, y;
    float sum;
    
    cout << "-----Luas Lingkaran-----" << endl;
    cout << "Rumus Luas Lingkaran : " << "3,14 x r x r" << endl;
    cout << "Rumus Luas Lingkaran : " << "22/7 x r x r" << endl;
    cout << "Masukkan Jari-Jari Pertama : ";
    cin >> x;
    cout << "Masukkan Jari-Jari Kedua : ";
    cin >> y;
    if(x * y % 7 == 0){
    sum = 22/7 * x * y;
    cout << "Hasil Dari Luas Lingkaran Adalah : " << sum << endl;
	}
	else if(x * y % 7 !=0){
	sum = 3.14 * x * y;
	cout << "Hasil Dari Luas Lingkaran Adalah : " << sum <<endl;	
	}
}

void luasPersegiPanjang(){
    int c, d;
    float sum;
    
    cout << "-----Luas Persegi Panjang-----" << endl;
    cout << "Rumus Luas Persegi Panjang : " << "L = P x L" << endl;
    cout << "Masukkan Panjang : ";
    cin >> c;
    cout << "Masukkan Lebar : ";
    cin >> d;
    sum = c*d;
    cout << "Hasil Dari Luas Persegi Panjang Adalah : " << sum << endl;
}

int main()
{
    float sum;
    string bangundatar;
    string lanjut;
	    
    cout << "-----Bangun Datar-----" << endl;
    
    while(true){
    	cout << " 1. Luas Persegi " << endl;
    	cout << " 2. Luas Lingkaran " << endl;
    	cout << " 3. Luas Persegi Panjang " << endl;
    	cout << "Masukkan Bangun Datar Yang Diinginkan : ";
    	cin >> bangundatar;
    	cout << endl;
    	
    	if(bangundatar == "1"){
    		luasPersegi();
			cout << endl;
		}
    	else if(bangundatar == "2"){
    		luasLingkaran();
    		cout << endl;
		}
    	else if(bangundatar == "3"){
    		luasPersegiPanjang();
    		cout << endl;
		}
	else{
	cout << "Pilih Yang Bnr" << endl << endl;
	continue;	
	}
	
	cout << "Ketik 1 Jika Mau Hitung Lagi. Jika Tidak Ketik Apa Saja : ";
	cin >> lanjut;
	cout << endl;
	
	if(lanjut == "1"){
		continue;
	}
	else{
		break;
	}
	cout << endl << endl;
}
    return 0;
}