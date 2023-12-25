#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"Rus");
    // cout << "начать? (y/n)";
    // char CHOUSE1;
    // cin >> CHOUSE1;
    // if(CHOUSE1 == "y")
    char ch;
    cout << "начать?\n";
    cin >> ch;

        if (ch == 'y')
    {   
        cout << "you press \"y\"\n";
    }
    else
    {
        exit;
        //cout << "you press \"n\"\n";
    }
    return 0;
}