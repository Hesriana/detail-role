#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <vector>

using namespace std;

/*

累累
公主
酸黃瓜
黑馬
熊
皮拉卡
兔子

雷恩
離月
成城


笨喵
no
張張張

淺淺
9C
阿權

*/ 
int main()
{	
	while(1){
	vector<string> peo = {};//name
	int people,team_member;
	cout << "How many people: ";
	cin >> people;
	string temp;
	/*
	for(int i = 0 ; i < people ; i++){
		cout << "What are their name: ";
		cin >> temp;
		peo.push_back(temp);
	}*/

	cout << "How many people in a team: ";
	cin >> team_member;
	int loca[100] = {0};
	srand(time(NULL)); 
	
	for(int i=0 ; i < people ; i++){
		int n = rand()%people;
		while(loca[n]!=0){
			n = rand()%people;
		}
		loca[n] += i+1;
	}
	
	int count = 1;
/*
	for(int i = 0 ; i < people ; i++){
		cout << "Team " << count++ << ": " << peo[loca[i] - 1] << " ";
		while(i%team_member < team_member-1){
			i++;
			cout << peo[loca[i] - 1] << " ";
		}
		cout << endl;
	}*/
//display number

for(int i = 0 ; i < people ; i++){
		cout << "Team " << count++ << ": " << loca[i] << " ";
		while(i%team_member < team_member-1){
			i++;
			cout << loca[i] << " ";
		}
		cout << endl;
	}
	cout << "input 0 if you want to stop" << endl;
	char c;
	cin >> c;
	if(c == '0')
		break;
}
	return 0;
}
