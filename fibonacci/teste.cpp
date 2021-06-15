#include <iostream>
#include "src/function.h"

using namespace std;

int main() {
	std::vector<unsigned int> fib = fib_below_n(15);
	for (int i = 0; i < fib.size(); i++) {
		cout<<"v["<<i<<"]="<<fib[i]<<endl;
	}
}