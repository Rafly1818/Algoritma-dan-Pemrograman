#include <iostream>

using namespace std;

int main()
{
    int harga;
    int pilihan;
    int diskon;
    
    int total = 0;
    int jumlahtiket;
    
    int ekonomi = 100000;
    int bisnis = 200000;
    int eksekutif = 300000;
    
    string pilih;
    string jenistiket;
    
    
    
    cout << "-----MAU TIKET YANG MANA-----" << endl << endl;
    cout << " 1. EKONOMI (Rp. 100.000) " << endl;
    cout << " 2. BISNIS (Rp. 200.000) " << endl;
    cout << " 3. EKSEKUTIF (Rp. 300.000) " << endl;
    
    cout << " PILIH AJA : ";
    cin >> pilih;
    cout << endl;
    
    cout << " MAU BERAPA TIKET : ";
    cin >> jumlahtiket;
    
    switch (pilihan){
        case 1:
        total = jumlahtiket * ekonomi;
        jenistiket = " EKONOMI ";
        
        case 2:
        total = jumlahtiket * bisnis;
        jenistiket = " BISNIS ";
        
        case 3:
        total = jumlahtiket * eksekutif;
        jenistiket = " EKSEKUTIF ";
    }
    
    if(pilih == "1"){
        jenistiket = "EKONOMI";
        total += ekonomi * jumlahtiket;
    }else if(pilih == "2"){
        jenistiket = "BISNIS";
        total += bisnis * jumlahtiket;
    }else if(pilih == "3"){
        jenistiket = "EKSEKUTIF";
        total += eksekutif * jumlahtiket;
    }
    
    cout << endl;
    cout << " ANDA MEMESAN TIKET : " << jenistiket << endl << " JUMLAH TIKET : " << jumlahtiket << endl << " DENGAN TOTAL HARGA : Rp. " << total << endl;
    cout << endl;
    
    if(total < 200000){
        diskon = 0;
    }else if(total <= 500000){
        diskon = total * 2/100;
        cout << "SELAMAT ANDA DAPAT DISKON 2%" << endl;
    }else if(total <= 1500000){
        diskon = total * 5/100;
        cout << "SELAMAT ANDA DAPAT DISKON 5%" << endl;
    }else if(total > 1500000){
        diskon = total * 10/100;
        cout << "SELAMAT ANDA DAPAT DISKON 10%" << endl;
    }
   
   cout << " TOTALNYA " << endl;
   cout << " TIKET : " << jenistiket << endl << " JUMLAH TIKET : " << jumlahtiket << endl << " TOTAL HARGA SEBELUM DISKON : Rp. " << total << endl << " DISKON YANG DIDAPAT : Rp. " << diskon << endl << " JADINYA BAYAR : Rp. " << total-diskon << endl;
     
    
    
    
    
    

    return 0;
}