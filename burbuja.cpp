#include<iostream>
using namespace std;
void imprimirVector(int ar[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << ar[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(int ar[], int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (ar[j - 1] > ar[j]) {
                int temp = ar[j - 1];
                ar[j - 1] = ar[j];
                ar[j] = temp;
                imprimirVector(ar, tam);
            }
        }
    }
}
