
#include <iostream>
#include <string>

using namespace std;


void PrintIntro();

int main()


{
	//the entry point
	PrintIntro();
	

	//get a guess from the payer
	cout << "Enter your guess: ";
	string guess = ""; 
	getline(cin, guess);
	

	//repete the guess back to them
	cout << "Your guess was: " << guess << endl;

	//get a guess from the payer
	cout << "Enter your guess: ";
	string guess = "";
	getline(cin, guess);


	//repete the guess back to them
	cout << "Your guess was: " << guess << endl;

	
	cout << endl;


	//pizza
	return 0;
}

void PrintIntro() {

	//intro
	constexpr int WORLD_LENGT = 9;

	cout << "Welcome to Bu11s and Cows";
	cout << "Can you guess the " << WORLD_LENGT;
	cout << " letter I'm thinking of?/n";
	cout << endl;
	return;
}

