#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
    /*otimo, sem uso de vetores =)*/
    int cont_neg = 0, entrada;
    for (int i = 0; i < SIZE; i++) {
        cin>>entrada;
        if (entrada < 0)
            cont_neg++;        
    }
    cout<<cont_neg<<endl;

    return 0;
}