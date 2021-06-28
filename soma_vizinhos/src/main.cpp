/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

/*blz!*/
int main( void )
{
    int m, n, soma, x;
	while( cin >> std::ws >> m >> n) {
		soma = m;
		for (int i = 0; i < abs(n)-1; i++) {
			if (n > 0)
				soma += ++m;
			else   
				soma += --m;
		}
        cout<<soma<<endl;
	}    
    return 0;
}