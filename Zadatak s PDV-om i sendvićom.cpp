#include <iostream>

using namespace std;

int main()
{
float senvic;
float PDV;
PDV=0.5;
cout<<("Upi�i cijenu sendvi�a bez pdv: ");
cin>>senvic;
senvic=senvic+senvic*PDV;
cout<<("Cijena sendvi�a s PDV-om je: ");
cout<<senvic;
    return 0;
}
