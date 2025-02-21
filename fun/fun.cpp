#include <iostream>
#include <string>
#include <set>
using namespace std;
set<char> words = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
set<char> digits = { '1','2','3','4','5','6','7','8','9','0' };
set<char> simvol = { '-','*','+' };
set<char> g_words = { 'a','e','i','o','u','y' };
set<char> s_words = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z' };
set<char> sign_prepinanie = { '!',':',';','.',',','-','_','"','?','(',')'};

//set<char> ruswords = { 'а','б', 'в', 'г' ,'д', 'е', 'ё' ,'ж', 'з', 'и' ,'й' ,'к', 'л', 'м', 'н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я'};
bool checkDigitWords(string s) {
    bool x = false;
    int w = 0;
    int d = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((words.count((char)tolower(s[i]))) > 0) {
            w = w + 1;
        }
        if (digits.count(s[i]) > 0) {
            d = d + 1;
        }

    }
    return d > w;
}//Функция подсчета условия больше ли числел чем букв
pair<int, int> checkGS(string s) {
    pair<int, int> k;
    k.first = 0;
    k.second = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((g_words.count((char)tolower(s[i]))) > 0) {
            k.first = k.first + 1;
        }
        if ((s_words.count((char)tolower(s[i]))) > 0) {
            k.second = k.second + 1;
        }
    }
    return k;
}//Функция для подсчета количество согласных и гласных букв
string doNewString(string s) {
    string anwer = "";
    for (int i = 0; i < s.length(); i++) {
        if ((((words.count((char)tolower(s[i]))) == 0) && (digits.count(s[i]) == 0))&& (sign_prepinanie.count(s[i]) > 0)){
        
                anwer = anwer + s[i];
            
        }

    }
    return anwer;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "Hello user" << endl;
    bool k = false;
    do
    {
        cout << "Input string" << endl;
        getline(cin, s);
        k = false;
        int w = 0;
        int d = 0;
        int sc = 0;
        for (int i = 0; i < s.length(); i++) {
            w = w + words.count((char)tolower(s[i]));
            d = d + digits.count(s[i]);
            sc = sc + sign_prepinanie.count(s[i]);
            if (!((((words.count((char)tolower(s[i]))) > 0) || (digits.count(s[i]) > 0)) || (sign_prepinanie.count(s[i]) > 0))) {
                k = true;
                cout << "There are invalid characteers" << endl;
                cout << "Check youself" << endl;

                break;
            }
        }
        if (w != 0 && d != 0 && sc != 0) {
            k = false;
            
        }
        else {
            k = true;
            cout << "Words are " << bool(w > 0) << endl;
            cout << "Digits are " << bool(d > 0) << endl;
            cout << "Sign_prepinanie are " << bool(sc > 0) << endl;
            cout << "1 is present" << endl;
            cout << "0 is not present" << endl;

        }
    } while (k);
    pair<int, int> k2 = checkGS( s);
    if (checkDigitWords(s)) {
        cout << "Digits is more" << endl;
    }
    else {
        cout << "Words is more" << endl;
    }
    cout << " Numbers A E i U O Y  " << k2.first<< endl;
    cout << " Consonants is a,b,c,d .. fgz " << k2.second << endl;
    cout << "New String  sign_prepinanie is  " << doNewString(s) << endl;
   
}

