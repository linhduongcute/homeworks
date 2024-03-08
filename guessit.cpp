#include <iostream>

using namespace std;

void Secretnumber(int a) // ham nhap vao mot so
bool checkcon(int secnum); //ham duyet dieu kien
bool checkNum(int guessNumber, int SecretNumber)  // kiem tra ket qua
int GuessNum(int SecretNum, int GuessNum); //ham duyet ket qua may doan

int main() {
    int secretNum=80;
    // secretNum=Secretnumber;
    // if (checkcon(secretNum)== false) cout << "please give me a number from 1 to 100: ";
    int GuessNumber;
    return 0;
}
void Secretnumber(int a) {
    int SN;
    cout << "please give me a number from 1 to 100:";
    cin >> SN;
}

int guessNum(int Guess, int secret, int Low, int High) {
    if (Guess == secret) return guess;
    else if (Guess > secret) {
        Guess = high;
        low
    }
}
