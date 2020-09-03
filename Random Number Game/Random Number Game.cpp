#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
    int num;
    random_device rd;
    num = rd() % 100 + 1;
    
    int guess;
    bool correct = false;
    int guessNum = 0;
    int done;

    cout << "Guess a number between 1 and 100: ";
    while (correct == false) {
        cin >> guess;
        guessNum++;

        if (guess == num) {
            cout << "Correct! Got the answer in " << guessNum << " tries." << endl;
            correct = true;
        }
        else if (guess > num) {
            cout << "Lower" << endl;
        }
        else
        {
            cout << "Higher" << endl;
        }
    }
    cin >> done;
}