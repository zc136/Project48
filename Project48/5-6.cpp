//��������(�ŵ�����)
//#include<stdio.h>
//int Feibonacci(int n) {
//    if (n == 1 || n == 2)
//        return 1;
//    else
//        return Feibonacci(n - 1) + Feibonacci(n - 2);
//}
//int main() {
//    int n;  // Ҫ������·� 
//    scanf_s("%d", &n);
//
//    printf("%d���µ���������Ϊ%d\n", n, Feibonacci(n));
//
//    return 0;
//}
//������������mn�����Լ������С������
//շת�����
//������Ϊa��b(a>b)����a����b����a��b=q......r��
//��r=0 �������Լ��Ϊb��
//��r��0 ,������b��r����b��r=q......r'��
//��r'=0�������Լ��Ϊr'����r'��0���������r��r'......
//ֱ���ܹ�����Ϊֹ����ʱ�ĳ�����Ϊ���Լ����
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
//		t = m % n;//����
//		m = n;
//		n = t;//������ɳ���
//	}
//	printf("���Լ����:%d", n);
//	printf("��С��������:%d", a*b/n);//��С������=�����ĳ˻������Լ��
//	return 0;
//}
//�����
// ����˼ά����һ�յ�������Զ�ǵڶ������Ӽ�һ��Ķ�����
// ��n��=����n+1��+1��*2
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
////���õݹ鷽�����5��
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
