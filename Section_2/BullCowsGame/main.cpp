#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// the enetry point of our application
int main()
{
	PrintIntro();

	//loop for the turns asking for guess
	constexpr int NUBMER_OF_TURNS = 5;
for (int count = 1; count <= NUBMER_OF_TURNS; count++)
{
	GetGuessAndPrintBack();
	cout << endl;
}

	cout << endl;

	//pizza
	return 0;
}

//introduse the game 
void PrintIntro() {
	constexpr int WORLD_LENGTH = 9;
	cout << "Welcone to Bulls and Cows";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " Letter isogram I'm thinking of \n";
	cout << endl;
	return;
}


string GetGuessAndPrintBack() 
{
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//print the guess back
	cout << "You quess wa: " << Guess << endl;
	return Guess;
}