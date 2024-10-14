#include <iostream>

using namespace std;

int main()
{
    int n;
    
    std::cout << "Tampilkan Hello World (1-5) ";
    std::cin >> n;
    
    for(int i=1; i<=n; i++){
       
        std::cout <<endl<< "Hello World " << i;
    }
    
    return 0;
}