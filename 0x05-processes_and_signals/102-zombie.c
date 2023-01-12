#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - initializes an infinite while loop
 * Return: 0 if interrupted by a signal
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * create_process - creates a new process
 * Return: void has no return value
 */
void create_process(void)
{
	int cr = fork();

	if (cr == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}
/**
 * main - create 5 zombie processes
 * Return: 0 if successful
 */
int main(void)
{
	create_process();
	create_process();
	create_process();
	create_process();
	create_process();
	return (infinite_while());
}
