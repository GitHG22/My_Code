#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int merge(int A[], int rA, int B[], int rB, int C[]);
void mergesort(int[], int, int);



void mergesort(int A[], int l, int r) {
    int m = (l + r + 1) / 2, j = 0;
    int L1[100], L2[100];

    for (int i = 0; i<m; i++) {
        L1[i] = A[i];
    }

    for (int i = m; i<r; i++) {
        L2[j] = A[i];
        j++;
    }


    if (m != 1) {
        mergesort(L1, 0, m);
    }

    if (j != 1) {
        mergesort(L2, 0, j);
    }


    int merged[100];
    int k = merge(L1, m, L2, j, merged);


    for (int i = 0; i<k; i++) {
        A[i] = L1[i];
    }


}



int merge(int A[], int rA, int B[], int rB, int C[]) {

    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while ((i<rA) && (j<rB)) {

        if (A[i]<B[j]) {

            C[k++] = A[i++];

        }
        else {
            C[k++] = B[j++];

        }
    }

    while (i<rA) {
        C[k++] = A[i++];
    }

    while (j<rB) {
        C[k++] = B[j++];
    }


    for (i = 0; i<k; i++) {

        A[i] = C[i];
    }



    return k;
}



int main() {
    cout<<"Enter size of array to be inputted : ";
    int l = 0, r;
    cin>>r;
    int A[100];
      cout<<"Enter the elements of array : ";
      for(int i=0; i<r; i++){
        cin>>A[i];
      }

    mergesort(A, l, r);
    cout << endl << endl;
    for (int i = 0; i < r; i++) {
        cout << A[i] << ' ';
    }
}
