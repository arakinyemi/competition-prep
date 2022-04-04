#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	string c,s="4123";
	int bal=100000;
	 cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME TO UBA BANK~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
	cout<<"Enter your four digit PIN"<<endl;
	cin>>c;

	bool temp=false;
	if(c!=s){
		cout<<"TRY AGAIN"<<endl;
		int t=4;
		while(t--){
			cout<<"YOU HAVE "<<t+1<<" time(s) left.\n";
			cin>>c;
			if(c==s){
				temp=true;
				break;
			}else{
				cout<<"TRY AGAIN"<<endl;
			}
		}
	}else{
		temp=true;
	}
	if(temp==false){
		cout<<"Your card has been blocked"<<endl;
	}else{
		START:
		cout<<"What do you want to do"<<endl;
		cout<<"1 = Withdrawal"<<endl;
		cout<<"2 = Transfer"<<endl;
		cout<<"3 = deposit"<<endl;
		cout<<"4 = Account balance"<<endl;
        cout<<"5 = Buy Airtime"<<endl;
		cout<<"6 = End"<<endl;

		cin>>num;
		if(num==1){
			int num1;
			string s1;
			cout<<"How much do you want to withdraw"<<endl;
			cout<<"1 = 1000"<<endl;
			cout<<"2 = 2000"<<endl;
			cout<<"3 = 5000"<<endl;
			cout<<"4 = 10000"<<endl;
			cout<<"5 = 20000"<<endl;
			cout<<"6 = others"<<endl;
			cin>>num1;
			if(num1==6){
				FRONT:
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>num1;
				if(num1>bal){
					cout<<"Insufficient funds"<<endl;
					goto FRONT;
				}
			}
			cout<<"Savings or Current"<<endl;
			cin>>s1;
			cout<<"Take out cash"<<endl;
			bal=bal-num1;
			cout<<"Account balance: "<<bal<<endl;
			goto START;
		}else if(num==2){
			int num4;
			string s2,s3;
			BEGIN:
			cout<<"Enter the account number"<<endl;
			cin>>s2;
			if(s2.length()!=10){
				cout<<"Account number invalid"<<endl;
				goto BEGIN;
			}
			cout<<"Enter the account number again"<<endl;
			cin>>s3;
			if(s2!=s3){
				cout<<"Account number invalid"<<endl;
				goto BEGIN;
			}else{
				commence:
				cout<<"Enter the amount to be sent"<<endl;
				cin>>num4;
				if(num4>bal){
					cout<<"Insufficient funds"<<endl;
					goto commence;
				}else{
					cout<<"Transfer successful"<<endl;
					bal=bal-num4;
					cout<<"Account balance: "<<bal<<endl;
				}
			}
			goto START;
		}else if(num==3){
			int num5;
			cout<<"Enter amount of money you want to put in"<<endl;
			cin>>num5;
			bal=bal+num5;
			cout<<"Your new account balance is: "<<bal<<endl;
			cout<<"Thank you for using UBA Bank"<<endl;
			goto START;
		}else if(num==4){
			cout<<"account balance: "<<bal<<endl;
			goto START;
		}else if(num==5)
		{
			int amt;
			string num6;
			cout<<"Enter your phone number.\n";
			cin>>num6;
			cout<<"How much credit do you want to buy.\n";
			cin>>amt;
			cout<<"Transaction complete. Thank you for using UBA BANK.\n";
			bal=bal-amt;
		}
		else if(num==6){
			cout<<"Thank you for UBA BANK.\n";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~GOODBYE~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
			return 0;
		}

	}
	return 0;
}
