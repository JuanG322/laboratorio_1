//necesito agregar exepciones en los if

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,sum,var1 = 0;
    float divi;

    cout<<"Ingrese el primer numero: ";cin>>num1;
    cout<<"Ingrese el segundo numero: ";cin>>num2;

    sum = num1+num2;

    //cout<<sum<<"elsum";
    var1 = 0;

    if (sum % 5 == 0 ){

        if (sum > 2400){
            sum = sum - 2400;
            cout<<"\nnum1\n"<<sum;
        }
    }

    else{
       if (sum>= 60){
           sum = sum + 100 - 20;
           cout <<"\nnum2\n"<< sum;

           if (sum > 2400){
            sum = sum - 2400;
            cout<<"\nnum3\n"<<sum;
        }
       }
    }

    cout<<"\nLa hora es: "<<sum<<endl;
    return 0;
}
