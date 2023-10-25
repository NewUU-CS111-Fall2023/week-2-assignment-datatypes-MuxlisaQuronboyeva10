#ifndef DATA_STRUCTURE_AND_ALGORITHMS_TASK_3_H
#define DATA_STRUCTURE_AND_ALGORITHMS_TASK_3_H
#include <iostream>
using namespace std;

class Dividing {
public:
    void Divider() {
        int A;
        cout << "Enter a number A: " << endl;
        cin >> A;

        srand((unsigned) time(NULL));

        cout << ((rand() % 9000000000) + 1000000000)/(A) << endl;
    }
};
#endif //DATA_STRUCTURE_AND_ALGORITHMS_TASK_3_H
