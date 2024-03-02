// Написать программу, реализующую сортировку массива с
// помощью усовершенствованной сортировки пузырьковым методом.
// Усовершенствование состоит в том, чтобы анализировать
// количество перестановок на каждом шагу, если это количество
// равно нулю, то продолжать сортировку нет смысла — массив
// отсортирован.

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

// Заполнение одномерного массива случайными значениями
template <typename T>
void FillArray(T arr[], int size);

// Вывод массива на экран
template <typename T>
void PrintArray(T arr[], int size);

// Сортировка массива усавершенствованным пузырьковым методом
template<typename T>
void SortingProgressingBubble(T arr[], int size);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 30;
    int Array[size];
    FillArray(Array, size);
    cout << "Заполненный массив : " << endl;    
    PrintArray(Array, size);
    cout << "----------------------------------------------------" << endl;
    cout << "Отсортированный массив : " << endl;

}

template <typename T>
void FillArray(T arr[], int size) {
    random_device random;
    for (size_t i = 0; i < size; i++) {
        arr[i] = random() % (100 + 50) - 50;
    }
};

template <typename T>
void PrintArray(T arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cout << "[" << arr[i] << "] ";
    }
    cout << endl;
};

template<typename T>
void SortingProgressingBubble(T arr[], int size) {
   
};