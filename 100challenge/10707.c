#include<stdio.h>

int main()

{
	int A,B,C,D,P,x,y;
	/* A:X�� ���ʹ� ���
	   B:Y�� �⺻���
	   C:Y�� �⺻��� ����
	   D:Y�� ���ʹ� �߰����*/ 
	scanf("%d\n%d\n%d\n%d\n%d",&A,&B,&C,&D,&P);
	x=A*P;
	if(P>C)
	{
		y=B+(P-C)*D;
	}
	else
	{
		y=B;
	}
	if(x<y)
	{
		printf("%d",x);
	}
	else if(x>y)
	{
		printf("%d",y);
	}
	
	
	return 0;
}
