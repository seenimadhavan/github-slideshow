#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/utsname.h>

void main()
{
	struct utsname buf;
	errno=0;
	if(uname(&buf)!=0)
	{
		printf("Not return zero so error\n");
		exit(EXIT_FAILURE);
	}
	printf("System name : %s\n",buf.sysname);
	printf("Node name : %s\n",buf.nodename);
	printf("Release name : %s\n",buf.release);
	printf("Version name : %s\n",buf.version);
}
