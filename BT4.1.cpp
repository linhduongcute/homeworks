#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */
// start at the beginning of the book
int countStart(int n) {
    int ret;
    if (n%2==0) {ret = n/2;}
    else if (n%2==1) {ret = (n-1)/2;}
    return ret;
}
// start at the end of the book
int countEnd(int n, int p) {
    int ret;
    ret = (n-p)/2;
    return ret;
}
int pageCount(int n, int p) {
    if (p==1) return 0;
    else if (p==n) return 0;
    else if (n%2==0 && p==n-1) return 1;
    else if (n%2==1 && p==n-1) return 0;
    else {
        int countBeginning = countStart(p);
        int countEnding = countEnd(n,p);
        if (countBeginning <= countEnding) return countBeginning;
        else return countEnding;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
