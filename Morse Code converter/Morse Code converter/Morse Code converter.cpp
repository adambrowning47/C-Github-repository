// Morse Code converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

string translate(string word)
{
	string morseCode[] = { ".-", "-...", "-.-.", "-..", ".", "..-.",
		"--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
		".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
		"-.--", "--.." };
	char ch;
	string morseWord = "";

	for (unsigned int i = 0; i < word.length(); i++)
	{
		if (isalpha(word[i]))
		{
			ch = word[i];
			ch = toupper(ch);
			morseWord += morseCode[ch - 'A'];
			morseWord += " ";
		}
	}
	return morseWord;
}

int main()
{
	stringstream ss;
	string sentence;
	string word = "";

	cout << "English: ";
	getline(cin, sentence);
	ss << sentence;
	cout << "Morse: ";

	while (ss >> word)
		cout << translate(word) << endl;

	return 0;
}