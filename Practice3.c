//将数组A中的内容和数组B中的内容进行交换(数组一样大)
#define N 6 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, a[N], b[N];
	printf("please enter array a[%d]:", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	printf("please enter array b[%d]:", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);
	for (i = 0; i < N; i++){
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];
	}
	printf("the value of a[N] swap:\n");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("the value of b[N] swap:\n");
	for (i = 0; i < N; i++)
		printf("%d ", b[i]);
	printf("\n");
	system("pause");
	return 0;
}
//计算1/1-1/2+1/3-1/4+1/5…+1/99-1/100的值
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, n = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++){
		sum = sum + (pow(-1, n) / (n + 1));
		n++;
	}
	printf("the value is:%10.6f\n", sum);
	system("pause");
	return 0;
}
//编写程序数一下1到100的所有整数中出现多少次数字9
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, num = 0;
	for (i = 1; i <= 100; i++){
		if ((i % 10 == 9) || (i / 10 == 9)){
			num++;
		}
	}
	printf("it appear %d time from one to hundred.\n", num);
	system("pause");
	return 0;
}