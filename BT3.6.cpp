#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

char converta_z(char a, int k) {
    int v = k%26;
    char table[26*2];
    for (int i=0; i<26; i++) {
        table[i] = char(97+i);
        table[i+26]= char(97+i);
    }
    for (int i=0; i<26; i++) {
        if (table[i]==a) return table[i+v];
    }
    return ' ';
}
char convertA_Z(char a, int k) {
    int v = k%26;
    char table[26*2];
    for (int i=0; i<26; i++) {
        table[i] = char(65+i);
        table[i+26]= char(65+i);
    }
    for (int i=0; i<26; i++) {
        if (table[i]==a) return table[i+v];
    }
    return ' ';
}
char convert0_9(char a, int k) {
    int v = k % 10;
    char table[10*2];
    for (int i=0; i<10; i++) {
        table[i] = char(48+i);
        table[i+10]= char(48+i);
    }
    for (int i=0; i<10; i++) {
        if (table[i]==a) return table[i+v];
    }
    return ' ';
}
string caesarCipher(string s, int k) {
    int len = s.length();
    for (int i=0; i<len; i++) {
        if (s[i]>='a' && s[i]<='z') s[i]=converta_z(s[i],k);
        else if (s[i]>='A' && s[i]<='Z') s[i]=convertA_Z(s[i], k);
     //   else if (s[i]>='0' && s[i]<='9') s[i]=convert0_9(s[i], k);
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

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
