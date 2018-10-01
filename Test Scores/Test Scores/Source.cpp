#include <iostream>
#include <string>
using namespace std;

int main() {

	double average;
	double highScore = 100;
	double lowScore = 0;
	double testScore;
	string result;
	result = "Enter another score ";
	double scoreArray[10] = { 0.0 };

	for (int i = 0; i <= 10; i++) {

		cout << "Enter a test score or 9999 to quit>> ";
		cin >> testScore;

//		if (testScore < 0 || testScore > 100) {
//			cout << result;

			if (testScore >= 0 && testScore <= 100) {
				if (testScore >= highScore) {
					highScore = testScore;
					scoreArray[i] = 
				}
				else if (testScore <= lowScore) {
					lowScore = testScore;
				}
			}
		}

	if (scoreArray[i] >= 0 && scoreArray[i] <= 100) {
		if (scoreArray[i] >= high) {
			high = scoreArray[i];
		}
	}
		system("pause");
		return 0;
	}
//}