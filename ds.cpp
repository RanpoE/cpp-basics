#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // Stack Last In First Out -> 
    stack<int> nums;

    nums.push(4);
    nums.push(6);
    nums.push(9);
    nums.push(1);
    nums.push(110);

    while (!nums.empty())
    {
        cout << nums.top() << endl;
        nums.pop();
    }

    return 0;
}