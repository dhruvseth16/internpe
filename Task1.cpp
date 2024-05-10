//Make a Guess a Number Game With the help of C++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand ((unsigned int) time(NULL));

    int number = (rand() % 100) + 1;

    int guess = 0;

    int atmpt = 0;
    do
    {
        cout << "Enter Guess (1-100): ";
        cin >> guess;

        if (guess>number)
            cout << "Guess lower!" << endl;
        else if (guess<number)
            cout << "Guess higher!" <<endl;
        else
            cout << "You Won!" <<endl;

        atmpt += 1;


    } while (guess != number);
    cout << "Number of attempts taken : " << atmpt;
}