#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

char* word[200009];


int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(strlen(word[j])>strlen(word[j+1]))
			{
				char* str;
				str=word[j];
				word[j]=word[j+1];
				word[j+1]=str;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",word[i]);
	}


	// strcmp CO��uo : ��o��cAU��?����A��i ����n�����ϩ�CI�ˡ�A CO��uo
	// �ˢ�Ϣ� ��o��cAU��?����A��i ����n�����ϩ�CO ��O�����ˡ�A ��icAu��?�ˢ� �ϩ����̡�?A�ˡ�A ��u�Ϩ���u���Ϣ����ˢ� �ϩ�����A�ϡ�AI ��������AI �ˡ�o A��i ��������AI�ˡ�U.

	// #include <cstring>
	// int strcmp(const char* str1, const char* str2);
	// int strncmp(cosnt char* str1, const char* str, size_t length);
	// @return 1. positive - str1AI str2�����ˡ��ˡ�U A��i �����Ϣ���?i
	//         2. negative - str2�����ˢ� str1�����ˡ��ˡ�U A��i �����Ϣ���?i
	//         3. 0        - str1����u str2�����ˢ� ��������A���� �����Ϣ���?i

	//return strcmp(n1, n2) > 0 ? n1 : n2;



	return 0;
}


