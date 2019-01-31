//有1000只水桶，其中有且只有一桶装的含有毒药，其余装的都是水。它们从外观看起来都一样。如果小猪喝了毒药，它会在15分钟内死去。
//
//问题来了，如果需要你在一小时内，弄清楚哪只水桶含有毒药，你最少需要多少只猪？
//
//回答这个问题，并为下列的进阶问题编写一个通用算法。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
	if (buckets == 1)
	{
		return 0;
	}
	int count = minutesToTest / minutesToDie + 1;
	int sum = 1;              //猪的数量
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
