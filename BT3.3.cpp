#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string subs= s.substr(8,2);
    string hour= s.substr(0,2);
    if (subs=="AM") {
        if (hour=="12") 
        {
            s.replace(0,2,"00");
            s.erase(8,2);
        } 
         else s.erase(8,2);
    }
    else if (subs=="PM") {
        int begin= stoi(hour);
        if (begin == 12) s.erase(8,2);
        else {
            int hourNumber= begin + 12;
            hour = to_string(hourNumber);
            s.replace(0,2,hour);
            s.erase(8,2);
         }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
