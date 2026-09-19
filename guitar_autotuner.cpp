#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int stringNumber;
    double frequency;

    cout << "=============================\n";
    cout << "       GUITAR AUTOTUNER\n";
    cout << "=============================\n";

    cout << "Выберите струну:\n";
    cout << "1 - 6-я струна (E)\n";
    cout << "2 - 5-я струна (A)\n";
    cout << "3 - 4-я струна (D)\n";
    cout << "4 - 3-я струна (G)\n";
    cout << "5 - 2-я струна (B)\n";
    cout << "6 - 1-я струна (E)\n";

    cout << "\nВведите номер струны: ";
    cin >> stringNumber;

    double targetFrequency;
    string note;

    switch (stringNumber) {
        case 1:
            note = "E";
            targetFrequency = 82.41;
            break;

        case 2:
            note = "A";
            targetFrequency = 110.00;
            break;

        case 3:
            note = "D";
            targetFrequency = 146.83;
            break;

        case 4:
            note = "G";
            targetFrequency = 196.00;
            break;

        case 5:
            note = "B";
            targetFrequency = 246.94;
            break;

        case 6:
            note = "E";
            targetFrequency = 329.63;
            break;

        default:
            cout << "Ошибка: такой струны нет!\n";
            return 0;
    }

    cout << "\nНужная нота: " << note << endl;
    cout << "Нужная частота: " << targetFrequency << " Hz\n";

    cout << "\nВведите измеренную частоту струны: ";
    cin >> frequency;

    double difference = frequency - targetFrequency;

    cout << "\n-----------------------------\n";

    if (abs(difference) < 1.0) {
        cout << "СТРУНА НАСТРОЕНА!\n";
    }
    else if (difference < 0) {
        cout << "Нужно НАТЯНУТЬ струну.\n";
        cout << "Частота ниже нормы на "
             << abs(difference) << " Hz.\n";
    }
    else {
        cout << "Нужно ОСЛАБИТЬ струну.\n";
        cout << "Частота выше нормы на "
             << difference << " Hz.\n";
    }

    cout << "-----------------------------\n";

    return 0;
}
