#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int randnum=rand()%100+1;
	int userguess=0;
	cout<<"guess the number between 1 and 100:-";
	while(userguess !=randnum)
	{
		cin>>userguess;
		
		if(userguess>randnum){
		cout<<"Too high !! Try again:";
	             }
	             else if(userguess<randnum){
	             cout<<"Too low !! Try again:";
	             }
	             else{
	             cout<<"Contratulation!! You guessed the correct number."<<endl;
		}
	} 
	return 0;
}
