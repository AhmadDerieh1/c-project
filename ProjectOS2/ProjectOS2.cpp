#include "ProjectOS2.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

extern "C" {
    PROJECTOS2_API void customSort(int* a, const int size) {
        sort(a, a + size);
    }
    PROJECTOS2_API void readInfo(int* a, const int size) {
        cout << "enter " << size << " numbers:";
        cout << endl;
        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }
    }
    PROJECTOS2_API void display(const int* a, const int size) {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " | ";
        }
        cout << endl;
    }
    PROJECTOS2_API double computeAvg(const int* a, const int size) {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += a[i];
        }
        return sum / size;
    }
}

