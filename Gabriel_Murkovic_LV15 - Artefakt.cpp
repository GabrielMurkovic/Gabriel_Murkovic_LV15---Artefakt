#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int ponude[10];

    for (int i = 0; i < N; i++) {
        cin >> ponude[i];
    }

    int najmanjaPonuda = 101;

    for (int i = 0; i < N; i++) {
        bool jedinstvena = true;
        for (int j = 0; j < N; j++) {
            if (i != j && ponude[i] == ponude[j]) {
                jedinstvena = false;
                break;
            }
        }

        if (jedinstvena && ponude[i] < najmanjaPonuda) {
            najmanjaPonuda = ponude[i];
        }
    }

    if (najmanjaPonuda == 101) {
        cout << 0 << endl;
    }
    else {
        cout << najmanjaPonuda << endl;
    }

    return 0;
}
