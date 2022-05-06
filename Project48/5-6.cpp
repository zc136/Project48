//兔子问题(古典问题)
//#include<stdio.h>
//int Feibonacci(int n) {
//    if (n == 1 || n == 2)
//        return 1;
//    else
//        return Feibonacci(n - 1) + Feibonacci(n - 2);
//}
//int main() {
//    int n;  // 要计算的月份 
//    scanf_s("%d", &n);
//
//    printf("%d个月的兔子总数为%d\n", n, Feibonacci(n));
//
//    return 0;
//}
//输入两个整数mn求最大公约数和最小公倍数
//辗转相除法
//设两数为a和b(a>b)，用a除以b，得a÷b=q......r，
//若r=0 ，则最大公约数为b；
//若r≠0 ,则再用b÷r，得b÷r=q......r'，
//若r'=0，则最大公约数为r'，若r'≠0，则继续用r÷r'......
//直到能够整除为止，此时的除数即为最大公约数。
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf_s("%d %d", &m, &n);
//	int t = 0;
//	int a = m;
//	int b = n;
//	while (m % n != 0)
//	{
//		t = m % n;//余数
//		m = n;
//		n = t;//余数变成除数
//	}
//	printf("最大公约数是:%d", n);
//	printf("最小公倍数是:%d", a*b/n);//最小公倍数=两数的乘积÷最大公约数
//	return 0;
//}
//猴吃桃
// 逆向思维，第一日的桃子永远是第二天桃子加一后的二倍；
// 第n天=（第n+1天+1）*2
//#include<stdio.h>
//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
////	printf("%d", x1);
////	return 0;
////}
////利用递归方法求出5！
//#include<stdio.h>
//int fact(int j)
//{
//    int sum;
//    if (j == 0)
//        sum = 1;
//    else
//        sum = j * fact(j - 1);
//    return sum;
//}
//int main()
//{
//    int i;
//    int fact(int j);
//    for (i = 1; i <= 5; i++)
//        printf("%d\n",  fact(i));
//    return 0;
//}
