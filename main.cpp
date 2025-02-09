#include <iostream>

using namespace std;

int main()
{
char a,b;
cout<<"Molim Vas unesite prvo slovo: ";
cin>>a;
cout<<"Molim Vas unesite drugo slovo: ";
cin>>b;
if(a>b){
    cout<<"Slova nisu u abecednome redu ";
}
else if(b>a){
    cout<<"Slova su u abedcednome redu ";
}
    return 0;
}
