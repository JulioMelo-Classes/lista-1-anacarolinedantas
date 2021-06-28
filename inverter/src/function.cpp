//#include "function.h"
#include <iterator>
#include <string>
#include <array>

//using std::iter_swap;
using std::string;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 blz, eu tive que adicionar o array nos includes mas está ok
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    for(int i = 0; i < SIZE/2; i++) {
		string aux = arr[i];
		arr[i] = arr[SIZE-i-1];
		arr[SIZE-i-1] = aux;
	}
}
