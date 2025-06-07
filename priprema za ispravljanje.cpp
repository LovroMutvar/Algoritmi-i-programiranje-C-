#include <iostream>

using namespace std;

int main()
{
/*int p[10][10];
bool rastuce=true;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        p[j][i]=j+i*10;
        }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
            cout<<p[i][j]<<" ";
            }
cout<<endl;
}
/*for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
    p[i][j]=1;*/


/*for(int i=0;i<30;i++){      3 zad
    for(int j=0;j<30;j++){
p[i][i]=0;
p[i][29-i]=0;
p[0][j]=0;
p[i][0]=0;
p[29][j]=0;
p[i][29]=0;
cout<<p[i][j]<<" ";
    }
    cout<<endl;
}*/
/*for(int i=0;i<30;i++){             1 zad
    for(int j=0;j<30;j++){
p[i][j]=i%3;
cout<<p[i][j]<<" ";
    }
    cout<<endl;
}*//*p[2][3]=0;
for(int i=0;i<10;i++){
    for(int j=0;j<9;j++)
        if(p[j][i]>=p[j+1][i]){
    rastuce=false;
    break;
    }
}
if(rastuce==false)
cout<<"nije rastuce ";
else
    cout<<"ide gore";


*/
int p[11][11];
for(int i=0;i<11;i++)
for(int j=0;j<11;j++)
    p[i][j]=0;
for(int i=0;i<11;i++){
for(int j=0;j<11;j++){
p[5][j]=1;
p[i][5]=1;
p[0][j]=1;
p[i][0]=1;
p[10][j]=1;
p[i][10]=1;
cout<<p[i][j]<<" ";}

cout<<endl;}
        return 0;
}
