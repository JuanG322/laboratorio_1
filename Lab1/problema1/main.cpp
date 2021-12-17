#include <iostream>
using namespace std;

int main(){

    int vt,dif1,dif2,dif3,dif4,dif5,dif6,dif7,dif8,dif9,dif10;
    int b50,b20,b10,b5,b2,b1,m5,m2,m1,m50;

    cout<<"Ingrese el valor total: "<<endl;cin>>vt;

    b50 = vt/50000;
    dif1 = vt -b50*50000;

    b20 = dif1/20000;
    dif2 = dif1-b20*20000;

    b10 = dif2/10000;
    dif3= dif2-b10*10000;

    b5 = dif3/5000;
    dif4 = dif3-b5*5000;

    b2 = dif4/2000;
    dif5 = dif4-b2*2000;

    b1 = dif5/1000;
    dif6 = dif5-b1*1000;

    m5 = dif6/500;
    dif7 = dif6-m5*500;

    m2 = dif7/200;
    dif8 = dif7-m2*200;

    m1 = dif8/100;
    dif9 = dif8-m1*100;

    m50 = dif9/50;
    dif10 = dif9-m50*50;

    cout<<"50000: "<<b50<<endl<<"20000: "<<b20<<endl<<"10000: "<<b10<<endl;
    cout<<"5000: "<<b5<<endl<<"2000: "<<b2<<endl<<"1000: "<<b1<<endl;
    cout<<"500: "<<m5<<endl<<"200: "<<m2<<endl<<"100: "<<m1<<endl<<"50: "<<m50<<endl;
    cout<<"Faltante: "<<dif10;

    return 0;
}

/*
50000
20000
10000
5000
2000
1000
500
200
100
50*/
