#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int nums[3] = {A, B, C};
    sort(nums, nums+3);

    int totalCost = (nums[2] - nums[1]) + (nums[1] - nums[0]);
    cout << totalCost << endl;

    return 0;
}
