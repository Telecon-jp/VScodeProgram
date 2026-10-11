#include <iostream>
using namespace std;

void check(char n[9], char n9)
{
    // 1) 计算校验和（权重 1~9）
    int sum = 0;
    for (int i = 0; i < 9; i++)
        sum += (n[i] - '0') * (i + 1);

    // 2) 计算正确的识别码
    int r = sum % 11;
    char correct = (r == 10) ? 'X' : char('0' + r);

    // 3) 比较
    if (correct == n9)
    {
        cout << "Right";
    }
    else
    {
        // 输出正确的 ISBN
        cout << n[0] << "-"
             << n[1] << n[2] << n[3] << "-"
             << n[4] << n[5] << n[6] << n[7] << n[8] << "-"
             << correct;
    }
}

int main()
{
    char n[9];       // 9 位数字字符
    char dash;       // 用于吃掉分隔符 '-'
    char n9;         // 识别码

    cin >> n[0] >> dash
        >> n[1] >> n[2] >> n[3] >> dash
        >> n[4] >> n[5] >> n[6] >> n[7] >> n[8] >> dash
        >> n9;

    check(n, n9);
    return 0;
}