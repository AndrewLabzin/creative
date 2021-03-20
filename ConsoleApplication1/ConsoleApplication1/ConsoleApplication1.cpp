#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int count;
    int element;
    int g = 0;
    bool what = true;
    cin >> count;
    int* massive = new int[count];
    int* massive2 = new int[count];

    for (int i = 0; i < count; i++) {
        cin >> element;
        massive[i] = element;
    }

    for (int i = 0; i < count; i++) {
        if (i < (count - 1)) {
            for (int k = i + 1; k < count; k++) {
                if (massive[i] <= massive[k]) {
                    what = false;
                    break;
                }
                else {
                    what = true;
                }
            }
            if (what == true) {
                massive2[g] = massive[i];
                g++;
            }
        }
        else {
            massive2[g] = massive[i];
        }
    }

    for (int i = 0; i <= g; i++) {
        cout << massive2[i] << " ";
    }
}