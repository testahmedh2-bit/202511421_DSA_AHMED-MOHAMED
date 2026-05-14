#include <iostream>
using namespace std;

float add_numbers(float a,float b,float c,float d) {

    return a + b + c + d;

}

int main() {

    float n1, n2, n3, n4;

    cout << "Enter 4 float numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    cout << "Sum = " << add_numbers(n1, n2, n3, n4);

    return 0;
}
