#include <iostream>
using namespace std;

int main()
{
	char marital, gender;
	int age;

	cout<<"enter your merital status\n";
	cin>>marital;

	cout<<"enter your gender\n";
	cin>>gender;

	cout<<"enter your age\n";
	cin>>age;

	if(marital == 'm' || (marital == 's' && gender == 'm' && age > 30)
		|| (marital == 's' && gender == 'f' && age > 25))
		cout<<"you will get insurance\n";
	else
		cout<<"you will not get insurance\n";
}