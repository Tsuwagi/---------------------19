
// 3´4 дійсний Обчислити вектор як суми елементів стовпців матриці, абсолютне значення яких не перевищує 10 

#include <iostream>
#include <cmath>
using namespace std;

void function(double matrix[3][4], double columnSums[4]) {

    for (int j = 0; j < 4; j++) {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            if (abs(matrix[i][j]) <= 10) {
                sum += matrix[i][j];  
            }
        }
        columnSums[j] = sum;
    }
}



int main() {
    double matrix[3][4];
    double columnSums[4] = {0, 0, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<"Enter element "<<i+1<<" string " <<j+1<<" column : ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    function(matrix, columnSums);

    cout << "\nVector of sums: ";
    for (int j = 0; j < 4; j++) {
    cout << columnSums[j] << " ";
}
    cout << endl;

    return 0;
}
