#include<iostream>

using namespace std;

int main(){
	int choice;
	int bari =0;
	char cross;
	char dash1 = '1';
	char dash2 = '2';
	char dash3 = '3';
	char dash4 = '4';
	char dash5 = '5';
	char dash6 = '6';
	char dash7 = '7';
	char dash8 = '8';
	char dash9 = '9';

		cout<<"Welcome to the Tic-Tak-Toe\n";
		while('a'=='a'){

		cout<<"_"<<dash1<<"_"<<"|"<<"_"<<dash2<<"_"<<"|"<<"_"<<dash3<<"_"<<"\n";
		cout<<"_"<<dash4<<"_"<<"|"<<"_"<<dash5<<"_"<<"|"<<"_"<<dash6<<"_"<<"\n";
		cout<<" "<<dash7<<" "<<"|"<<" "<<dash8<<" "<<"|"<<" "<<dash9<<"\n";


		if(dash1 !='1' && dash2  !='2' && dash3 !='3' && dash4 !='4' && dash5 !='5' && dash6 !='6' && dash7 !='7' && dash8 !='8' && dash9 !='9'){
			cout<<"YOU HAVE RAN OUT OF MOVES";
			break;
			}

		if(bari%2==0){
			cout<<"Enter No. of the place you want to BID for X\n";
			cross='X';
		}else{
			cout<<"Enter No. of the place you want to BID for O\n";
			cross='O';
		}
		bari++;
		cin>>choice;

		switch(choice){
		case 1:
			dash1=cross;
			break;
		case 2:
			dash2=cross;
			break;
		case 3:
			dash3=cross;
			break;
		case 4:
			dash4=cross;
			break;
		case 5:
			dash5=cross;
			break;
		case 6:
			dash6=cross;
			break;
		case 7:
			dash7=cross;
			break;
		case 8:
			dash8=cross;
			break;
		case 9:
			dash9=cross;
			break;
		}
	if(dash1=='X' && dash2=='X' && dash3=='X'){
		cout<<"PLAYER X WON!!!";
		break;
	}else
		if(dash4=='X' && dash5=='X' && dash6=='X'){
			cout<<"PLAYER X WON!!!";
			break;
		}else
			if(dash7=='X' && dash8=='X' && dash9=='X'){
				cout<<"PLAYER X WON!!!";
				break;
			}else
				if(dash1=='X' && dash4=='X' && dash7=='X'){
					cout<<"PLAYER X WON!!!";
					break;
				}else
					if(dash2=='X' && dash5=='X' && dash8=='X'){
						cout<<"PLAYER X WON!!!";
						break;
					}else
						if(dash3=='X' && dash6=='X' && dash9=='X'){
							cout<<"PLAYER X WON!!!";
							break;
						}else
							if(dash1=='X' && dash5=='X' && dash9=='X'){
								cout<<"PLAYER X WON!!!";
								break;
							}else
								if(dash3=='X' && dash5=='X' && dash7=='X'){
									cout<<"PLAYER X WON!!!";
									break;
								}////////////////
	if(dash1=='O' && dash2=='O' && dash3=='O'){
		cout<<"PLAYER O WON!!!";
		break;
	}else
		if(dash4=='O' && dash5=='O' && dash6=='O'){
			cout<<"PLAYER O WON!!!";
			break;
		}else
			if(dash7=='O' && dash8=='O' && dash9=='O'){
				cout<<"PLAYER O WON!!!";
				break;
			}else
				if(dash1=='O' && dash4=='O' && dash7=='O'){
					cout<<"PLAYER O WON!!!";
					break;
				}else
					if(dash2=='O' && dash5=='O' && dash8=='O'){
						cout<<"PLAYER O WON!!!";
						break;
					}else
						if(dash3=='O' && dash6=='O' && dash9=='O'){
							cout<<"PLAYER O WON!!!";
							break;
						}else
							if(dash1=='O' && dash5=='O' && dash5=='O'){
								cout<<"PLAYER O WON!!!";
								break;
							}else
								if(dash3=='O' && dash5=='O' && dash7=='O'){
									cout<<"PLAYER O WON!!!";
									break;
								}
		}
	return 0;
}
