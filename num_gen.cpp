#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"Rus");
    char ch;
    cout << "начать? (y/n)\n";
    cin >> ch;

    if (ch == 'y')
    {   
        string chouse1;
        cout << "\n1 - по диапозону\n2 - случайное\n";
        cin >> chouse1;
        while(chouse1 != "1" or chouse1 != "2")
        {
            if(chouse1 == "1" or chouse1 == "2"){
                break;
            }
            cout << "только 1 или 2\n";
            cin >>chouse1;
        }
        
        int intchouse1 = stoi(chouse1);
        
        switch(intchouse1)
        {
        case 1:
            //int diapozon;
            // cout << "введите диапозон";
            // cin >> diapozon;
            
            cout << "первый кейс";
            break;
        case 2:
        cout << "второй кейс";
        default:
        
            break;
        }
        

    }
    else
    {
        cout << "you\'re out";
        exit;
    }
    return 0;
}