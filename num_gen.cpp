#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"Rus");
    char ch;
    cout << "начать? (y/n)\n";
    cin >> ch;

    if (ch == 'y' or ch == 'yes')
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
            srand(time(0));
            int start_diapozon,end_diapozon;
            cout << "введите начало диапозона\n";
            cin >> start_diapozon;
            cout << "введите конец диапозона\n";
            cin >> end_diapozon;
            
            int randomnum;
            randomnum = rand() % (end_diapozon - start_diapozon + 1) + start_diapozon;
            cout << "число сгенерированно: " << randomnum<< "\n";
            
            
            break;
        case 2:
        int randomnum2;
        randomnum2 = rand();
        cout << "число сгенерированно: " << randomnum2<< "\n";
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