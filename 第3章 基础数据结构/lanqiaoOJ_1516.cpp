#include <iostream>
#include <deque>
using namespace std;
int main()
{
  // 请在此输入您的代码
    string a, b;
    cin >> a >> b;
    int len_a = a.size(), len_b = b.size();
    int i = len_a - 1, j = len_b - 1;
    int t = 0;
    deque<int> dq;
    while (i >= 0 || j >= 0)
    {
        if (i >= 0)
        {
            t += (a[i] - '0');
            i--;
        }
        if (j >= 0)
        {
            t += (b[j] - '0');
            j--;
        }
        dq.push_front(t % 10);
        t /= 10;
    }
    if (t)
        dq.push_front(1);
    int len = dq.size();
    for (int i = 0; i < len; i++)
        cout << dq[i];
    return 0;
}