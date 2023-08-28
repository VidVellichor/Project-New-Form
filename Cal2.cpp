#include<iostream>
void fun(float a, float b); 
int main()
{   
    float a, b, sum, sub, mul, divide, mod;
    char op;

    std::cout<<"Enter any two operands with operator=";
    std::cin>>a>>op>>b;
    fun(a, b);
    return 0;
}
void op(float a, float b)
{
    if(a+b)
    {
        float sum=a+b;
        std::cout<<"\nAddition of two numbers is="std::<<sum;
    }
    else if(a-b)
    {
        float sub=a-b;
        std::cout<<"\nSubtraction of two numbers is="std::<<sub;
    }
    else if(a*b)
    {
        float mul=a*b;
        std::cout<<"\nMultiplication of two numbers is="std::<<mul;
    }
    else if(a/b)
    {
        float divide=a/b;
        std::cout<<"\nDivision of two number is="std::<<divide;
    }
    else
    {
        std::cout<<"\nInvalid operator.......";
    }