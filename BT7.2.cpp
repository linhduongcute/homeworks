#include <iostream>

using namespace std;

int main()
{
    char a[4]={'a','b','c','d'};
    int i=0;
    int count =0;
    while (i<4) {
        for (int j=0; j<4 ; j++) {
            for (int k=0; k<4 ; k++) {
                cout << a[i] << a[j] << a[k] << endl;
                count ++;
            }
        }
    i++;
    }
    cout << count;
}
