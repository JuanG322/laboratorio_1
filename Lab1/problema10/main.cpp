#include <iostream>
using namespace std;

bool primo(int n){
    bool condicion;
    if(n!= 1 && n != 0){

        for(int i = 2;i<=n;i++){
            if(n % i == 0){
                if(n == i){
                    condicion = true;
                }
                else{
                    condicion = false;
                    return condicion;
                }

            }

        }
    }
    else{
        condicion = false;

    }

    return condicion;
}

int main(){
    int n,var,var1=0;
    n = 2147483640;

    cout<<"Ingrese el numero N: "<<endl;cin>>var;

    for(int i = 1;i<=n;i++){

        if(primo(i)){
            var1 = var1+1;
            if(var1 == var){
                cout<<"El primo numero "<<var<<" es "<<i<<endl;
                return 0;
            }
        }
    }
}
