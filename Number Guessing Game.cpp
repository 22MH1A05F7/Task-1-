#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int secretnumber, guess;
	secretnumber = rand() % 100 + 1;
	cout << "<<---Welcome to the 🤔  guess 💡 a number game.🤔  Guess a number from 1 to 💯 !-->>\n\n";
        int attempts=0;
	do
	{
		cout << "Enter a guess between 1️ and 100 :➡️  ";
		cin >> guess;
		attempts++;

		if (guess > secretnumber)
			cout << "<<---Too high! Try Again!--->>\n\n";
		else if (guess < secretnumber)
			cout << "<<---Too low! Try Again!--->>\n\n";
		else
			cout << "\n<<---🎊 🎊  Congratulation  🎉 🎉! You got correct guesses!--->\n";
	} while (guess != secretnumber);

	return 0;
}
