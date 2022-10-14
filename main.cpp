#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream fh;
    fh.open("students.txt");
    if (!fh) {
        cerr << "unable to open file\n";
        return 1;
    }
    string name;
    int grade1, grade2;
    while (fh >> name >> grade1 >> grade2) {
        if ((grade1 + grade2) / 2. > 80.) {
            cout << name << endl;
        }
    }
    return 0;
}
