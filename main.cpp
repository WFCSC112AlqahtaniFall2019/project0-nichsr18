#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int x;
    int y;
    int in1;
    int in2;
    int in3;
    string temp;
    int in4;
    int in5;
    int in6;
    int count = 0;
    cin >> in1;
    cin >> in2;
    cin >> in3;
    getline(cin, temp);
    cin >> in4;
    cin >> in5;
    cin >> in6;

    for (x = -10; x < 11; x++) {
        for (y = -10; y < 11; y++) {
            if (((in1 * x) + (in2 * y) == in3) && ((in4 * x) + (in5 * y) == in6)) {
                cout << x << " ";
                cout << y;
                count = 1;
            }
        }
    }
    if (count != 1) {
        cout << "No Solutions";
    }



    return 0;
}