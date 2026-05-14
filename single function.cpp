#include <iostream>
using namespace std;

void congratulate(string name) {

    cout << "Congratulations " << name;

}

int main() {

    string name;

    cout << "welcome,Enter your name: ";
    cin >> name;

    congratulate(name);

    return 0;
}
