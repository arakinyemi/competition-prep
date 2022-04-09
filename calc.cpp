#include <iostream>
using namespace std;
int main()
{
	char op;
	int d;
	start:
	cout<<"Enter 1 to enter operator.\n";
	cout<<"Enter 2 to end.\n";
	cin>>d;
	if(d==2)
	{
		return 0;
	}
	else if(d==1)
	{
		cout<<"Enter operator.\n";
	cin>>op;
		float num1,num2;
	cout<<"Enter two numbers.\n";
	cin>>num1;
	cin>>num2;
		switch (op)
		{
		case '+':
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
			break;

        case '-':
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			break;

        case '/':
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
			break;

        case '*':
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
			break;

			default:
				cout<<"operator is invalid.\n";
				break;

		}
	goto start;
	}

//	}
return 0;
}
