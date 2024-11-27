#include <iostream>

using namespace std;

int main()
{
    string pilihanAwal;
    string namaBulan, bulanLahir;
    string lanjut;
    string grade;
    string lulus;
    string nama;
    
    int tanggalLahir, tahunLahir, tahunSekarang;
    int umur;
    int nilai;
    int nominal;
    int jumlah;
    int u1, u2, u3, u4, u5, u6, u7;
    
    while(true){
        
        cout << "\033[2J\033[1;1H";
        cout << " ===========================================" << endl;
        cout << " ||              TUGAS UAS                ||" << endl;
        cout << " ===========================================" << endl;
        cout << " ||                                       ||" << endl;
        cout << " ||       1.MENGHITUNG UMUR               ||" << endl;
        cout << " ||       2.KONVERSI NILAI KE HURUF       ||" << endl;
        cout << " ||       3.MENGHITUNG UANG PECAHAN       ||" << endl;
        cout << " ||       4.EXIT                          ||" << endl;
        cout << " ||                                       ||" << endl;
        cout << " ===========================================" << endl;
        
        cout << endl;
        cout << " SILAHKAN MASUKKAN PILIHAN : ";
        cin >> pilihanAwal;
        
        if(pilihanAwal == "1"){
            cout << "\033[2J\033[1;1H";
            while(true){
                cout << " " << endl;
                cout << "          SILAHKAN DI ISI          ";
                cout << endl;
                cout <<"======================================";
                cout << endl << endl;
                
                cout << " NAMA : ";
                cin >> nama;
                cout << " TANGGAL LAHIR : ";
                cin >> tanggalLahir;
                cout << " BULAN LAHIR : ";
                cin >> bulanLahir;
                cout << " TAHUN LAHIR : ";
                cin >> tahunLahir;
                cout << endl;
                
                cout << "======================================" << endl;
                cout << " KETIK APA SAJA UNTUK LANJUT : ";
                cin >> lanjut;
                cout << endl << endl;
                
                if(bulanLahir == "1"){
                    namaBulan = "JANUARI";
                    break;
                }else if(bulanLahir == "2"){
                    namaBulan = "FEBRUARI";
                    break;
                }else if(bulanLahir == "3"){
                    namaBulan = "MARET";
                    break;
                }else if(bulanLahir == "4"){
                    namaBulan = "APRIL";
                    break;
                }else if(bulanLahir == "5"){
                    namaBulan = "MEI";
                    break;
                }else if(bulanLahir == "6"){
                    namaBulan = "JUNI";
                    break;
                }else if(bulanLahir == "7"){
                    namaBulan = "JULI";
                    break;
                }else if(bulanLahir == "8"){
                    namaBulan = "AGUSTUS";
                    break;
                }else if(bulanLahir == "9"){
                    namaBulan = "SEPTEMBER";
                    break;
                }else if(bulanLahir == "10"){
                    namaBulan = "OKTOBER";
                    break;
                }else if(bulanLahir == "11"){
                    namaBulan = "NOVEMBER";
                    break;
                }else if(bulanLahir == "12"){
                    namaBulan = "DESEMBER";
                    break;
                }else{
                    cout << " GAADA BULANNYAAAAA " << endl;
                    continue;
                }break;
            }
            
            tahunSekarang = 2024;
            umur = tahunSekarang - tahunLahir;
            
            cout << "\033[2J\033[1;1H";
            cout << " " << endl;
            cout << "          BERIKUT TANGGAL LAHIR BESERTA UMUR ANDA DI TAHUN 2024          ";
            cout << endl;
            cout << "=========================================================================";
            cout << endl << endl;
            cout << "-> NAMA : " << nama << endl;
            cout << "-> TANGGAL LAHIR : " << tanggalLahir << endl;
            cout << "-> BULAN : " << namaBulan << endl;
            cout << "-> TAHUN : " << tahunLahir << endl;
            cout << "-> UMUR ANDA SAAT INI : " << umur;
            cout << endl << endl;
            cout << "=========================================================================";
            cout << endl;
            cout << " KETIK APA SAJA UNTUK KEMBALI ATAU KETIK '1' UNTUK STOP : ";
            cin >> lanjut;
            
                if(lanjut == " "){
                    continue;
                }else if(lanjut == "1"){
                    break;
                }
        
        }else if(pilihanAwal == "2"){
            cout << "\033[2J\033[1;1H";
            cout << " " << endl;
            cout << "             BERIKUT ATURAN PENILAIAN             ";
            cout << endl;
            cout << "==================================================";
            cout << endl << endl;
            cout << "- GRADE 'A' JIKA MEMPEROLEH NILAI (100 - 80) " << endl;
            cout << "- GRADE 'B' JIKA MEMPEROLEH NILAI (79 - 60) " << endl;
            cout << "- GRADE 'C' JIKA MEMPEROLEH NILAI (59 - 40) " << endl;
            cout << "- GRADE 'D' JIKA MEMPEROLEH NILAI (39 - 20) " << endl;
            cout << "- GRADE 'E' JIKA MEMPEROLEH NILAI (19 - 0) " << endl;
            cout << endl;
            
            cout << "______________________________________________________________ " << endl;
            cout << "|                        SYARAT LULUS                        | " << endl;
            cout << "|                                                            | " << endl;
            cout << "| 1. GRADE 'A' SAMPAI DENGAN 'C' ANDA DINYATAKAN LULUS       | " << endl;
            cout << "| 2. GRADE 'D' SAMPAI DENGAN 'E' ANDA DINYATAKAN TIDAK LULUS | " << endl;
            cout << "|____________________________________________________________| " << endl;
            
            cout << endl;
            
            cout << " MASUKKAN NAMA ANDA : ";
            cin >> nama;
            cout << " MASUKKAN NILAI ANDA : ";
            cin >> nilai;
                
                if(nilai < 100, nilai >= 80){
                    grade = "A";
                }else if(nilai < 80, nilai >= 60){
                    grade = "B";
                }else if(nilai < 60, nilai >= 40){
                    grade = "C";
                }else if(nilai < 40, nilai >= 20){
                    grade = "D";
                }else if(nilai <20, nilai >= 0 ){
                    grade = "E";
                }
            
                if(nilai >= 40 ){
                    lulus = " SELAMAT ANDA LULUS ";
                }else if(nilai < 40){
                    lulus = " MAAF, ANDA TIDAK LULUS ";
                }
            
            cout << "\033[2J\033[1;1H";
            cout << " " << endl;
            cout << "              BERIKUT HASIL KONVERSI NILAI ANDA            " << endl;
            cout << "===========================================================";
            cout << endl << endl;
            cout << "-> NAMA : " << nama << endl;
            cout << "-> NILAI : " << nilai << endl;
            cout << "-> GRADE : " << grade << endl;
            cout << endl;
            cout << lulus;
            cout << endl << endl;
            cout << "===========================================================";
            
            cout << endl;
            cout << " KETIK APA SAJA UNTUK KEMBALI ATAU KETIK '1' UNTUK STOP : ";
            cin >> lanjut;
            
                if(lanjut == " "){
                    continue;
                }else if(lanjut == "1"){
                    break;
                }
                
        }else if(pilihanAwal == "3"){
            cout << "\033[2J\033[1;1H";
            cout << " " << endl;
            cout << "          BERIKUT PECAHAN YANG TERSEDIA         " << endl;
            cout << "================================================";
            cout << endl << endl;
            cout << "-> Rp. 100.000 " << endl;
            cout << "-> Rp. 50.000 " << endl;
            cout << "-> Rp. 20.000 " << endl;
            cout << "-> Rp. 10.000 " << endl;
            cout << "-> Rp. 5.000 " << endl;
            cout << "-> Rp. 2.000 " << endl;
            cout << "-> Rp. 1.000 " << endl;
            cout << endl;
            
            cout << " SILAHKAN MASUKKAN NOMINAL YANG ANDA INGINKAN : ";
            cin >> nominal;
            cout << endl;
            
            jumlah = nominal;
            
                while (nominal >= 100000){
                    u1 += 1;
                    nominal -= 100000;
                }
                
                while (nominal >= 50000){
                    u2 += 1;
                    jumlah -= 50000;
                }
                
                while (nominal >= 20000){
                    u3 += 1;
                    nominal -= 20000;
                }
                
                while (nominal >= 10000){
                    u4 += 1;
                    nominal -= 10000;
                }
                
                while (nominal >= 5000){
                    u5 += 1;
                    nominal -= 5000;
                }
                
                while (nominal >= 2000){
                    u6 += 1;
                    nominal -= 2000;
                }
                
                while (nominal >= 1000){
                    u7 += 1;
                    nominal -= 1000;
                } 
                
            cout << "\033[2J\033[1;1H";
            cout << " " << endl;
            cout << "               BERIKUT HASIL UANG PECAHAN ANDA               " << endl;
            cout << "=============================================================";
            cout << endl << endl;
            
                if(u1 > 0){
                cout << "  " << u1 << " LEMBAR RP. 100.000" << endl;
                }
                
                if(u2 > 0){
                cout << "  " << u2 << " LEMBAR RP. 50.000" << endl;
                }
                
                if(u3 > 0){
                cout << "  " << u3 << " LEMBAR RP. 20.000" << endl;
                }
                
                if(u4 > 0){
                cout << "  " << u4 << " LEMBAR RP. 10.000" << endl;
                }
                
                if(u5 > 0){
                cout << "  " << u5 << " LEMBAR RP. 5.000" << endl;
                }
                
                if(u6 > 0){
                cout << "  " << u6 << " LEMBAR RP. 2.000" << endl;
                }
                
                if(u7 > 0){
                cout << "  " << u7 << " LEMBAR RP. 1.000" << endl;
                }
            cout << endl;
            cout << "=============================================================";
            cout << endl;
            cout << " KETIK APA SAJA UNTUK KEMBALI ATAU KETIK '1' UNTUK STOP : ";
            cin >> lanjut;
            
                if(lanjut == " "){
                    continue;
                }else if(lanjut == "1"){
                    break;
                }
                nominal = 0;
                u1 = 0;
                u2 = 0;
                u3 = 0;
                u4 = 0;
                u5 = 0;
                u6 = 0;
                u7 = 0;
                
           
        }else if(pilihanAwal == "4"){
            cout << " " << endl;
            cout << "       ALHAMDULILLAH SELESAI   " << endl;
            cout << "               DADAH           " << endl;
            break;
            
        }else{
            continue;
        }
    }
return 0;   
}
