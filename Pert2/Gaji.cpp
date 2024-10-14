#include <iostream>

using namespace std;

int main()
{
    int bonus_biasa = 9;
    
    int gapok_biasa = 75000, gapok_pejabat = 95000;
    
    const int jamKerjaPegawai = 8;
    
    int asuransi = 5;
    
    string namaPegawai, tipePegawai;
    int jam_kerja, gapok, gajiTahunan, bonusBulanan, asuransiBulanan;
    
    std::cout << "Masukkan Nama Pegawai:";
    std::cin >> namaPegawai;
    std::cout << std::endl;
    
    std::cout << "Masukkan Tipe Pegawai:";
    std::cin >> tipePegawai;
    std::cout << std::endl;
    
    std::cout << "Masukkan Jam Kerja dalam 1 Hari:";
    std::cin >> jam_kerja;
    std::cout << std::endl;
    
    if(jam_kerja > jamKerjaPegawai){
        std::cout << "Mohon Maaf Jam Kerja Anda Melebihi Ketentuan Perusahaan" << std::endl;
    }
    
   if(tipePegawai == "Biasa"){
       gapok = 75000 * jam_kerja * 21;
       bonusBulanan = gapok * 9 / 100;
       asuransiBulanan = gapok * 5 / 100;
       gajiTahunan = (gapok * 12) + (bonusBulanan * 12) - (asuransiBulanan * 12);
   } else if(tipePegawai == "Pejabat"){
       gapok = 95000 * jam_kerja * 21 * 60 / 90;
       asuransiBulanan = gapok * 5 / 100;
       gajiTahunan = (gapok * 12) - (asuransiBulanan * 12);
   }
   
   std::cout << "Data Pegawai" << std::endl;
   std::cout << "Nama Pegawai : " << namaPegawai << std::endl;
   std::cout << "Gaji Bulanan : " << gapok << std::endl;
   std::cout << "Gaji Tahunan : " << gajiTahunan << std::endl;
    
    return 0;
}