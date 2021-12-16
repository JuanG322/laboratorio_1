#include <iostream>
using namespace std;

int main()
{
    int a,a1,b,b1,c,i,i2;

    cout << "Escriba los 3 numeros: ";
    cin>>a>>c;

    for(i=1;i<=c;i = i*a){
        a = a*i;
        a1 = a1+a;
        cout<<a<<"si"<<endl;


        /*for(i2=1;i2<=c;i2 = i2 * b){
            b = b*i;
            b1 = b1+b;
            cout<<b<<"sis"<<endl;
        }*/


    }
    cout<<a1<<endl;



    return 0;
}
