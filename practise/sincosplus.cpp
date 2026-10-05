#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, e;
    cin >> x >> e;          // 输入 x 和精度 ε

    double sinx = 0, cosx = 0;
    double term;            // 当前项

    // ==================== 计算 sin(x) ====================
    // 泰勒级数：sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
    // 第 k 项：t_k = (-1)^(k-1) * x^(2k-1) / (2k-1)!
    //
    // 递推关系（由第 k 项推第 k+1 项）：
    //   t_{k+1} = t_k * (-x^2) / ((2k)(2k+1))
    //
    // 第 1 项就是 x 本身。
    term = x;
    for (int k = 1; ; k++)
    {
        if (fabs(term) < e)     // 当前项绝对值小于 ε，舍去，停止
            break;
        sinx += term;           // 累加当前项
        // 由第 k 项递推出第 k+1 项
        term *= -x * x / ((2.0 * k) * (2.0 * k + 1));
    }

    // ==================== 计算 cos(x) ====================
    // 泰勒级数：cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
    // 第 l 项：t_l = (-1)^(l-1) * x^(2l-2) / (2l-2)!
    //
    // 递推关系（由第 l 项推第 l+1 项）：
    //   t_{l+1} = t_l * (-x^2) / ((2l-1)(2l))
    //
    // 第 1 项就是 1。
    term = 1;
    for (int l = 1; ; l++)
    {
        if (fabs(term) < e)     // 当前项绝对值小于 ε，舍去，停止
            break;
        cosx += term;           // 累加当前项
        // 由第 l 项递推出第 l+1 项
        term *= -x * x / ((2.0 * l - 1) * (2.0 * l));
    }

    // ==================== 输出结果 ====================
    cout << sinx << endl;
    cout << cosx << endl;

    return 0;
}