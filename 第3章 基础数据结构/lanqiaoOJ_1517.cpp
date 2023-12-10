#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    int upper_bound = 0, right_bound = n - 1, lower_bound = m - 1, left_bound = 0;
    int cnt = 0;

    while (cnt < m * n)
    {
        for (int i = upper_bound; i <= lower_bound; i++)
        {
            if (i == 0 && left_bound == 0)
                cout << matrix[0][0];
            else
                cout << " " << matrix[i][left_bound];
            cnt++;
        }   
        left_bound++;

        for (int j = left_bound; j <= right_bound; j++)
        {
            cout << " " << matrix[lower_bound][j];
            cnt++;
        }
        lower_bound--;

        for (int i = lower_bound; i >= upper_bound; i--)
        {
            cout << " " << matrix[i][right_bound];
            cnt++;
        }
        right_bound--;

        for (int j = right_bound; j >= left_bound; j--)
        {
            cout << " " << matrix[upper_bound][j];
            cnt++;
        }
        upper_bound++;
    }
    return 0;
}