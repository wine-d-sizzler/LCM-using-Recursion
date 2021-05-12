#include <stdio.h>
int LCM(int,int);
int main()
{
	int a,b,lcm;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	lcm=LCM(a,b);
    printf("The LCM of %d and %d = %d",a,b,lcm);
    return 0;
}
int LCM(int x,int y)
{
	static int t=1;
    if(t%x==0 && t%y==0)
    {
		return t;
	}
	else
	{
		t=t+1;
		LCM(x,y);
		return t;
	}
}
