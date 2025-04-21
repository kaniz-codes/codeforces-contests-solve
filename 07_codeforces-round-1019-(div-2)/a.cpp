#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int N;
        cin >> N;
        //corner case experiment
        if (N == 0) 
        {
            cout << "0" << endl;
            continue;
        }
        int arr[100];
        // array input nicche
        for (int i=0; i<N; i++) 
        {
            cin >> arr[i];
        }

        int count=0;
        for (int i=0; i< N; i++) 
        {
            int flag = 1;
            for (int j =0; j <i; j++)
              {
                if (arr[i] == arr[j]) 
                {
                   flag = 0;
                    break;
                } 
              }
              if (flag == 1) 
            {
                count++; 
            }
        
        }
        cout<< count <<endl;
    }
}