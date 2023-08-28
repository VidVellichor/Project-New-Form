#include <iostream>

int main()
{
    int a,b,c, ope;
    std::cout<<"enter a value" << std::endl;
    std::cin >> a;
   std::cout<<"enter b value" <<std::endl;
    std::cin >> b;
    std::cout<<"enter operation (+ - * / and %)";
    std::cin>> ope;
    if (ope == +)
    {
        c=a+b;
        std::cout<< c;
        break;
    }
    if (ope == -)
     {
        c=a-b;
        cout<< c;
        break;
     }
      else if (ope == *)
      {
          c=a*b;
      std::cout<< c;
        break;
      }
      else if (ope == /)
      {
       c= a/b;
       std::cout<< c;
       break;
      }
      else if (ope == %)
      {
        c=a%b;
        std::cout<< c;

      }
    else std::cout<<"entered wrong input";
    return 0;
}