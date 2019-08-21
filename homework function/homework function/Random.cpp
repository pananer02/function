#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
bool checkNum(int,int);

int main(){
	srand(time(NULL));
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	int time = 1;
	int random = rand()%10+1;
	cout << random << endl;
	int num ;
	bool exit = true;
	do{
		cout << "Guess the number (1 to 10) : ";
		cin >> num;
		exit = checkNum(num,random);
		time++;
	}while(exit);
	cout << "The secret number is : " << random  << endl;
	cout << "You made " << time <<" guesses"<<endl;
	return 0;
}
bool checkNum(int input,int random){
	if(random > input){
		cout << "The secret number is lower" << endl;
		return(true);
	}
	else if(random < input){
		cout << "The secret number is higher" << endl;
		return(true);
	}
	else{
		cout << "Congratulations." << endl;
		return(false);
	}
}
