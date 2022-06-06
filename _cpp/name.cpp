#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

#include "main.h"

string Name() {
    string name;
    string pass = "3D?g", PassCin, kirrilPass = "break";
    bool whille = false;

    while (whille == false) {
        cout << "Your name?" << endl;
        cin >> name;
        cout << "" << endl;

        while (name == "test" || name == "testnorm") {
            Log("Attempt authorization for name: " + name);
            cout << "Password?" << endl;
            cin >> PassCin;
            cout << "" << endl;

            if (PassCin == pass) {
                return name;
                whille = true;
            } else {
                Log("No valid password for name: " + name + ", password: " + PassCin);
                cout << "Киррил, не ломай программе жизнь, введи нармальное имя). Ваше имя?" << endl;
                cin >> name;
                cout << "" << endl;
            }
        }

        while (name.find(',') != std::string::npos) {
            Log("No valid name: " + name + ", name has `,`: " + PassCin);
            cout << "Киррил, не балуйся, введи имя без ','). Ваше имя?"  << endl;
            cin >> name;
            cout << "" << endl;

            while (name == "test" || name == "testnorm") {
                Log("Attempt authorization for name: " + name);
                cout << "Password?" << endl;
                cin >> PassCin;
                cout << "" << endl;
                if (PassCin == pass) {
                    return name;
                    whille = true;
                } else {
                    Log("No valid password for name: " + name + ", password: " + PassCin);
                    cout << "Киррил, не ломай программе жизнь, введи нармальное имя). Ваше имя?" << endl;
                    cin >> name;
                    cout << "" << endl;
                }
            }
            whille = true;
        }
        whille = true;
    }
    return name;
}