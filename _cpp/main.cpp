#include <iostream>
using namespace std;

#include "main.h"

int main() {
    // Log("test");
    Log("----------");
    // Log("Cpp: start{main.cpp}");
    Hello();
    string name = Name();
    Log("Authorization: " + name);
    system("go run _golang/main.go");
}