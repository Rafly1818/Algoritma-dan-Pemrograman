#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    
    while(true){
        cout << "BILANGAN GANJIL : ";
        cin >> X;
    
        cout << "BILANGAN GENAP : ";
        cin >> Y;
    
    if(X % 2 !=0 && Y % 2 == 0){
        cout << "Benar" << " " << X << " " << "Adalah Bilangan Ganjil" << endl << "Benar" << " " << Y << " " << "Adalah Bilangan Genap";
    }else if(X % 2 == 0 && Y % 2 !=0){
        cout << "Bukan" << " " << X << " " << "Adalah Bilangan Genap" << endl << "Salah" << " " << Y << " " << "Adalah Bilangan Ganjil";
    }else if(X % 2 == 0 && Y % 2 == 0){
        cout << "Bukan" << " " << X << " " << "Adalah Bilangan Genap" << endl << "Benar" << " " << Y << " " << "Adalah Bilangan Genap";
    }else if(X % 2 !=0 && Y % 2 !=0){
        cout << "Benar" << " " << X << " " << "Adalah Bilangan Ganjil" << endl << "Salah" << " " << Y << " " << "Adalah Bilangan Ganjil, Bukan Genap";
    }break;
    
    }       

    return 0;
}