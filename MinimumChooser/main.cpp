#include <QCoreApplication>
#include <iostream>

int func(int arr[], int n) {
    int min = 1000;

    for (int i = 0; i < 5; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char *argv[])
{

    int arr[] = { 1, 2, 3, -5 };

    int min = func(arr, 4);

    std::cout << "min " << min;
}
