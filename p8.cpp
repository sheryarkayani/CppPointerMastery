#include <cstring>
#include<iostream>
using namespace std;

bool func(const char* c1) {

    int size = strlen(c1);

    for (int i = 0; i < size / 2; i++) {
        if (c1[i] != c1[size - i - 1]) {
            return false;  // return false immediately if any pair doesn't match
        }
    }

    return true;  // if the loop completes without returning false, return true

}

int main() {

    const char* c1 = "racecar";
    cout << func(c1) << endl;

    const char* c2 = "rotater";
    cout << func(c2) << endl;

    return 0;
}
