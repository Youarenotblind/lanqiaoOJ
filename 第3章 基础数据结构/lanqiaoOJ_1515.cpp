#include <iostream>
#include <deque>
using namespace std;

deque<int> quick_mul(deque<int>& A, int b)
{
    deque<int> C;
    int len = A.size();
    int t = 0;
    for (int i  = len - 1; i >= 0; i--)
    {
        t += A[i] * b;
        C.push_front(t % 10);
        t /= 10;
    }
    while (t)
    {
        C.push_front(t % 10);
        t /= 10;
    }
    while (C.size() > 1 && C.front() == 0)
        C.pop_front();
    
    return C;
}

int main()
{
  // 请在此输入您的代码
    int n;
    cin >> n;
    deque<int> A = {1};
    for (int i = 2; i <= n; i++)
        A = quick_mul(A, i);
    for (int &num : A)
        cout << num;
    return 0;
}