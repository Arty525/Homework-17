#include <iostream>
using namespace std;

void reverse(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < 10 / 2; ++i)
    {
        reverse((array + (10 - i - 1)), (array + i));
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << *(array + i) << " ";
    }

    return 0;
}