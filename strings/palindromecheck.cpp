#include <bits/stdc++.h>
using namespace std;
int main()
{
	char string[20];
	int i, length;
	int flag = 0;
	printf("Enter a string:");
	scanf("%s", string);
	length = strlen(string);
	for(i=0;i < length ;i++)
	{
		if(string[i] != string[length-i-1])
		{
			flag = 1;
			break;
        }
    }
    if (flag) 
	{
		printf("%s is not palindrome", string);
	}
	else 
	{
		printf("%s is  palindrome", string);
    }
    return 0;
}