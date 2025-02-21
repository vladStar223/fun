#include <iostream>
#include <string>
#include <set>
using namespace std;
set<char> words = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
set<char> digits = { '1','2','3','4','5','6','7','8','9','0' };
set<char> simvol = { '-','*','+' };
int coin(string s) {

    int coin = 0;
    for (int i = 0; i < s.length(); i++) {
        if (digits.count(s[i]) > 0) {
            coin = coin + 1;
        }
        if (simvol.count(s[i]) > 0) {
            coin = coin + 1;
        }
    }
    return coin;
}
int main()
{
    string s;
    bool k = false;
    do {
        cout << "Hello user" << endl;
        cout << "Input S" << endl;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (words.count(s[i]) == 0 && simvol.count(s[i]) == 0 && digits.count(s[i]) == 0) {
                k = true;
                cout << "Simvols are not good" << endl;
                break;
            }
        }
    } while (k);
    cout << "Answer" << endl;
    cout << coin(s) << endl;
}


