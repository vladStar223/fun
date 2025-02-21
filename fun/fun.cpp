#include <iostream>
#include <string>
#include <set>
using namespace std;
set<char> words = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
set<char> digits = { '1','2','3','4','5','6','7','8','9','0' };
set<char> simvol = { '-','*','+' };
//set<char> ruswords = { 'а','б', 'в', 'г' ,'д', 'е', 'ё' ,'ж', 'з', 'и' ,'й' ,'к', 'л', 'м', 'н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я'};
bool check(string s) {
     bool check = true;
    for (int i = 0; i < s.length(); i++) {
        if (words.count((s[i]))==0 && i!=0) {
            check = false;
            break;
        }
        if (i == 0) {
            if (toupper(s[i] != s[i])) {
                check = false;
                break;
            }
        }
    }
    return check;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string s1,s2,s3;
     d bool k = false;
    cout << "Hello user" << endl;
    do {
        
        cout << "Input Name" << endl;
        cin >> s1;
        if (check(s1) == true) {
            k = false;
        }
        else {
            cout << "Not good" << endl;
            k = true;
        }
    } while (k);
    k = false;
    cout << "Good" << endl;
    do {

        cout << "Input SurName" << endl;
        cin >> s2;
        if (check(s2) == true) {
            k = false;
        }
        else {
            cout << "Not good" << endl;
            k = true;
        }
    } while (k);
    k = false;
    cout << "Good" << endl;
    do {

        cout << "Input  SecondName" << endl;
        cin >> s3;
        if (check(s3) == true) {
            k = false;
        }
        else {
            cout << "Not good" << endl;
            k = true;
        }
    } while (k);
    cout << "Good" << endl;
}


