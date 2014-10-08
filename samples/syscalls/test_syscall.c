#include <linux/unistd.h>
#include <asm/unistd.h>
#include <sys/syscall.h>
#include <stdio.h>


int main(int argc, char **argv){


	int rv;
	printf("return call code: %d\n", syscall(__NR_addition, 1, 2, &rv));
	printf("Result : %d\n", rv);

	int val = 5;
	syscall(__NR_increment, &val);
	printf("New val : %d\n", val);
	return 0;

}
