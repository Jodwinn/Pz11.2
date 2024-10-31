#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int numberStud, numberSub;

    cout << "Кількість студентів: ";
    cin >> numberStud;
    cout << "Кількість предметів: ";
    cin >> numberSub;

    double** marks = new double* [numberStud];

    for (int i = 0; i < numberStud; i++) {
        marks[i] = new double[numberSub];
    }

    for (int i = 0; i < numberStud; i++) {
        cout << "Введіть оцінки для студента " << i + 1 << ":" << endl;
        for (int j = 0; j < numberSub; j++) {
            cout << "Оцінка за предмет " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    for (int i = 0; i < numberStud; i++) {
        double sum = 0;
        for (int j = 0; j < numberSub; j++) {
            sum += marks[i][j];
        }
        double average = sum / numberSub;
        cout << "Середня оцінка студента " << i + 1 << ": " << average << endl;
    }

    for (int i = 0; i < numberStud; i++) {
        delete[] marks[i];
    }
    delete[] marks;

    return 0;
}
