#include <stdio.h>

int feature1(void)
{
    return 1;
}

int main(int argc, char **argv)
{
    int tmp_i = 0;
    tmp_i = feature1();
	printf("hello world - Feature 1 %i\n", tmp_i);
	return 0;
}
