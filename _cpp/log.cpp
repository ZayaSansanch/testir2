#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

#include "main.h"

void Log(string textlog) {
    std::ofstream log("_logs/log.log", std::ios::app);
    if (log.is_open()) {
        time_t seconds = time(NULL);
        tm* timeinfo = localtime(&seconds);
        log << asctime(timeinfo) << textlog << std::endl << endl;
        // system("python3 _cpp/telegramm.py test");
    }
    log.close();
}