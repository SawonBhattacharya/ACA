/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void and(char *a,char *b,int n){
	int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]=='0' && b[i]=='0')
			c[i]='0';
		if(a[i]=='0' && b[i]=='1')
			c[i]='0';
		if(a[i]=='1' && b[i]=='0')
			c[i]='0';
		if(a[i]=='1' && b[i]=='1')
			c[i]='1';
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%c",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%c",b[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%c",c[i]);

}
void nand(char *a,char *b,int n){
	int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==0)
			c[i]=1;
		if(a[i]==0 && b[i]==1)
			c[i]=1;
		if(a[i]==1 && b[i]==0)
			c[i]=1;
		if(a[i]==1 && b[i]==1)
			c[i]=0;
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%c",c[i]);

}
void or(char *a,char *b,int n){
	int i;
    char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==0)
			c[i]=0;
		if(a[i]==0 && b[i]==1)
			c[i]=1;
		if(a[i]==1 && b[i]==0)
			c[i]=1;
		if(a[i]==1 && b[i]==1)
			c[i]=1;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c",c[i]);
    }

}
void nor(char *a,char *b,int n){
	int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==0)
			c[i]=1;
		if(a[i]==0 && b[i]==1)
			c[i]=0;
		if(a[i]==1 && b[i]==0)
			c[i]=0;
		if(a[i]==1 && b[i]==1)
			c[i]=0;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c",c[i]);
    }

}
void not(char *a,int n){
    int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
	     if(a[i]==0)
			c[i]=1;
		else if(a[i]==1)
		    c[i]=0;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c",c[i]);
    }

}
void xor(int *a,int *b,int n){
	int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==0)
			c[i]=0;
		if(a[i]==0 && b[i]==1)
			c[i]=1;
		if(a[i]==1 && b[i]==0)
			c[i]=0;
		if(a[i]==1 && b[i]==1)
			c[i]=0;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c",c[i]);
    }

}
void xnor(char *a,char *b,int n){
	int i;
	char *c;
	c=(char*) malloc (n * sizeof(char));
	for(i=0;i<n;i++){
		if(a[i]==0 && b[i]==0)
			c[i]=1;
		if(a[i]==0 && b[i]==1)
			c[i]=0;
		if(a[i]==1 && b[i]==0)
			c[i]=0;
		if(a[i]==1 && b[i]==1)
			c[i]=1;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c",c[i]);
    }

}
int main()
{
	char *a,*b;
	int i,n;
//	clrscr();
	printf("enter the size of the bit string length:\n");
	scanf("%d",&n);
	a=(char*) malloc (n * sizeof(char));
	b=(char*)malloc(n * sizeof(char));
	for(i=0;i<n;i++)
		scanf("%c",&a[i]);

	printf("\n");

	for(i=0;i<n;i++)
		scanf("%c",&b[i]);
	for(i=0;i<n;i++)
		printf("%c",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%c",b[i]);
	and(a,b,n);
    /*or(a,b,n);
    not(a,n);
    not(b,n);
    nor(a,b,n);
    nand(a,b,n);
    xor(a,b,n);
    xnor(a,b,n);*/
//	getch();
	return 0;
}

