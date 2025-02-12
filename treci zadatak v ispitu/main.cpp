#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"Molim Vas, unesite neki broj";
cin>>a;
if(a>1 && a<= 10){
    cout<<"Broj je >1 i <= 10";
}
else if(a>10 && a<=100){
    cout<<"Broj je >10 i <=100";
}
else if(a>100 && a<=1000){
    cout<<"Broj je >100 i <=1000"; }
else if (a<1 && a>=1000){
    cout<<"van intervala";
}

    return 0;
}
