#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1 
#define PAPER 2
#define SCISSORS 3


using namespace std;

int main()
{
    srand ((unsigned int) time(NULL));

    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do
    {
        cout << "Select your throw." << endl;
        cout << "1. Rock"<<endl;
        cout << "2. Paper"  << endl;
        cout << "3. Scissors"<<endl;
        cout << "Selection:" << endl;
        cin >> player_throw;
        cout << endl;

        ai_throw = (rand()% 3)+1;
        if (ai_throw == ROCK)
        {
            /* code */
            cout << "AI throws ROCK."<<endl;
        }
        else if(ai_throw == PAPER)
        {
            cout << "AI throws PAPER."<<endl;
        }

        else if(ai_throw == SCISSORS)
        {
            cout << "AI throws Scissors."<<endl;
        }
        
        draw = false;
        if(player_throw == ai_throw)
        {
            draw = true;
            cout << "Draw! Play Again!"<<endl;
        } else {
            draw =false;
        }
        if (player_throw == ROCK && ai_throw == SCISSORS)
        {
            /* code */
            cout << "ROCK beats SCISSORS! You Win." << endl;
        }
        else if (player_throw == ROCK && ai_throw==PAPER)       
        {
            /* code */
            cout << "PAPER beats ROCK! You LOSE."<<endl;
        }
        else if (player_throw==PAPER && ai_throw==ROCK)
        {
            /* code */
            cout << "PAPER beats ROCK! You WIN."<<endl;
        }
        else if (player_throw==PAPER && ai_throw== SCISSORS )
        {
            /* code */
            cout << "SCISSORS beats PAPER! You LOSE."<<endl;
        }
        else if (player_throw==SCISSORS && ai_throw==PAPER)
        {
            /* code */
            cout << "SCISSORS beat PAPER! You WIN."<<endl;
        }
        else if (player_throw==SCISSORS && ai_throw==ROCK)
        {
            /* code */
            cout << "ROCK beats SCISSORS! You LOSE."<<endl;
        }

        cout << endl;

    } while (draw);
    return 0;
}
