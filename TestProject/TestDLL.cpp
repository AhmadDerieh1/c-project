#include <iostream>
#include <vector>
#include "ProjectOS2.h"
using namespace std;

int main() {
    vector<int> array = { 3, 1, 4, 1, 5 };
    int size = array.size();

    readInfo(array.data(), size); 
    customSort(array.data(), size);
    display(array.data(), size);
    double avg = computeAvg(array.data(), size);

    cout << "Average: " << avg << endl;

    return 0;
}
