#include<iostream>
#include<string>

using namespace std;

// Basic swap function for characters
void SwapChar(char &Char1, char &Char2) {

	char temp;
	temp = Char1;
	Char1 = Char2;
	Char2 = temp;
}


int main() {

	string String2Reverse;
	cout << "Type in the string/phrase you want to reverse: ";
	getline(cin, String2Reverse);
	string String2ReverseCopy = String2Reverse;


	int StringLength = String2Reverse.length();

	// Reversal of the string/phrase
	for (int i = 0; i < StringLength / 2; i++) {
		SwapChar(String2Reverse[i], String2Reverse[StringLength - 1 - i]);
	}

	// Different message for string and phrase
	if (String2Reverse.find(' ') == string::npos) {
		cout << "Here is the string reversed: " << String2Reverse << endl;
	}
	else {
		cout << "Here is the phrase reversed: " << String2Reverse << endl << endl;
		
		cout << "Would you like to see a version of phrase reversal, where we reverse words seperately, and keep capitalisation and special characters intact? (Y/N)" << endl;

		string question;
		cin >> question;

		if (question == "Y" || question == "y" || question == "1" || question == "Yes") cout << "Too bad, I have not programmed this yet! ;)" << endl;



	}




	cout << "Thank you, come again!" << endl;

	system("pause");







}
