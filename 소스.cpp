#include<cstdio>
#include<ctime>
#include<cstdlib>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		int n = rand() * i;//���ڿ��� ���̸� ũ�� �ϱ� ����.
		srand(time(NULL) + n);//���� ����
		printf("%d ", rand()%100);//0���� 99������ ������ �������� ����.
	}
	return 0;
}