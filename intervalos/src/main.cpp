/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*ok!*/
int main(void)
{
    int x, total = 0, cont[5] = {0};

    while(cin >> std::ws >> x) {
		total++;
        if (x >= 0 && x < 25) 
            cont[0]++;
        else if (x >= 25 && x < 50)
            cont[1]++;
        else if (x >= 50 && x < 75)
            cont[2]++;
        else if (x >= 75 && x < 100)
            cont[3]++;
        else
            cont[4]++;         	 
    }
	
	for (int i = 0; i < 5; i++)
		cout << setprecision(4) << (double)cont[i]*100/total << endl;

    return 0;
}
