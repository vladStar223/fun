#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <algorithm>
#include< iomanip >
using namespace std;
set<char> words = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
set<char> digits = { '1','2','3','4','5','6','7','8','9','0' };
set<char> simvol = { '-','*','+' };
set<char> g_words = { 'a','e','i','o','u','y' };
set<char> s_words = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z' };
set<char> sign_prepinanie = { '!',':',';','.',',','-','_','"','?','(',')'};

//set<char> ruswords = { 'а','б', 'в', 'г' ,'д', 'е', 'ё' ,'ж', 'з', 'и' ,'й' ,'к', 'л', 'м', 'н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я'};

//
const  set<string> MONTHS = { "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
};
bool CheckString(string s) {
    if (MONTHS.count(s) == 1) {
        return true;
    }
    else {
         return false;
    }
}
bool CheckStringDigits(string s) {
    bool anwer = true;
    for (int i = 0; i < s.length(); i++) {
        if ((digits.count(s[i]) == 0)) {

            anwer = false;
            break;
        }

    }
    return anwer;
}
struct Date
{
    const  string MONTHS[12] = {"January", "February", "March", "April", "May", "June",
           "July", "August", "September", "October", "November", "December"
    };
    int day = 0;
    string  month = "ошибка";
    int year = 0;
    string day_to_string() {
        return to_string(day);
    }
    string year_to_string() {
        return to_string(year);
    }
    int month_to_format() {
        auto result = find(begin(MONTHS), end(MONTHS), month);
        if (result == end(MONTHS)) {
            return -1;
        }
        else {
            return (result - begin(MONTHS))+1;
        }
         
    }
};
   int main()
    {
        string data;
        Date date;
        //cout << data << endl;
        // Поток строк примает только строки
        stringstream ss(data);
        bool k = false;
        string word;
        do
        {
            k = false;
            cout << "Hello User" << endl;
            cout << "Input day and months and year" << endl;
            cout << "For example 1 June 2025" << endl;
            getline(cin, data);
            stringstream ss(data);
            ss >> word;// получаем месяц из потока
            if (CheckStringDigits(word)) {
                int x = stoi(word);
                if (x > 0 && x <= 31) {
                    date.day = x;
                }
                else {
                    k = true;
                    cout << "Invalid day" << endl;
                }
            }
            else {
                cout << "Invalid day" << endl;
                k = true;
            }
            ss >> word;// получаем месяц из потока
            if (CheckString(word)) {
                //cout << CheckString(word) << endl;
                if (word == "February" && date.day > 28) {
                    k = true;
                    cout << "There are 28 days in February" << endl;
                }
                date.month = word;
            }
            else {
                cout << "Invalid month" << endl;
                k = true;
            }
            ss >> word; // получаем год из потока 
            if (CheckStringDigits(word) && word.length() == 4) {
                date.year = stoi(word);
            }
            else {
                cout << "Invalid year" << endl;
                k = true;
            }
            if (ss >> word) {
                k = true;
                cout << "Lengt more than 3" << endl;
            }
            ss.clear();// чистим поток
        } while (k);
        cout << date.year << ":" << setfill('0') << setw(2)  << date.month_to_format() << ":" <<setfill('0') << setw(2) << date.day << endl;
        //cout << setfill('0') << setw(2) << 5;
        return 0;

    }
