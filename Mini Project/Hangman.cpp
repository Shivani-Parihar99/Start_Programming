// Hangman Game 
#include<iostream>

#include<cstdlib>

#include<ctime>

#include <string>

using namespace std;

void displayGameDetails(int maxTries);
string chooseSecretWord();
void replaceDashes(char guessWord[], int length);
void displayWord(string word, int length);
int isGuessTrue(string secretWord, char guessWord[], char letter);
void displayMan(int remainingGuess);
int main() {
    int maxTries = 5;
    int remainingTries = 5;
    char guessLetter;
    string secretWord;
    int secretWordLength;

    displayGameDetails(maxTries);
 
    secretWord = chooseSecretWord();
    secretWordLength = secretWord.length();

    char guessWord[secretWordLength];
    replaceDashes(guessWord, secretWordLength);
    cout << "Your guess word is:";
    displayWord(guessWord, secretWordLength);
