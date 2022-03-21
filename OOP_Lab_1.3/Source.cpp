#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main() {
    Vector3D l, r, t;
    l.Read();
    l.Display();
    r.Read();
    r.Display();

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int no;
    do {
        cout << "¬ибер≥ть д≥ю:" << endl;
        cout << "[1] - додаванн€ вектор≥в" << endl;
        cout << "[2] - в≥дн≥манн€ вектор≥в" << endl;
        cout << "[3] - скал€рний добуток вектор≥в" << endl;
        cout << "[0] - завершити виведенн€" << endl;
        cout << "¬вед≥ть значенн€: "; cin >> no;
        cout << endl;

        switch (no)
        {
        case 1:
            t = SumOfVectors(l, r);
            cout << "a + b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")";
            break;
        case 2:
            t = RiznOfVectors(l, r);
            cout << "a - b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")";
            break;
        case 3: 
            cout << "a * b = " << DobOfVectors(l, r);
            break;
        }
        cout << endl;
    } while (no != 0);

}