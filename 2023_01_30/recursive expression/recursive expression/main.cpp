#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


	float avg = 0;
	float old_avg = 0;

	void expression(int a, int k)
	{
		avg = ((k - 1) * old_avg + a) / k;
		old_avg = avg;
	}

	int main()
	{
		float a;
		int b=1;
		while(1){
			printf("값을 입력하시오 : ");
			scanf("%f", &a);
			expression(a, b);
			b++;
			printf("%lf \n", avg);
		}
	}
