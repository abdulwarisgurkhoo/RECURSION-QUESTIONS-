/************************************sum_of_n_natural_numbers*********************************/
#include<iostream>
using namespace std;
int fun(int n)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            return fun(n-1)+n;
        }
        
    }

int fun2(int n)
{
    return (n*(n+1))/2;
}    
int main ()
    {
        int num;
        cout<<"ENTER THE NUMBER UPTO WHICH TO WANT TO CALULATE THE SUM OF  :  ";
        cin>>num;
        cout<<"/n THE SUMMATION OF N NATURAL NUMBERS ARE  : "<<fun2(num);
        return 0;
    }