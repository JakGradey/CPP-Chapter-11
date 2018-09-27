#include <iostream>
#include <string> 

using namespace std;

	int main() {

	int valuesArray[7] = { 50, 10 , 5, 25, 30, 15, 20};
	int toad = 0;

	for (int i = 0; i < size(valuesArray); i++)
	{
		cout << valuesArray[i] << endl;
		toad = toad + valuesArray[i];
	}
	cout << toad << endl;

	system("pause");
	return 0;
}