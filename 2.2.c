#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc,char **argv) {
	int pid ;

	switch (pid =fork() ){
	case 0:
		printf ("i am the child process: pid=%d\n" ,getpid());
		break;

	default :       /* a fork returns a pid to the parent */
			printf("I am the parent process: pid=%d,child pid=%d\n",getpid(),pid);
			break;


	case -1: /*something went wrong*/
		perror("fork");
		exit(1);
	}
	exit(0);
}

