#include <iostream>
#include <fstream>

using namespace std;

#include "main.h"

void write(string name, string var, int res, string otv1, string otv2, string otv3, string otv4) {
// normal:
    if (name != "test" && name != "testnorm") {
        std::ofstream OutResult("result.txt", std::ios::app);
        if (OutResult.is_open()) {
            OutResult << "Name: " << name << ", test: " << var << ", result: " << res << ", otvs: " << otv1 << ", " << otv2 << ", " << otv3 << ", " << otv4 << std::endl;
        }
        OutResult.close();

        std::ofstream OutSistem("ressistem.txt", std::ios::app);
        if (OutSistem.is_open()) {
            OutSistem << var << "," << otv1 << "," << otv2 << "," << otv3 << "," << otv4 << std::endl;
        }
        OutSistem.close();
    }

// test:
    if (name == "test" || name == "testnorm") {
        std::ofstream OutResult("TestResult.txt", std::ios::app);
        if (OutResult.is_open()) {
            OutResult << "Name: " << name << ", test: " << var << ", result: " << res << ", otvs: " << otv1 << ", " << otv2 << ", " << otv3 << ", " << otv4 << std::endl;
        }
        OutResult.close();

        std::ofstream OutSistem("TestRessistem.txt", std::ios::app);
        if (OutSistem.is_open()) {
            OutSistem << var << "^" << otv1 << "^" << otv2 << "^" << otv3 << "^" << otv4 << std::endl;
        }
        OutSistem.close();
    }
}

void test1(string name, string var) {
    int res = 0;
    string otv1, otv2, otv3, otv4;

    if (name != "test") {
        cout << endl << "1. Заися ..." << endl;
        cout << "A: Сусаныч         B: Сасаныч          C: Сунсаныч         D: Сансаныч" << endl;
        cin >> otv1;
        if (otv1 == "d" || otv1 == "D") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, Сансаныч" << endl;
        }

        cout << endl << "2. Какая игрушка есть у заи?" << endl;
        cout << "A: Пантера         B: Панда        C: Коала        D: Геккончик" << endl;
        cin >> otv2;
        if (otv2 == "c" || otv2 == "C") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, Коала" << endl;
        }

        cout << endl << "3. Придагается ..." << endl;
        cout << "A: Петух         B: Панда       C: Дедушка        D: Зая" << endl;
        cin >> otv3;
        if (otv3 == "a" || otv3 == "A") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, Петух" << endl;
        }

        cout << endl << "4. Зая ... когда я говорю с заей по видео-связи" << endl;
        cout << "A: Лает         B: Крутит головой          C: Пикает        D: Вырывается из рук" << endl;
        cin >> otv4;
        if (otv4 == "b" || otv4 == "B") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, Крутит головой" << endl;
        }

        cout << "Вы набрали " << res << "/4 " << "очков!" << endl;
    } else if (name == "test") {
        otv1 = 'd';
        otv2 = 'c';
        otv3 = 'a';
        otv4 = 'b';
        res = 4;
    }

    write(name, var, res, otv1, otv2, otv3, otv4);
}

void test2(string name, string var) {
    int res = 0;
    string otv1, otv2, otv3, otv4;

    if (name != "test") {
        cout << endl << "1. Теорема Пифагора ..." << endl;
        cout << "A: E = Mc²         B: C² = A² + B²          C: C² = A² - B²         D: A² = C² + B²" << endl;
        cin >> otv1;
        if (otv1 == "b" || otv1 == "B") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, C² = A² + B²" << endl;
        }

        cout << endl << "2. Теорема синусов ..." << endl;
        cout << "A: sin(alpha)/a = 2R         B: cos(beta)/sin(beta) = 2R        C: a/sin(beta) = 2R        D: a/sin(alpha) = 2R" << endl;
        cin >> otv2;
        if (otv2 == "d" || otv2 == "D") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, a/sin(alpha) = 2R" << endl;
        }

        cout << endl << "3. E = ..." << endl;
        cout << "A: (mc)²         B: 2^cm       C: mc²        D: mc^3" << endl;
        cin >> otv3;
        if (otv3 == "c" || otv3 == "C") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, mc²" << endl;
        }

        cout << endl << "0 =" << endl;
        cout << "A: e^iπ         B: e^iπ + 1          C: iπ^e        D: iπ² + 1" << endl;
        cin >> otv4;
        if (otv4 == "b" || otv4 == "B") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, e^iπ + 1" << endl;
        }

        cout << "Вы набрали " << res << "/4 " << "очков!" << endl;
    } else if (name == "test") {
        otv1 = 'd';
        otv2 = 'c';
        otv3 = 'a';
        otv4 = 'b';
        res = 4;
    }

    write(name, var, res, otv1, otv2, otv3, otv4);
}

void test3(string name, string var) {
    int res = 0;
    string otv1, otv2, otv3, otv4;

    if (name != "test") {
        cout << endl << "1. Глаза гекконов в ... раз(a) более чувствительны к свету, чем глаза человека" << endl;
        cout << "A: 3         B: 1000          C: 350         D: 500" << endl;
        cin >> otv1;
        if (otv1 == "c" || otv1 == "C") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, в 350 раз" << endl;
        }

        cout << endl << "2. Гекконы могут издавать различные звуки для общения, включая ..." << endl;
        cout << "A: лай, щебетание и щелчки         B: свист, стук и 'ааа'        C: любые буквы анг. алфавита        D: лай, щебетание и свист" << endl;
        cin >> otv2;
        if (otv2 == "a" || otv2 == "A") {
            res += 1;
            cout << "Верно" << endl;
        } else {
            cout << "Неверно, Гекконы могут издавать различные звуки для общения, включая лай, щебетание и щелчки" << endl;
        }

        cout << endl << "У некоторых видов гекконов нет" << endl;
        cout << "A: глаз         B: лап       C: попы        D: чешуи" << endl;
        cin >> otv3;
        if (otv3 == "b" || otv3 == "B") {
            res += 1;
            cout << "Верно, и они больше похожи на змей" << endl;
        } else {
            cout << "Не верно, у них нет лап и они больше похожи на змей" << endl;
        }

        cout << endl << "Гекконы используют свои хвосты для ..." << endl;
        cout << "A: танцевания         B: переноски еды          C: зацепления им за ветки        D: хранения жира и питательных веществ" << endl;
        cin >> otv4;
        if (otv4 == "d" || otv4 == "D") {
            res += 1;
            cout << "Верно, для хранения жира и питательных веществ на время голодания" << endl;
        } else {
            cout << "Не верно, для хранения жира и питательных веществ на время голодания" << endl;
        }

        cout << "Вы набрали " << res << "/4 " << "очков!" << endl;
    } else if (name == "test") {
        otv1 = 'c';
        otv2 = 'a';
        otv3 = 'b';
        otv4 = 'd';
        res = 4;
    }

    write(name, var, res, otv1, otv2, otv3, otv4);
}