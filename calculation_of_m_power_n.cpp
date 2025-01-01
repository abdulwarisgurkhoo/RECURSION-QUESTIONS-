/*************************************calculation_of_m_power_n*****************************/
#include<iostream>
using namespace std;
//recursive function
int exp(int m,int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return exp(m,n-1)*m;
        }
    }
int main ()
{
    int base,power;
    cout<<"enter the base number please : ";
    cin>>base;
    cout<<"\nenter the power of base number please : ";
    cin>>power;
    cout<<"result of exponent is : "<<exp(base,power);
    return 0;



}
