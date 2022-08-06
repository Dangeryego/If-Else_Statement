#include <iostream>

using namespace std;

int main()
{
    int aliScore {}, walterScore {};
    cout << "Enter Ali's score  ";
    cin  >> aliScore;
    cout << "Enter Walter's score  ";
    cin >> walterScore;

    if (aliScore != walterScore) {
        if (aliScore > walterScore){
        cout << "\nCongrats!! Ali is the winner" << endl;
        }else {cout << "\nCongrats!! Ali is the winner" << endl;
        }
    }else {cout << "It seems to be a Tie between Ali & Walter";
    }

    return 0;
}
