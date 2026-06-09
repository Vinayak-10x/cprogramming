#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    // Method 1: Normal 2D array (Stack)
    int A[4][3] = {{1,2,3},{2,4,6},{3,6,9},{4,8,12}};
    
    cout << "Array A:" << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] << " ";
        }
        cout << endl; // newline after each row
    }

    // Method 2: Array of Pointers (Partial Heap)
    int *B[4];
    B[0] = new int[3];
    B[1] = (int*)malloc(3*sizeof(int));
    B[2] = (int*)malloc(3*sizeof(int));
    B[3] = (int*)malloc(3*sizeof(int));

    // Initialize values
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++)
            B[i][j] = A[i][j]; // copying A's values

    cout << "\nArray B:" << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    // 3rd Method: Double Pointer (Fully in Heap)
    int **C;

    // Allocate memory for row pointers
    C = (int **)malloc(4 * sizeof(int *));

    //  Allocate memory for each row
    C[0] = (int *)malloc(3 * sizeof(int));
    C[1] = (int *)malloc(3 * sizeof(int));
    C[2] = (int *)malloc(3 * sizeof(int));
    C[3] = (int *)malloc(3 * sizeof(int));

    //  Assign values
    int val = 1;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = val++;

    // Step 4: Print values
    cout << "\nArray C:" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


   


    //Free memory
    delete[] B[0];
    free(B[1]);
    free(B[2]);
    free(B[3]);


    free(C[0]);
    free(C[1]);
    free(C[2]);
    free(C[3]);
    free(C);   // free the pointer array last because method 3 is using double pointer

    return 0;
}