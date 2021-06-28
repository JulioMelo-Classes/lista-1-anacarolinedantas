#include "function.h"
using namespace std;

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*blz!*/
std::pair<int,int> min_max( int V[], size_t n )
{
	int menor = V[0], maior = V[0];
	std::pair<int,int> indices = {0, 0};

	if (n == 0) 
		indices = {-1, -1};
	else {
		for (int i = 1; i < n; i++) {
			if (V[i] < menor) {
				menor = V[i];
				indices.first = i;
			}
			if (V[i] >= maior) {
				maior = V[i];
				indices.second = i;
			}		
		}	
	}
    return indices;
}
