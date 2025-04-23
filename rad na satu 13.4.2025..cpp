#include <iostream>

using namespace std;

int main()
{/*
int brojevi[100];
int a=10;
int b=100;
for (int i=0; i<100; i++)
{

    brojevi[i]=rand()%(b-a+1)+a;
}
int vecihod50=0;
for(int indeks=0; indeks<100;indeks++)
    if(brojevi[indeks]>50){
        vecihod50++;
    }

cout<<vecihod50<<endl;*/
//u polju sve parne brojeve smanji za 1
/*int brojevi[100];
int a=10;
int b=100;
for (int i=0;i<100;i++)
{
brojevi[i]=rand()%(b-a+1)+a;
}
for(int i=0;i<100;i++){
    if(brojevi[i]%2==0)
        brojevi[i]-=1;
        cout<<brojevi[i]<<endl;
}
*/
/*int brojevi[10];
int a=-10;
int b=10;
for (int i=0; i<10; i++)
{

    brojevi[i]=rand()%(b-a+1)+a;
}
int zbroj=0;
for(int i=0;i<10;i++)
    zbroj+=brojevi[i];
cout<<zbroj<<endl;*/
//ispisi to polje na nacin da su elemnti ispisain u zasebnom retku
/*int brojevi[10];
int a=-10;
int b=10;
for (int i=0; i<10; i++)
{

    brojevi[i]=rand()%(b-a+1)+a;
    cout<<brojevi[i]<<endl;
}*/
//ispisi prvih 5 elemenata polja
/*int brojevi[10];
int a=-10;
int b=10;
for (int i=0; i<5; i++)
{

    brojevi[i]=rand()%(b-a+1)+a;
    cout<<brojevi[i]<<endl;
}*/
int brojevi[10];
int a=-10;
int b=10;
for (int i=0; i<10; i++)
{

    brojevi[i]=rand()%(b-a+1)+a;
}
for(int i=0; i<3;i++){
    if(brojevi[i]<0){
    cout<<brojevi[i]<<endl;
    }
}





    return 0;
}
