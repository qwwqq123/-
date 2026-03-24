#include <stdio.h>
#include <math.h>

int main() {
    double s_double;
    // 循环读取多组输入
    while (scanf_s("%lf", &s_double) != EOF) {
        // 将金额扩大10倍转为整数处理，避免浮点数精度误差
        // 使用 round 或 +0.5 确保四舍五入正确
        long long s = (long long)(s_double * 10 + 0.5);

        int found = 0;
        // 枚举啤酒的数量 i
        // 啤酒单价 23，所以 i 的最大可能值不会超过 s / 23
        for (int i = 0; 23 * i <= s; i++) {
            long long remaining = s - 23 * i;

            // 检查剩下的钱是否能刚好买整数罐饮料 (单价 19)
            if (remaining >= 0 && remaining % 19 == 0) {
                int j = remaining / 19;

                // 约束条件：啤酒数量比饮料少
                if (i < j) {
                    printf("%d\n", i);
                    found = 1;
                }
            }
        }
    }
    return 0;
}