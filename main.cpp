#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Зберігаємо індекс поточного елемента, який припускаємо найменшим
        // Шукаємо найменший елемент у невідсортованій частині масиву
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Оновлюємо minIndex, якщо знайдено менший елемент
            }
        }
        // Міняємо місцями найменший елемент з першим елементом невідсортованої частини
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    int arr[] = {9, 2, 5, 1, 7, 4, 8, 3, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, n);  // Виклик функції сортування методом вибору
    cout << "Сортований масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
