/************************************factorial_of_a_number*********************************/
#include<iostream>
using namespace std;
//using loop 
int fact(int n)
{
    int fact=1;
    while (n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"THE FACTORIAL OF NUMBER IS : "<<fact;
}
//using recusrsive function 

int fun(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return fun(n-1)*n;
        
    }
}
int main ()
{
   
    int num;
    cout<<"enter the number please whose factorial you eant to print  :  ";
    cin>>num;
   
    cout<<"THE FACTORIAL OF THE GIVEN NUMBER IS : "<<fun(num);
    return 0;

}