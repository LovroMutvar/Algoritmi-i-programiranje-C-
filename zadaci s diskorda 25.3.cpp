#include <iostream>

using namespace std;

int main()
{

   /* char uneseni; 1 zadatak
    char prijasnji;
    cin>> uneseni;
    int n=0;
    do{
        prijasnji=uneseni;
        cin>>uneseni;
        n++;
    }while(uneseni>=prijasnji);*/
    /*int broj;

    int zbroj= 0; 2 zadatak
    cin>>broj;
    do{
        zbroj+=broj%10;
        broj/=10;
    }while(broj>0);
    cout<<zbroj<<endl;*/
   // 3 zadatak//
 /*  char znak;
   char prijašnji znak;
   char n;
   do{
    cin>>znak;
    if (znak<=prijasnji znak){
        break;}
        else;
   }*/
 //  4 zadatak//
/* int broj,najveci;
 int nastavak;
 cout<<"unesi neki broj";
 cin>>broj;
 najveci=broj;
 do{
    cout<<"želiš li nastaviti(1 za da 0 za ne)";
    cin>>nastavak;
    if(nastavak==1)
        cout<<"Unesi broj";
    cin>>broj;
    if (broj > najveci){
        najveci = broj;
    }
    if(nastavak==0){
        cout<<"najveci broj je"<<najveci;
    }
 }while(nastavak==0);
 cout<<"najveci broj je. "<<najveci<<endl;   /**/
/*int broj,odluka; //reset//
int nbroj;
cout<<"unesi neki broj";
cin>>broj;
cout<<"zelis li nastaviti";
cin>>odluka;
nbroj=broj;
while(odluka!=0){
cout<<"unesi neki broj";
cin>>broj;
cout<<"zelis li nastaviti";
cin>>odluka;
if(broj>nbroj){

    nbroj=broj;
}
}
cout<<"najveci broj je: "<<nbroj;*/
/*int broj,n=0,zbroj=0;
do
    {
    cin>>broj;
    zbroj+=broj;
    n++;
    cout<<zbroj;
    if(zbroj==666)
        {
        break;
        }

    }while(1);
    cout<<n<<" "<<zbroj;*/
/*int broj,nneg=0,npoz=0,npar=0,nneparnih=0,ndjs3=0;
while(1)
    {
    cin>>broj;
    if(broj==0)
        break;
    if(broj<0)
        {
        nneg++;
        }
    if(broj>0)
        {
        npoz++;
        }
    if(broj%2==0)
        {
        npar++;
        }
    if(broj%2!=0)
        {
        nneparnih++;
        }
    if(broj%3==0)
        {
        ndjs3++;
        }


    }
    cout<<"negativnih ga je: "<<nneg<<endl;
    cout<<"pozitivnih ga je: "<<npoz<<endl;
    cout<<"parnih ga je: "<<npar<<endl;
    cout<<"neparnih ga je: "<<nneparnih<<endl;
    cout<<"djeljivi s 3 je: "<<ndjs3<<endl;*/

    /*for(int i=20;i<100;i++){
        if(i % 11==0){
        if(i == 77){
                cout<<"sedamdeset i sedam"<<endl;
        }else{
            cout<<i<<endl;
         }
    }
}*/
/*for(char i='a';i<='z';i++)
    cout<<i<<endl;*/
    /*for(char i='a';i<='z';i++)
    cout<<i<<", ";*/
  /*  for(int i=0;i<=9999;i++){
 if(i%2==0){
    cout<<i<<endl;
}
    }*/
    /*for(int i=0;i<=9999;i++){
 if(i%2==0){
        if(i%10==4){
    cout<<i<<endl;
        }}}*/
/*int n;
cout<<"upisi n"<<endl;
cin>>n;
int zbroj=0;
for(int i=1;i<n;i++)
    if(i%2!=0){
     zbroj+=i;
    }
cout<<zbroj<<endl;*/
/*int umn=1;
int n;
cout<<"napisi n"<<endl;
cin>>n;
for(int i=7;i<=n;i+=1){
if(i%2==0&& i%7==4){
umn*=i;
}}
cout<<umn<<endl;*/
/*char z,zp;
int n;
do
    {
    zp=z;
    cin>>z;
    n++;
   } while(z>=zp);*/
   int broj,n=0;
   do {
    cout<<"unesi neki broj";
    cin>>broj;
    if(broj==0)
        break;
    if(broj==1)
    {
        cout<<n<<endl;
        continue;

    }

n++;
cout<<n<<endl;
   }while(1);

return 0;
}
