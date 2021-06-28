#include "function.h"

/*blz!*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
	std::vector<unsigned int> fib = {};
	if (n > 1) {
		fib = {1, 1};
		int soma = fib[0] + fib[1];
		while (soma < n) {
			fib.push_back(soma);
			soma = fib[fib.size()-1] + fib[fib.size()-2];
		}
	}
	return fib;
}
