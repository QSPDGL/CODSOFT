#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void game()
{
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 100 + 1;

    int guess = 0, tries = 0;

    cout << endl
         << "Welcome to the guess the number game" << endl;
    cout << "I have chosen a number between 1 to 100" << endl;
    cout << "Let's see if you can guess it. Good Luck!" << endl;

    while (guess != num)
    {
        cout << endl
             << "Enter your guess : ";
        cin >> guess;

        tries++;

        if (guess > 0 && guess < num)
        {
            cout << "your guess is less than the required number, try again!" << endl;
        }
        else if (guess > num && guess < 101)
        {
            cout << "your guess is greater than the required number, try again!" << endl;
        }
        else if (guess == num)
        {
            cout << "CONGRATS!, you guessed the correct number in " << tries << " tries." << endl;
        }
        else
        {
            cout << "Invalid number, try again!" << endl;
        }
    }
}

int main()
{
    char playagain = 'y';

    do
    {
        game();
        cout << endl
             << "Do you want to play again? (y/n) : ";
        cin >> playagain;
    } while (playagain == 'y' || playagain == 'Y');

    cout << endl
         << "Thank you for playing the game. See you again!" << endl;

    return 0;
}
