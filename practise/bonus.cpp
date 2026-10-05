#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double out = 0.00;
    cin >> n;

    vector<vector<double> > arr(2, vector<double>(n));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i] >> arr[1][i];
    }

    double m;
    cin >> m;

    if (m < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n == 0)
        {
            cout << "0.00" << endl;
        }

        if (n == 1)
        {
            cout <<fixed<<setprecision(2)<< m * arr[1][0] << endl;
        }

        if (n > 1)
        {
            if (m <= arr[0][0] && m >= 0)
            {
                out = m * arr[1][0];
                cout << fixed << setprecision(2) << out << endl;
            }
            else if (m > arr[0][0] && m <= arr[0][n - 2])
            {
                for (int j = 0; j < n - 2; j++)
                {
                    if (m > arr[0][j] && m <= arr[0][j + 1])
                    {
                        for (int t = 0; t < j; t++)
                        {
                            out = out + ((arr[0][t + 1] - arr[0][t]) * arr[1][t + 1]);
                        }
                        out = out + (m - arr[0][j]) * arr[1][j + 1] + arr[0][0] * arr[1][0];
                        cout << fixed << setprecision(2) << out << endl;
                        break;
                    }
                }
            }
            else if (m > arr[0][n - 2])
            {
                for (int t = 0; t < n - 2; t++)
                {
                    out = out + ((arr[0][t + 1] - arr[0][t]) * arr[1][t + 1]);
                }
                out = out + (m - arr[0][n - 2]) * arr[1][n - 1] + arr[0][0] * arr[1][0];
                cout << fixed << setprecision(2) << out << endl;
            }
        }
    }

    return 0;
}