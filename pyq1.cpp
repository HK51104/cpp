#include <iostream>
using namespace std;

int main() {
    int num = -1;
    if (num < 0) {
        cout << "Error: Negative number is not allowed!" << endl;
        cerr << "Error: Negative number is not allowed! " << endl;
    }
    return 0;
}
