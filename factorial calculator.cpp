///factorial caclculator
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    int n;
    int i;
    int sum=1;
    
	cout<<"welcome to factorial calculator"<<endl<<"plrase enter a number :";
    cin>>n;
    
    i=1;
    while(i<=n)
    {
    sum*=i;
	i++;	
	}
	
	cout<<sum;
	
	
	getch();
}
