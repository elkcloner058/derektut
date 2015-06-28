#include<iostream>
using namespace std;
//First comment has been added
<<<<<<< HEAD
//This line has been added in remote branch


//There is another line
=======
//This line is added in dev2 branch and this is also the modified line
//this is another line
>>>>>>> 21eb8eb0b55dcdfd2bba0a8615f3526db6ade682
int KMP_int(char *string)
{
	int len = strlen(string);
	int i=1,m=-1;

	int table[10000];
	table[0]=-1;

    while(1)
	{
		if(i==len)
		{
			return table[i-1];
			break;
		}

		for(int j=m+1;j<i;j++)
		{
			if(string[i]!=string[j])
			{
				table[i]=table[j];
				break;

			}
			else
			{
				m +=1;
				table[i]=m;
				break;

			}
		}

		
		++i;

	}

}
int main()
{
	char string[100000];
	long testCase;
	cin>>testCase;
	for(int i=1;i<=testCase;i++)
	{

		cin>>string;

		int len = strlen(string);

		string[len]='\0';
			
		int result = KMP_int(string);

		int temp = len - result - 1;

		if(len%temp==0)
		{
			cout<<(temp)<<endl;
		}
		else
		{
			cout<<len<<endl;
		}

	
	}











return 0;
}
