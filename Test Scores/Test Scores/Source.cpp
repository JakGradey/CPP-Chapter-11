#include <iostream>
#include <string>
using namespace std;

int main() {

	double highScore = 0;
	double lowScore = 100;
	double scoreArray[9] = { 0.0 };

	for (int i = 0; i <= size(scoreArray); i++) {

		cout << "Enter a test score >> ";
		cin >> scoreArray[i];

	if (scoreArray[i] >= highScore) {
		highScore = scoreArray[i];
		scoreArray[i]++;
	}
	else if (scoreArray[i] <= lowScore) {
		lowScore = scoreArray[i];
		scoreArray[i]++;
	}	
}
	double totalScoreArray = 0;

	for (int n = 0; n < size(scoreArray); n++)
	{
		totalScoreArray += scoreArray[n];
	}
	double average = totalScoreArray / 10;

	cout << "High score : " << highScore << endl;
	cout << "Low score : " << lowScore << endl;
	cout << "Average : " << average << endl;
	cout << "" << endl;
	cout << 

	system("pause");
	return 0;
}