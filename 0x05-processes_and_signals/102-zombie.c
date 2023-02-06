#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

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
			printf("Zombie process created, PID: %d\n", getpid());
		else
			wait(NULL);
	}
	return (0);
}
