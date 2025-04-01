#include <iostream>

using namespace std;

int main()
{
/*char uneseni;
char prijasnji;
int n=0;
do{
    prijasnji=uneseni;
    cin>>uneseni;
    n++;
}while(uneseni>=prijasnji);
cout<<" "<<n<<endl;*/
 /*int b;
 cin>>b;
 int znamenka;
 int zbroj=0;
 while(b!=0){
    znamenka=b%10;
    b/=10;
    zbroj+=znamenka;
 }  cout<<zbroj;*/
/*int b;
cout<<"unesi neki broj: ";
cin>>b;
int odluka;
int najb;
do{
    cout<<"zelis li nastaviti";
    cin>>odluka;
    cout<<"unesi neki broj";
    cin>>b;


}while(odluka==1);*/
/*char z,zp;
int n=1,nn=0;
cin>>z;
zp=z;
while(1){
    cin>>z;
    if(zp==z)
        n++;
    if(zp!=z)
        n=1;
    if(nn<n){
        nn=n;
    }
    zp=z;

    if(z=='x'){
break;
}
}
cout<<nn<<endl;*/
/*int b,n=0,zbroj=0;
do
    {
    cin>>b;
    n++;
    zbroj+=b;
    cout<<zbroj;

    }while(zbroj!=666);
    cout<<" "<<n<<" "<<zbroj<<endl;*/
/*int broj,poz=0,neg=0,par=0,nep=0,djs3=0;
while(1){
    cin>>broj;
    if(broj==0)
        break;
    if(broj>0){
        poz++;
    }
    if(broj<0){
        neg++;
    }
    if(broj%2==0){
        par++;
    }
    if(broj%2!=0){
        nep++;
    }
    if(broj%3==0){
        djs3++;
    }

}
    cout<<"ima ih pozitivnih : "<<poz<<endl;
    cout<<"ima ih negativnih : "<<neg<<endl;
    cout<<"ima ih parnih : "<<par<<endl;
    cout<<"ima ih neparnih : "<<nep<<endl;
    cout<<"ima ih djeljivih s 3 : "<<djs3<<endl;*/
/*for(char i='A';i<='Z';i++)
    cout<<i;*/
/*for(char i='a';i<='z';i++)
cout<<i<<endl;*/
/*for(char i='a';i<='z';i++)
cout<<i<<" , ";*/
/*for(int i=0;i<9999;i++){
    if(i%2==0)
        cout<<i<<endl;
    }*/
    /*for(int i=0;i<9999;i++){
    if(i%10==4)
        cout<<i<<endl;
    }*/
/*int zbroj=0,n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2!=0)
    zbroj+=i;

}cout<<zbroj<<endl;*/
int umn=1;
int n;
cout<<"upisi n ";
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2==0 && i%7==4)
    umn*=i;
}cout<<umn<<endl;
return 0;
}
