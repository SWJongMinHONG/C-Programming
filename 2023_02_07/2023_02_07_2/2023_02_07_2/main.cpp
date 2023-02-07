#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int i = 0;
int solution(int time_table[], int time_table_len, int n)
{
	int answer = 0;
	int* a = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		a[i] = 0;
	}
	for (i = 0; i < time_table_len; i++)
	{
		a[i%n] += time_table[i];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[answer])
		{
			answer = i;
		}
	}
	answer = a[answer];
	return answer;
}
int main()
{
	int time_table1[] = { 1,5,1,9 };
	int time_table_len1 = 4;
	int n1 = 3;
	int ret1 = solution(time_table1, time_table_len1, n1);

	printf("solution 함수의 반환값은 %d 입니다.\n", ret1);
	int time_table2[] = { 4,8,2,5,4,6,7 };
	int time_table_len2 = 7;
	int n2 = 4;
	int ret2 = solution(time_table2, time_table_len2, n2);

	printf("solution 함수의 반환값은 %d 입니다.\n", ret2);
}