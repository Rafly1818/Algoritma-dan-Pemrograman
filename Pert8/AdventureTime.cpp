#include <iostream>

using namespace std;

int main()
{
    string pilihanAwal;
    string kodeKarakter;
    string karakter;
    string lanjut;
    string kodeKesulitan;
    string kesulitan;
    string serang;
    
    int hpKarakter = 0;
    int damageKarakter = 0;
    int hpMonster = 0;
    int damageMonster = 0;
    int heal = 50;
    
    while(true){
        
        cout << "\033[2J\033[1;1H";
        cout << " ==============================" << endl;
        cout << " ||      ADVENTURE TIME      ||" << endl;
        cout << " ==============================" << endl;
        cout << " ||                          ||" << endl;
        cout << " ||      1.START GAME        ||" << endl;
        cout << " ||        2.ABOUT           ||" << endl;
        cout << " ||         3.EXIT           ||" << endl;
        cout << " ||                          ||" << endl;
        cout << " ==============================" << endl;
        
        cout << endl;
        cout << " SILAHKAN MASUKKAN PILIHAN : ";
        cin >> pilihanAwal;
        
                
            if(pilihanAwal == "1"){
                cout << "\033[2J\033[1;1H";
                cout << " PILIHLAH KARARAKTER UNTUK KAMU BERPETUALANG " << endl << endl;
                cout << " 1. RAJA PEDANG " << endl;
                cout << " 2. RAJA PANAH " << endl;
                cout << " 3. RAJA MEDIS " << endl << endl;
                cout << " SILAHKAN PILIH : ";
                cin >> kodeKarakter;
                cout << endl;
                
                    if(kodeKarakter == "1"){
                    karakter = " PEDANG ";
                    hpKarakter = 1000;
                    damageKarakter = 250;
                    }
                    
                    else if(kodeKarakter == "2"){
                    karakter = " PANAH ";
                    hpKarakter = 750;
                    damageKarakter = 500;
                    }
                    
                    else if(kodeKarakter == "3"){
                    karakter = " MEDIS ";
                    hpKarakter = 3500;
                    damageKarakter = 150;
                    }
                    
                    else{
                    cout << " GAAADAAA " << endl << endl;
                    continue;
                    }
                    
                    if(kodeKarakter == "1"){
                    cout << " HEBAT KAMU MEMILIH KARAKTER RAJA" << karakter << endl;
                    }
                    
                    else if(kodeKarakter == "2"){
                    cout << " HEBAT KAMU MEMILIH KARAKTER RAJA" << karakter << endl;
                    }
                    
                    else if(kodeKarakter == "3"){
                    cout << " HEBAT KAMU MEMILIH KARAKTER RAJA" << karakter << endl; 
                    }
                    
            cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
            cin >> lanjut;    
                
            while(true){
                
                cout << "\033[2J\033[1;1H";
                cout << " PILIH LEVELNYA YA " << endl << endl;
                cout << " 1. EASY " << endl;
                cout << " 2. MEDIUM " << endl;
                cout << " 3. HARD " << endl << endl;
                cout << " PILIHHHH : ";
                cin >> kodeKesulitan;
                cout << endl; 
                
                if(kodeKesulitan == "1"){
                kesulitan = " EASY ";
                hpMonster = 500;
                damageMonster = 50;
                }
            
                else if(kodeKesulitan == "2"){
                kesulitan = " MEDIUM ";
                hpMonster = 1000;
                damageMonster = 100;
                }
            
                else if(kodeKesulitan == "3"){
                kesulitan = " HARD ";
                hpMonster = 1500;
                damageMonster = 150;
                }
                
                else{
                cout << " GAADAAAAA " << endl << endl;
                continue;
                }
                
                if(kodeKesulitan == "1"){
                cout << " YAH PILIH YANG GAMPANG MASA PILIHNYA" << kesulitan << endl;
                }
        
                else if(kodeKesulitan == "2"){
                cout << " LUMAYAN LAHH KAMU PILIH" << kesulitan << endl;
                }
        
                else if(kodeKesulitan == "3"){
                cout << " KEREENN KAMU PILIHNYA" << kesulitan << endl;
                }
                    
                cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
                cin >> lanjut;
                break;
            }        
            
                cout << "\033[2J\033[1;1H";
                cout << " KAMU MENGHADAPIN MONSTER YANG MENYERAMKAN RAWRRRR " << endl << endl;
                cout << " KAMU MEMILIH KARAKTER RAJA" << karakter << endl;
                cout << " DARAH KAMU : " << hpKarakter << endl;
                cout << " DAMAGE KAMU : " << damageKarakter << endl << endl;
                cout << " LEVEL MONSTER YANG KAMU LAWAN" << kesulitan << endl;
                cout << " DARAH MONSTER : " << hpMonster << endl;
                cout << " DAMAGE MONSTER : " << damageMonster << endl << endl;
                cout << " SIAPKAN NYALIMU !!!! (KETIK APA SAJA UNTUK LANJUT) : ";
                cin >> lanjut;
                cout << endl;    
            
            while(true){
                cout << "\033[2J\033[1;1H";
                if(hpKarakter <= 0){
                    cout << " YAHAHAHA KAMU KALAH " << endl;
                    cout << " ULANG LAGI YA " << endl << endl;
                    cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
                    cin >> lanjut;
                    break;
                    cout << "\033[2J\033[1;1H";
                }else if(hpMonster <= 0){
                    cout << " HEBATTTT KAMU MENANG " << endl;
                    cout << " MAIN LAGI GA NIHHHH " << endl << endl;
                    cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
                    cin >> lanjut;
                    break;
                }
                
                cout << "\033[2J\033[1;1H";
                cout << " MONSTER ITU MENDEKATIMU HATI-HATI !!!" << endl << endl;
                cout << " KAMU MEMILIH KARAKTER" << karakter << endl;
                cout << " DARAH KAMU : " << hpKarakter << endl;
                cout << " DAMAGE KAMU : " << damageKarakter << endl << endl;
                cout << " LEVEL MONSTER YANG KAMU LAWAN" << kesulitan << endl;
                cout << " DARAH MONSTER : " << hpMonster << endl;
                cout << " DAMAGE MONSTER : " << damageMonster << endl << endl;
                cout << " 1. SERANG MONSTER (MENGURANGI HP MONSTER) " << endl;
                cout << " 2. BERLINDUNG DARI MONSTER (MENAMBAH HP KARAKTER) " << endl << endl;
                cout << " MASUKKAN PILIHANMU : ";
                cin >> serang;
                
                if(serang == "1"){
                cout << " MUSUH TERKENA SERANGANMU " << endl;
                hpKarakter -= damageMonster;
                hpMonster -= damageKarakter;
                }else if(serang == "2"){
                cout << " KAMU BERLINDUNG DARI MONSTER (+50 hp) " << endl;
                hpKarakter += heal;
                }else{
                cout << " GAADDAAAAAA ";
                }
            continue;    
            }    
                
    continue;           
    }
    else if(pilihanAwal == "2"){
        cout << "\033[2J\033[1;1H";
        cout << " ALHAMDULILLAH SELESAI ";
        cout << endl << endl;
        cout << " KETIK APA SAJA UNTUK KEMBALI : ";
        cin >> lanjut;
        continue;
    }
    else if(pilihanAwal == "3"){
        cout << endl << endl;
        cout << " DADAH ";
        break;
    }    
    else{
       cout << endl << endl;
       cout << " GAADAAAAA";
       continue;
    }    
        
        
        
   }
    

    return 0;
}


