#include <iostream>

using namespace std;

int main()
{
    char c;

    int isLowercaseVowel, isUppercaseVowel;
    cout << "Enter an Alphabet:";
    cin >> c;
    isLowercaseVowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

        if (isUppercaseVowel||isLowercaseVowel) {
            cout << c << " is a vowel";
        }
        else {
            cout << c << " is a constant";
        }

    return 0;
}