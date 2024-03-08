#include <iostream>

using namespace std;

int main() {
    int low=1, high=100;
    char con;
    do{
        int guessnum=(low+high)/2;
        cout << guessnum << endl;
        cout << "Is that right?" << endl;
        cin >> condition;
        if (condition=='>') {
        high = guessnum;
        }
        else {
        low = guessnum;
        }
    }while (condition!='=');
    cout << "congratulatuion!";
    return 0;
}
