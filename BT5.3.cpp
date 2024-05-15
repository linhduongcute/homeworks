#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int temp;
    for (int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int pos;
    int head, tail;
    cin >> pos;
    cin >> head >> tail;
    v.erase(v.begin()+pos-1);
    v.erase(v.begin()+head-1, v.begin()+tail-1);
    int size = n-tail+head-1;
    cout << size << endl;
    for (int i=0; i<size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
