//��1000ֻˮͰ����������ֻ��һͰװ�ĺ��ж�ҩ������װ�Ķ���ˮ�����Ǵ���ۿ�������һ�������С����˶�ҩ��������15��������ȥ��
//
//�������ˣ������Ҫ����һСʱ�ڣ�Ū�����ֻˮͰ���ж�ҩ����������Ҫ����ֻ��
//
//�ش�������⣬��Ϊ���еĽ��������дһ��ͨ���㷨��
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
	if (buckets == 1)
	{
		return 0;
	}
	int count = minutesToTest / minutesToDie + 1;
	int sum = 1;              //�������
	int num = count;
	while (num < buckets) {
		num *= count;
		sum++;
	}

	return sum;

}

int main()
{

	int a = poorPigs(1000, 15, 60);
	printf("%d\n", a);
	system("pause");
	return 0;
}
