#include <iostream>
//#include <cstdlib>
using namespace std;

int main()
{
    int a{45};
    int b{55};
    int *p2{&a};
    //cout<<boolalpha;
    cout<< "Pointer P2 is storing the address int p    :"<<*p2<<endl;
    cout<< "Pointer P2 is storing the address of int p :"<<p2<<endl;
    cout<< "Pointer P2 is storing the address of int p :"<<&a<<endl;
    cout<< "Pointer P2 is storing the address of int p :"<<&p2<<endl;
    cout<< "Value of p is                              : "<<*p2<<endl;
    cout<<"\nA is less B        : "<<(a<b);
    cout<<"\nA is greaterB      : "<<(a>b);
    cout<<"\nA is less than B   : "<<(a<=b);
    cout<<"\nA is greater than B: "<<(a>=b);
    cout<<"\nA is not equal to B: "<<(a!=b);
    cout<<"\nA is equal to B    : "<<(a==b);
    return 0;
}