#include<iostream>
using namespace std;

int wordsCounter(char sentence[]) {
	int size = strlen(sentence);
	int counter = 1;
	for (int i = 0; i < size; i++) {
		if (sentence[i] == ' ') {
			counter++;
		}
	}
	return counter;
}

int main() {

	char sentence[100];
	cin >> sentence;
	cout << wordsCounter(sentence) << endl;

	return 0;
}