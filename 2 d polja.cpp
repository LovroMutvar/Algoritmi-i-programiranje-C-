#include <iostream>

using namespace std;

int main()
{
/*int p[10][10];
int z=0;
int najmanji;
for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
                p[i][j]=rand()%100+1;
        }


}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
    z+=p[i][j];
    cout<<p[i][j]<<"\t";
    } cout<<"zbroj je: "<<z<<endl;
    if(i==0)
    najmanji=z;
    if(z<najmanji)
        najmanji=z;
}cout<<"najmanjni zbroj je: "<<najmanji<<endl;*/
// zel1m
    char p[100][20];
    bool breakVanjska=0; //tzv zastavica
    for (int i=0; i<100; i++){
        for (int j=0; j<20; j++){

                cin>>p[i][j];
            if (p[i][j]=='0')
                break;
            if (p[i][j]=='1' && j==0){
                breakVanjska=1;
                break;
            }
        }
        if (breakVanjska==1)
            break;
    }

    //ispis svega unesenoga
    for (int i=0; i<100; i++){
            for(int j=0;j<20;j++){
        if (p[i][j]=='1')
            break;
        if (p[i][j]=='0')
            cout<<endl;
        cout<<p[i][0];
    }
}
    return 0;
}
