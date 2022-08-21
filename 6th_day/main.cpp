#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

template <typename T>
inline void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
inline void Sort(T Array[], int len)
{
    for (size_t i = 0; i < len - 1; i++)
    {
        int Max = i;
        for (size_t j = i + 1; j < len; j++)
        {
            if (Array[Max] > Array[j])
            {
                Swap(Array[Max], Array[j]);
            }
        }
    }
}

template <typename T>
inline void Print(T Array[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        cout << Array[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int array1[] = {
        11,
        22,
        55,
        4,
        99,
        77,
        1,
    };
    char array2[] = {'a', 'c', 's', 'w'};
    int len1 = sizeof(array1) / sizeof(array1[0]);
    Sort(array1, len1);
    Print(array1, len1);
    getchar();
    system("clear");
}