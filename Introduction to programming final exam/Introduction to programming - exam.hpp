#pragma once
//Darina Dailova 62583

int stringLength(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}

char *revandreplace(char* str) {
	int size = stringLength(str);
	char* reversedStr = new char[size + 1];
	for (int i = size - 1, k = 0; i >= 0; i--, k++) {
		reversedStr[k] = str[i];
	}
	for (int i = 0; i < size; i++) {
		if (reversedStr[i] == 'e') {
			reversedStr[i] = '!';
		}

		if (reversedStr[i] == 'y') {
			reversedStr[i] = '*';
		}
	}
	reversedStr[size] = '\0';

	return reversedStr;
}

int strLength(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}

bool CheckDate(char str[]) {
	int size = strLength(str);
	if (size != 7) {
		return false;
	}

	if (str[4] != ' ' || str[5] != 'g' || str[6] != '.') {
		return false;
	}
	
	if (str[0] < '0' || str[0] > '9' || str[1] < '0' || str[1] > '9' || str[2] < '0' || str[2] > '9' || str[3] < '0' || str[3] > '9') {
		return false;
	}

	int firstDigit = str[0] - '0';
	int secondDigit = str[1] - '0';
	int thirdDigit = str[2] - '0';
	int fourthDigit = str[3] - '0';
	int year = 0;
	year = firstDigit * 1000 + secondDigit * 100 + thirdDigit * 10 + fourthDigit;
	if (year % 4 == 0) {
		return true;
	}
	return false;
}

int* countletters(int arr1[], int arr2[], int N) {
	int sum = 0;
	int countUpperLetters = 0;
	int countLowerLetters = 0;
	int* result = new int[2];

	for (int i = 0; i < N; i++) {
		sum = arr1[i] + arr2[i];
		if (sum >= 'a' && sum <= 'z') {
			countLowerLetters++;
		}

		if (sum >= 'A' && sum <= 'Z') {
			countUpperLetters++;
		}
	}

	result[0] = countUpperLetters;
	result[1] = countLowerLetters;

	return result;
}