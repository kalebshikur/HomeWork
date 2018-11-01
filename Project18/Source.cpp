
#include<iostream>
using namespace std;
void reversePhrase(char phrase[100]);
bool checker(char phrase[100]);
int main() {
	// store the string to be tested
	char phrase[100];
	cout << "Enter the phrases: " << endl;
	cin.getline(phrase, 100);
	// check the value of the checker function and display the apropriate string
	if (checker(phrase) == 1)
	{
		cout << "The phrase is palindrome" << endl;
	}
	else
	cout << "The phrase is not palindrome" << endl;
	// display the reversed string
	reversePhrase(phrase);
	system("pause");
}
// The function reverses the string and display the reversed version
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
// check weather the phrase is a palindrome and return a bool value
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