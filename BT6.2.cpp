#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string convert(int a)
{
    string s;
    s=to_string(a);
    return s;
}
class Student
{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int _age)
        {
            age = _age;
        }
        void set_standard( int _standard)
        {
            standard = _standard;
        }
        void set_first_name( string _first_name)
        {
            first_name = _first_name;
        }
        void set_last_name(string _last_name)
        {
            last_name = _last_name;
        }
        int get_age()
        {
            return age;
        }
        int get_standard()
        {
            return standard;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        string to_string()
        {
            string s;
            s = convert(age) + "," + first_name + "," + last_name +","+ convert(standard);
            return s;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
