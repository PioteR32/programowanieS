// Firstconsoleapplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    using namespace std;
    string login[20];
    string password[20];
    string write_password;
    string write_login;
    int x = 0;
    int h = 0;
    int e = 0;
    while (x != 20) {
        cout << "1 login \n";
        cout << "2 sign up \n";
        cin >> h;
        int p = 0;
        switch (h) {
        case 1:
            cout << "Podaj swój login \n";
            cin >> write_login;

            if (write_login != login[e]) {
                e++;
                if (e == 21) {
                    cout << "podaj poprawny login \n";

                }
                while (write_login != login[e] or p != 6) {
                    cout << "podaj has³o \n";
                    cin >> write_password;
                    if (write_password == password[e]) {
                        cout << " U sing in \n";

                    }

                    if (write_password != password[e]) {
                        cout << " podaj password ponownie";
                        p++;
                        if (p == 6) {

                        }
                    }
                }
            }

            break;

        case 2:
            int ll = 0;
            if (ll == 20) {

                cout << " za ma³o miejsca";
            }
                
                int pp = 0;
                cout << " podaj login";
                cin >> login[ll];
                ll++;
                cout << " podaj password ";
                cin >> password[pp];
                pp++;


        }
    }



        }


    


    
   
   
    









