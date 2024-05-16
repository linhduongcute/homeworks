#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
    
    Student()
    {
        int _age;
        string _first_name;
        string _last_name;
        int _standard;
    }
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
