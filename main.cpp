#include <iostream>
using namespace std;

// Partición tipo Hoare
int partition(int arr[], int low, int high) {
    int pivot = arr[(low + high) / 2]; // pivote: elemento central
    int i = low - 1;
    int j = high + 1;

    while (true) {

        // avanzar desde la izquierda hasta encontrar >= pivote
        do {
            i++;
        } while (arr[i] < pivot);

        // retroceder desde la derecha hasta encontrar <= pivote
        do {
            j--;
        } while (arr[j] > pivot);

        // si se cruzan, termina la partición
        if (i >= j)
            return j;

        // intercambiar elementos mal colocados
        swap(arr[i], arr[j]);
    }
}

// QuickSort usando Hoare
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSort(arr, low, p); // parte izquierda
        quickSort(arr, p + 1, high); // parte derecha
    }
}

// Función principal
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
