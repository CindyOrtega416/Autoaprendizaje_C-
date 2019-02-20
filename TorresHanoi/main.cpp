#include <iostream>

using namespace std;

void Hanoi(int disco, int Torre1, int Torre2, int Torre3){
    if(disco == 1){
        //caso base disco=1
        cout<<"Mover disco de torre "<<Torre1<<" a torre "<<Torre3<<endl;

    }
    else{
        //caso recursivo
        Hanoi(disco-1, Torre1, Torre3, Torre2);
        cout<<" Mover disco de torre "<<Torre1<<" a torre "<<Torre3<<endl;
        Hanoi(disco-1, Torre2, Torre1, Torre3);
    }
    }

int main() {
  int Disco=0, Torre1=1 , Torre2=2 , Torre3=3;
  cout<<"Inserte la cantidad de discos con los que desea trabajar: "<<endl;
  cin>>Disco;
   Hanoi(Disco, Torre1, Torre2, Torre3);
    return 0;
}