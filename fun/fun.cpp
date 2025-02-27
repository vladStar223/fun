#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <algorithm>
#include< iomanip >
#include <fstream>
using namespace std;
set<char> words = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
set<char> digits = { '1','2','3','4','5','6','7','8','9','0' };
set<char> simvol = { '-','*','+' };
set<char> g_words = { 'a','e','i','o','u','y' };
set<char> s_words = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z' };
set<char> sign_prepinanie = { '!',':',';','.',',','-','_','"','?','(',')'};

//set<char> ruswords = { 'а','б', 'в', 'г' ,'д', 'е', 'ё' ,'ж', 'з', 'и' ,'й' ,'к', 'л', 'м', 'н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я'};


struct Direction
{
    string where_from;
    string where_to_go;

};
struct Departure
{
    string date;
    string time;
};
struct Arrival {
    string date;
    string time;
};
enum class FlightStatus {boarding_passengers,on_the_way,arrived,delayed,cancelled};
struct AirАlight
{
    string route_number;
    Direction direction;
    string company_name;
    string flight_status;
    Departure departure;
    Arrival arrival;

};
void search_where_to_go(AirАlight air[150],string s) {
    for (int i = 0; i < 150; i++) {
        
        if (air[i].direction.where_to_go == s) {
            cout << air[i].route_number << endl;
            cout << air[i].direction.where_to_go << endl;
        }
    }

}
   int main()
    {
       cout << "Checking file availability" << endl;
        string line;
        string word;
        AirАlight air_alight[150];
       ifstream in("data.txt"); // окрываем файл для чтения
      
       if (in.is_open())
       {
           cout << "The file is open"<< endl;
           cout << "Processing begins" << endl;
           int i = 0;
           while (getline(in, line))
           {
               stringstream ss(line);
               ss >> air_alight[i].route_number;
               //cout << air_alight[0].route_number << endl;
               ss >> air_alight[i].direction.where_from;
               ss >> air_alight[i].direction.where_to_go;
               ss >> air_alight[i].company_name;
               ss >> air_alight[i].flight_status;
               ss >> air_alight[i].departure.date;
               ss >> air_alight[i].departure.time;
               ss >> air_alight[i].arrival.date;
               ss >> air_alight[i].arrival.time;
               ss.clear();
               //cout << air_alight[5].direction.where_to_go << endl;
               i = i + 1;
               

           }

       }
       else {
           cout << "Error in opening the file" << endl;
       }
       cout << "Processing ends" << endl;
       search_where_to_go(air_alight, "Moscow");
       in.close();     // закрываем файл


    }
