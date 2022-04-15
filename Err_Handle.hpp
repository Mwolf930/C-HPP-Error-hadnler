#include <iostream>
#include <string>

using namespace std;


struct err_name {
    string info; // Lowest level, info
    string info1;
    string info2;
    string info3;
    string alert; // basicly info level but different idk why I added this
    string alert1;
    string alert2;
    string alert3;
    string warning; // Mid level, warning
    string warning1;
    string warning2;
    string warning3;
    string error; // 2nd to highest level, error
    string error1;
    string error2;
    string error3;
    string critical; // WTF is happening what did you screw up so bad
    string critical1;
    string critical2;
    string critical3; // you hopefully shouln't need more than 1 critical :crossed_fingers:
} err_name;


void critical0() {
    cout << "CRIT:" << err_name.critical; // crit, including assigned def
}
void error0() {
    cout << "ERR:" << err_name.error; // error, including assigned def
}
void warning0() {
    cout << "WARNING:" << err_name.warning; // warning, including assigned def
}
void alert0() {
    cout << "ALERT:" << err_name.alert; // alert, including assigned def
}
void info0() {
    cout << "INFO:" << err_name.info; // info, including assigned def
}

