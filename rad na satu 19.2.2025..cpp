#include <iostream>

using namespace std;

int main()
{
/* int a,b; 1 zadatak
cin>>a>>b;
for(int i=a;i<=b;i++){
    cout<<i<<endl;
}*/
/*int a,b; 2 zadatak
cin>>a>>b;
for(int i=b;i>=a;i--){
    cout<<i<<endl;
}*/
/*int a,b; 3 zadatak
cin>>a>>b;
if (a%2==0){
    a=a;}
else{
    a+=1;}
for(int i=a;i<=b;i+=2){
    cout<<i<<endl; /*
}


/*int a,b; 4 zadatak
cin>>a>>b;
for(int i=a;i<=b;i+=3){
    cout<<i<<endl;
}*/
/*char a,b; 5 zadatak
cout<<"Unesi slova engleske abecede";
cin>>a>>b;
for(char i=a;i<=b;i++){
    cout<<i<<endl;
}*/
/*char a,b;
cout<<"Unesi slova engleske abecede";
cin>>a>>b;
for(char i=a;b!=i,;i++){
    if(i>'z')
    i='a';
    cout<<i<<endl;
}

}*/
int n,ocjena,zocjena;
cout<<"Unesi broj ocjena";
cin>>n;
for(int i=0;i<n;i++){
    cin>>ocjena;
    zocjena=zocjena+ocjena;
    cout<<zocjena/(n/1.0);
}

    return 0;
}
