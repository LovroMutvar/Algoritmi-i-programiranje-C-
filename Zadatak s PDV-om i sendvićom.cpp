#include <iostream>

using namespace std;

int main()
{
float senvic;
float PDV;
PDV=0.5;
cout<<("Upiši cijenu sendviæa bez pdv: ");
cin>>senvic;
senvic=senvic+senvic*PDV;
cout<<("Cijena sendviæa s PDV-om je: ");
cout<<senvic;
    return 0;
}
