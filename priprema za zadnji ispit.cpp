#include <iostream>

using namespace std;

int main()
{
int p[1][50];
int z=0;
for(int i=0;i<1;i++){
    for(int j=0;j<50;j++){
    p[i][j]=rand()%50+1;
    z+=p[i][j];
cout<<p[i][j]<<" ";
    }
}cout<<z<<endl;
    return 0;
}
