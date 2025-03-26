#include <iostream>
using namespace std;

void swapD(int matrix[4][4]) {
    for (int i = 0; i < 4; i++) {
        swap(matrix[i][i], matrix[i][3 - i]);
    }
}

int main() {
    int matrix[4][4],i,j;

    for(i=0; i<4; i++)
    for(j=0; j<4; j++)
  
    { cout<<"Enter element "<<i+1<<" string " <<j+1<<" column : ";
  
      cin>>matrix[i][j];}

      cout << "\n matrix:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl; 
    }

    swapD(matrix);

    cout << "Matrix after swap:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
