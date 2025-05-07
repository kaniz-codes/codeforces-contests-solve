#include<iostream>
using namespace std;

int main()
{
    
    int N;
    cin >> N;
    string K;
    cin >> K;
    int count_d=0, count_a= 0;
    for(int i=0; i <N; i++)
    {
        if(K[i]== 'D')
        {
            count_d++;
        }
        else
        {
            count_a++;
        }
    }
    if(count_d > count_a)
    {
        cout << "Danik" <<endl;
        
    }
    else if (count_d < count_a)
    {
        cout << "Anton" <<endl;
    }
    else
    {
        cout << "Friendship" <<endl;
    }
return 0;
}