#include "Err_Handle.hpp"
#include <iostream>
using namespace std;

int main() {
    err_name.warning = "You screwed up and entered a number that isnt 2 didn't you?";
    err_name.info = "Yay! you entered 2!";
    int x;
    cout << "input a number, IT NEEDS TO BE 2";
    cin >> x;
    if (x == 2) {
        info0();
    }

    else {
        warning0();
    }
}