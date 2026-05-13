#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    vector<string> names = {"Omer", "Ken", "Mustfa", "Amro", "Santino"};
    vector<int> ages = {20, 22, 19, 21, 23};

    int n = names.size();


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
                swap(ages[j], ages[j + 1]);
            }
        }
    }


    string searchKey;
    cout << "Enter a name to search for: ";
    cin >> searchKey;


    int low = 0, high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (names[mid] == searchKey) {
            foundIndex = mid;
            break;
        }
        if (names[mid] < searchKey) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }


    if (foundIndex != -1) {
        cout << "Member found: " << names[foundIndex] << " is aged " << ages[foundIndex] << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
