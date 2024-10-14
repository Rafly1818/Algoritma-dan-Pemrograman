#include <iostream>

using namespace std; 

int main()
{
    string NamaPembeli;
    string YaTidak;
    string KodeMakanan, Makanan;
    string Level, LevelMakanan;
    string KodeMinuman, Minuman;
    string Dingin, DinginMinuman;
    
    int JumlahSaldo = 100000;
    int MG = 25000;
    int NG = 22000;
    int SA = 20000;
    int JM = 10000;
    int AP = 1000;
    int KP = 5000;
    
    int Total = 0;
    int JumlahMakanan, JumlahMinuman;

    cout << "DAFTAR MENU RUMAH MAKAN : " << endl;
    cout << endl;
    
    cout << "DAFTAR MENU MAKANAN :" << endl;
    cout << "(KODE MG) MIE GORENG : Rp 25.000" << endl;
    cout << "(KODE NG) NASI GORENG : Rp 22.000" << endl;
    cout << "(KODE SA) SOTO AYAM : Rp 20.000" << endl;
    cout << endl;
    
    cout << "DAFTAR MENU MINUMAN :" << endl;
    cout << "(KODE JM) JUS MANGGA : Rp 10.000" << endl;
    cout << "(KODE AP) AIR PUTIH : Rp 1.000" << endl;
    cout << "(KODE KP) KOPI : Rp 5.000" << endl;
    cout << endl;
    
    cout << "MASUKKAN NAMA PEMBELI : ";
    cin >> NamaPembeli;
    cout << endl;
    
        while(true){
        cout << "APAKAH ANDA INGIN MEMESAN MAKANAN (YA / TIDAK) : ";
        cin >> YaTidak;
    
        while(true){
            if(YaTidak == "YA"){
            while(true){
                cout << "MASUKKAN KODE MAKANAN : ";
                cin >> KodeMakanan;
                cout << "JUMLAH MAKANAN YANG DIPESAN : ";
                cin >> JumlahMakanan;
                
                cout << "1. Sangat Pedas" << endl;
                cout << "2. Pedas" << endl;
                cout << "3. Tidak Pedas" << endl;
                
                cout << "MAU LEVEL BERAPA (1 / 2 / 3) : ";
                cin >> Level;
                    
                    if(KodeMakanan == "MG"){
                    Makanan = "MIE GORENG";
                    Total += MG*JumlahMakanan;
                    break;
                }   else if(KodeMakanan == "NG"){
                    Makanan = "NASI GORENG";
                    Total += NG*JumlahMakanan;
                    break;
                }   else if(KodeMakanan == "SA"){
                    Makanan = "SOTO AYAM";
                    Total += SA*JumlahMakanan;
                    break;
                }   else{
                    cout << "KODE MAKANAN YANG ANDA MASUKKAN TIDAK TERSEDIA";
                    continue;
                }
            }   
                
            while(true){
                    if(Level == "1"){
                    LevelMakanan = "SANGAT PEDAS";
                    break;
                }   else if(Level == "2"){
                    LevelMakanan = "PEDAS";
                    break;
                }   else if(Level == "3"){
                    LevelMakanan = "TIDAK PEDAS";
                    break;
                }   else{
                    cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA";
                    continue;
                }  
            }       
                }   else if(YaTidak == "TIDAK"){
                    break;
                }break;
        }break;
    }
    cout << endl;
    
        while(true){
        cout << "APAKAH ANDA INGIN MEMESAN MINUMAN (YA / TIDAK) : ";
        cin >> YaTidak;
    
        while(true){
            if(YaTidak == "YA"){
            while(true){
                cout << "MASUKKAN KODE MINUMAN : ";
                cin >> KodeMinuman;
                cout << "JUMLAH MINUMAN YANG DIPESAN : ";
                cin >> JumlahMinuman;
                
                cout << "1. DINGIN" << endl;
                cout << "2. HANGAT" << endl;
                cout << "3. PANAS" << endl;
                
                cout << "MAU DINGIN DINGIN NGGA (1 / 2 / 3) : ";
                cin >> Dingin;
                    
                    if(KodeMinuman == "JM"){
                    Minuman = "JUS MANGGA";
                    Total += JM*JumlahMinuman;
                    break;
                }   else if(KodeMinuman == "AP"){
                    Minuman = "AIRPUTIH";
                    Total += AP*JumlahMinuman;
                    break;
                }   else if(KodeMinuman == "KP"){
                    Minuman = "KOPI";
                    Total += KP*JumlahMinuman;
                    break;
                } 
            }
                
                while(true){
                    if(Dingin == "1"){
                    DinginMinuman = "DINGIN";
                    break;
                }   else if(Dingin == "2"){
                    DinginMinuman = "HANGAT";
                    break;
                }   else if(Dingin == "3"){
                    DinginMinuman = "PANAS";
                    break;
                }   else{
                    cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA";
                    continue;
                }
            }
            
                }   else if(YaTidak == "TIDAK"){
                    break;
                }break; 
        }break;    
    }  
    cout << endl;

    while(true){
    cout <<"ATAS NAMA : " << NamaPembeli << endl << "ANDA MEMESAN :" << endl << "MAKANAN : " << JumlahMakanan << " " <<  Makanan << " DENGAN LEVEL " << LevelMakanan << endl << "MINUMAN : " << JumlahMinuman << " " << Minuman << " DENGAN SUHU " << DinginMinuman << endl << "DENGAN TOTAL HARGA RP. " << Total << endl;
    cout << "KETIK YA UNTUK MENGKONFIRMASI DAN MEMBAYAR PESANAN : ";
    cin >> YaTidak;
        if(YaTidak == "YA"){
            cout << endl;
            break;
        } else {
            cout<<endl;
            continue;
        }
    }
    
    if(Total > JumlahSaldo){
        cout << endl << "Maaf, sisa saldo anda tidak mencukupi untuk membeli makanan/minuman ini" << std::endl;
    } else {
        cout << endl << "PEMBAYARAN BERHASIL, ANDA MEMBAYAR SEBESAR RP. " << Total;
        cout << endl << "SISA SALDO ANDA ADALAH RP. " << JumlahSaldo - Total << endl;
    }
    cout << endl;
    cout << "TERIMAKASIH TELAH BERKUNJUNG" << endl;
    
    
    
    

    return 0;
}
