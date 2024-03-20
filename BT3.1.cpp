#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >> a >> b;
    long long len_a, len_b;
    len_a = a.size();
    len_b = b.size();
    cout << len_a << " " << len_b << endl;
    cout << a << b << endl;
    char s = a[0];
    char r = b[0];
    b[0]=s; a[0]=r;
    cout << a << " " << b;
    return 0;
}
