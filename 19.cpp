
// цілий Визначити найменший елемент матриці

#include <iostream>
using namespace std;

int function(int a[6][4]) {
    int min = 99999;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    return min;
}

int main(){

    int a[6][4],i,j;

    for(i=0; i<6; i++)
    for(j=0; j<4; j++)
  
    { cout<<"Enter element "<<i+1<<" string " <<j+1<<" column : ";
  
      cin>>a[i][j];}

      cout << "Matrix:\n";

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            cout << a[i][j] << "\t";
        }

        cout << endl;
    }
         int min = function(a);

        cout << "\nMinimum element on the matrix: " << min << endl;

return 0;
}
