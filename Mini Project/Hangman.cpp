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
    while (remainingTries != 0) {

        cout << "Enter your guess letter:" << endl;
        cin >> guessLetter;

        int guess = isGuessTrue(secretWord, guessWord, guessLetter);

        if (guess == 0) {
            remainingTries--;
            cout << "\nWhoops! that letter is not present in the word" << endl;
            displayMan(remainingTries);
        }
        if (guess == 1) {
            cout << "\nYay! You have found the letter" << endl;
        }
        if (guess == 2) {
            cout << "\nYou have already guessed this letter. Try something else!" << endl;
        }
        cout << "You can have " << remainingTries << " more wrong attempts" << endl;
        cout << "Your guess word is:";
        displayWord(guessWord, secretWordLength);
        cout << endl;

        if (secretWord == guessWord) {
            cout << "\nCongratulation! You won." << endl;
            return 0;
        }

    }
    if (secretWord != guessWord){
    cout << "\nToo many Guesses! You have been hanged." << endl;
    cout << "\nThe secret word was: ";
    displayWord(secretWord, secretWordLength);
    }
}

