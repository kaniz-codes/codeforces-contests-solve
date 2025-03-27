#include <iostream>
using namespace std;

void bubbleSort(int array[], int n) 
{
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() 
{
    int n;
    cin >> n; 
    int array[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
    }
    
    bubbleSort(array, n);
    
    for (int i = 0; i < n; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
