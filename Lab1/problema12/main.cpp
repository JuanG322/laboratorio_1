#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    cout<<"Ingrese el numero: ";cin>>num;

    for(int i=2;num>1;i++){
        while (num%i == 0){
            num /=i;
            if(num == 1){
              cout<<endl<<i;
            }
        }
    }


    return 0;
}
