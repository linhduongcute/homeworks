#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, temp;
    cin >> n;
    vector<int> v;
    int i=0;
    while (i<n)
    {
        cin >> temp;
        v.push_back(temp);
        i++;
    }
    sort(v.begin(),v.end());
    i=0;
    while (i<n)
    {
        cout << v[i] << " ";
        i++;
    }
    return 0;
}
