#include<stdio.h>
int main()
{
	int x = 5,
		y;
	int post, pre;

	printf("x: %d\n", x);
	y = x;
	printf("y: %d\n", y);

	pre = ++x;
	post = x++;
	printf("x++: %d,++x: %d\n", pre, post);
	printf("x: %d\n", x);
	pre = ++y;
	post = y++;
	printf("y++: %d,++y: %d\n", post, pre);
	printf("y: %d\n", y);

	if (x == y)
	{
		printf("they r equal.\n");
	}
	else
	{
		printf("they r not equal.\n");
	}

	if (x ==10)
	{
		printf("x is 10.\n");
	}
	printf("x: %d,y: %d\n", x, y);


	
	
	
	return 0;
}