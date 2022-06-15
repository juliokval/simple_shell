/ program that prints the child and parent process id /

#include <stdio.h>
#include <unistd.h>
/**
  * main - prints child and parent process
  *
  * Return: 0 for success
  */
int main(void)
{
	int p;

	p = fork();

	if (p < 0)
		printf("cannot be executed");
	else if (p == 0)
	{
		printf("child process id %d \n", getpid());
	}
	else
	{
		printf("parent process id %d \n", getppid());
	}
	return (0);
}
