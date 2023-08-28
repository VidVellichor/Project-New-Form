#include <iostream>
int main()
{
int x,y,Tambah,Kali,Bagi,Kurang;
    std::cout<<"Input Nilai x =";std::cin>>x;
        std::cout<<"Input Nilai y =";std::cin>>y;
Tambah = x + y;
Kali = x * y;
Bagi = x / y;
Kurang = x - y;
std::cout<<"hasil Tambah"<<Tambah<<std::endl;
std::cout<<"hasil Kali"<<Kali<<std::endl;
std::cout<<"hasil Bagi"<<Bagi<<std::endl;
std::cout<<"hasil Kurang"<<Kurang<<std::endl;
return 0;
}