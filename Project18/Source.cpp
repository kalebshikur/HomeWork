
#include<iostream>
using namespace std;
void reversePhrase(char phrase[100]);
bool checker(char phrase[100]);
int main() {
	char phrase[100];
	cout << "Enter the phrases: " << endl;
	cin.getline(phrase, 100);
	if (checker(phrase) == 1)
	{
		cout << "The phrase is palindrome" << endl;
	}
	else
	cout << "The phrase is not palindrome" << endl;
	reversePhrase(phrase);
	system("pause");
}

void reversePhrase(char phrase[100]) {
	int i, j;
	char temp;
	j = strlen(phrase) - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = phrase[i];
		phrase[i] = phrase[j];
		phrase[j] = temp;
	}
	cout << phrase << endl;
}

bool checker(char phrase[100]) {
	bool test = true;
	int i, j;
	j = strlen(phrase) - 1;
	for (i = 0; i < j; i++, j--)
	{
		if (phrase[i] != phrase[j]) {
			test = !test;
			break;
		}
	}
	return test;
}