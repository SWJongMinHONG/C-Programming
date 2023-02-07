#include <stdio.h>


int solution(int temperature[], int temperature_len, int a, int b)
{
	int answer = 0;
	for (int i = a;i < b - 1;i++)
	{
		if (temperature[i]> temperature[a-1] || temperature[i] > temperature[b - 1])
		{
			answer++;
		}
	}
	return answer;
}
int main()
{
	int temperature[] = { 3,2,1,5,4,3,3,2 };
	int temperature_len = 8;
	int a = 1;
	int b = 6;
	int ret = solution(temperature, temperature_len, a, b);
	printf("a와b사이에서 첫째날이 기온이 더 높은 횟수:%d",ret);
}