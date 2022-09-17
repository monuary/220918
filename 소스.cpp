#include<cstdio>
#include<ctime>
#include<cstdlib>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		int n = rand() * i;//숫자와의 차이를 크게 하기 위함.
		srand(time(NULL) + n);//난수 정함
		printf("%d ", rand()%100);//0에서 99까지의 난수를 무작위로 산출.
	}
	return 0;
}