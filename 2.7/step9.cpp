#include <iostream>
#include <cstdlib>

using namespace std;

void swap_min(int **mt, int m, int n) {
    // put your code here

   int min = mt[0][0];
   int tmp_j;
   int min_i = 0;
   int min_j = 0;

   for (int i=0; i!=m; ++i) {
       for (int j=0; j!=n; ++j) {
           if (mt[i][j] < min) {
	       min = mt[i][j];
               min_i = i;
               min_j = j;
           }
       }
   }
 
   //cout << "Min = m[" << min_i << "][" << min_j << "] = " << mt[min_i][min_j] << endl;

   for (int j=0; j!=n; ++j) {
	tmp_j = mt[0][j];
	mt[0][j] = mt[min_i][j];
        mt[min_i][j] = tmp_j;
   }

}

int ** create_array2d(size_t a, size_t b) {

    int ** Arr = new int *[a];
    Arr[0] = new int[a * b];

    for (int i=1; i!=a; ++i) 
        Arr[i] = Arr[i - 1] +b;

    return Arr;
}

void free_array2d(int ** Arr, size_t a, size_t b) {
    delete [] Arr[0];
    delete [] Arr;
}

void print_array2d(int ** Arr, size_t a, size_t b) {

    for (int i=0; i!=a; ++i) {
        for (int j=0; j!=b; ++j) {
             cout << Arr[i][j] << ' ';
        }
    cout << endl;
    }
}

int main() {

    int a = 3;
    int b = 3;

    int ** myarray = create_array2d(a, b);

    //unsigned rand_value = 11;
    //srand(rand_value);
 

    myarray[0][0] = 9;
    myarray[0][1] = 3;
    myarray[0][2] = 5;

    myarray[1][0] = 7;
    myarray[1][1] = 0;
    myarray[1][2] = 3;

    myarray[2][0] = 4;
    myarray[2][1] = 8;
    myarray[2][2] = 6;


/*    for (size_t i=0; i!=3; ++i) {
        for (size_t j=0; j!=3; ++j) {
             myarray[i][j] = rand() % 100;
        }
    } */
    
    print_array2d(myarray, a, b); 
    swap_min(myarray, a, b);
    cout << endl;
    print_array2d(myarray, a, b); 
    free_array2d(myarray, a, b);

    return 0;
}


