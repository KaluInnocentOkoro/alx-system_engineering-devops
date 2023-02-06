#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
/**
* infinity - function delays the process
* Return: 0
*/
int infinity(void)
{
	while (1)
		sleep(1);
	return (0);
}
/**
* main - program that creates 5 zombie processes
* Return: 0
*/
int main(void)
{
	int i;
	pid_t child_pid;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", getpid());
	}
	return (infinity());
}
