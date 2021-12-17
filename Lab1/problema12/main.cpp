#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
    int num,num1=0;
    cout<<"Ingrese el numero: ";cin>>num;
    num1 = num;//se cambia el num
    for(int i=2;num>1;i++){
        while (num%i == 0){
            num /=i;
            if(num == 1){
              cout<<"El mayor factor primo de su numero es "<<i<<endl;
            }
        }
    }


    return 0;
}
