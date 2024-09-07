#include<bits/stdc++.h>
#include "windows.h"
#include "unistd.h"
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
void clear() {
	system("cls");
};
void slow(string s,int n){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(n);
	}
	return;
}
void title(string name) {
	name="title "+name;
	system(name.c_str());
}
void pause() {
	sleep(2);
}
int random(int value) {
	return rand()%value;
}
void wait(int ms,string s) {
	clear();
	int temp = ms / 1000;
	title("模拟出生V1.2.99：重生---工作中……");
	cout << s << '\n' << temp << '\n';
	while(temp--) {
		sleep(1);
		clear();
		cout << s << '\n' << temp << '\n';
	}
}
inline void load() {
	for(int i = 1;i <= 100;i++){
		cout << '[';
		for(int j = 1;j <= i;j++){
			cout << '=';
		}
		cout << ']' << i << '%';
		Sleep(20);
		clear();
	}
	cout << "完成！";
	Sleep(600); 
}
void Yan(int a)
{
    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//bai
    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);//blue
    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);//green
    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);//purple
    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);//red
    if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);//yellow
    if(a>=6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);//deep blue
}
int jl=500,hp=200,game=0,safe=500,cf=0,  dpcs=0,  xl=0,gamep=0,zbxl=0,zbmp=0;
long long money = 5000; 
bool havesc=0,havegc=0,haveqc=0,yu = 0;
int main() {
	srand(time(NULL));
	title("模拟出生V1.2.99：重生---加载中……");
	printf("保留上次数据？[Y/N]\n");
	fflush(stdin);
	while(1){
		if(KEY_DOWN('Y')){
			freopen("surival.data","r",stdin);
			cin >> money >>  jl >> hp >> game >> safe >> cf >> dpcs >> havesc >> havegc >> haveqc;
			break;
		}
		if(KEY_DOWN('N')){
			break;
		}		
	} 
	load;
	clear();
	while(1) {

		title("模拟出生V1.2.99：重生");
		if(safe<=0||random(safe)==0 || yu) {
			yu = 0;
			if(safe>=500) {
				cout<<"你被人诬陷入狱...\n";
				money-=200;
				hp-=20;
				jl-=20;
				wait(5000,"蹲监狱中……");
				cout<<"你出狱了...\n";
			} else if(safe<=0) {
				Yan(2);
				cout<<"你被枪决...\n";
				pause();
				return 0;
			} else {
				cout<<"你入狱了...\n";
				money-=100;
				jl-=50;
				hp-=50;
				wait(5000,"蹲监狱中……");
				cout<<"你出狱了...\n";
			}
		}
		if(hp<=0||dpcs>=5) {
			Yan(2);
			cout<<"你死了...\n";
			pause();
			return 0;
		}
		if(money<=0) {
			Yan(2);
			cout<<"你穷死了...\n";
			pause();
			return 0;
		}
		if(jl<=0) {
			cout<<"你累倒了...\n";
			sleep(2);
			cout<<"你醒了..\n";
			jl=20;
		}
		clear();
		cout<<"你有"<<money<<"元钱，精力为"<<jl<<"，生命值为"<<hp<<"，游戏天赋为"<<game<<"，安全度为"<<safe<<"，CF分数为"<<cf<<"\n";
		cout<<"扣1去赚钱\n扣2修养\n扣3上网\n";
		cout<<"扣esc退出\n";
		freopen("CON","r",stdin);
		int flag = 0;
		while(1){
			if(KEY_DOWN(VK_ESCAPE)){
				clear();
				cout << "确定要退出吗？[Y/N]\n";
				while(1){
					if(KEY_DOWN('Y')){
						flag = 1;
						break;
					}
					if(KEY_DOWN('N')){
						flag = 2;
						break;
					}	
				}
			}
			if(flag)	break;
			if(KEY_DOWN('1')){
				clear();
				cout<<"你有"<<money<<"元钱，精力为"<<jl<<"，生命值为"<<hp<<"，游戏天赋为"<<game<<"，安全度为"<<safe<<"，CF分数为"<<cf<<"\n";
				slow("选择你的赚钱方式：\n",20);
				cout<<"扣1去搬砖\n扣2当小偷\n";
				if(game>=25)cout<<"扣3去直播游戏\n";
				if(safe<=400)cout<<"扣4去抢劫\n";
				if(safe<=250)cout<<"扣5去绑架\n";
				cout << "扣6打工\n";
				if(money>=1000)cout<<"扣7创业\n";
				cout << "扣8直播带货\n";
				while(1){
					if(KEY_DOWN('1')){
						wait(2000,"搬砖中……");
						money+=50;
						jl-=50;
						break;
					}
					if(KEY_DOWN('2')){
						wait(5000,"正在偷东西……");
						jl-=50;
						if(random(10)) {
							money+=100;
							hp-=20;
							safe-=50;
						} else {
							cout<<"无功而返...\n";
							safe-=10;
						}
						break;
					}	
					if(KEY_DOWN('3') && game>=25){
						wait(7000-zbxl,"直播中……");
						jl-=100;
						hp-=20;
						money+=random(1000)+20+game+zbmp;
						game+=20;
						break;
					}	
					if(KEY_DOWN('4') && safe <= 400){
						wait(7000-zbxl,"不许动，打劫！");
						jl-=100;
						hp-=20;
						safe -= 70;
						money+=random(5000)+20;
						
						if(random(3) == 0){
							printf("你居然光天化日之下打劫！恭喜你喜提牢饭！\n损失10000Money！");
							fflush(stdin);
							money-=10000;
							yu = 1;
							safe -= 20;
						}
						sleep(1);
						break;
					}	
					if(KEY_DOWN('5') && safe <= 250){
						wait(5000,"绑架了路人……");
						jl-=120;
						hp-=120;
						money+=500;
						safe-=70;
						break;
					}
					if(KEY_DOWN('6')){
						wait(5000-xl,"进厂打工，好累呀！");
						money+=200;
						jl-=100;
						hp-=50;
						break;
					}
					if(KEY_DOWN('7') && money >= 1000){
						clear();
						if(random(3) == 0) {
							slow("你大赚一笔...\n",15);
							money+=2400+random(200);
						} else {
							slow("你的公司破产了...\n",15);
							money-=1000;
						}
						sleep(1);
						break;
					}
					if(KEY_DOWN('8')){
						clear();
						if(rand() % 4 >= 1){
							wait(1000,"直播中……");
							slow("热卖，赚5000",15);
							jl -= 5;
							money += 5000; 
						}else{
							wait(1000,"直播中……");
							slow("亏了12000",15);
							money -= 12000;
							jl -= 15;
							 safe -= 5;
						}
						pause();
						break;
					}
					Sleep(20);
				}
				pause();
				break;
			}
			if(KEY_DOWN('2')){
				clear();
				cout<<"你有"<<money<<"元钱，精力为"<<jl<<"，生命值为"<<hp<<"，游戏天赋为"<<game<<"，安全度为"<<safe<<"，CF分数为"<<cf<<"\n";
				slow("选择你的修养方式：\n",20);
				cout<<"扣1吃饭\n扣2睡觉\n扣3吃大餐\n";
				if(safe<=90||dpcs>0)cout<<"扣4吸“快乐粉”\n";
				if(dpcs>0)cout<<"扣5戒一天“快乐粉”\n";
				cout << "扣6喝提神药\n";
				while(1){
					if(KEY_DOWN('1')){
						wait(1000,"吃饭中……");
						money-=30;
						hp+=30;
						break;
					}
					if(KEY_DOWN('2')){
						title("模拟出生V1.2.99：重生---睡觉中……");
						clear();
						cout << "睡觉……\n做个好梦\n";
						load();
						jl+=100;
						safe+=rand() % 150;
						break;
					}	
					if(KEY_DOWN('3')){
						wait(2000,"订一顿大餐……");
						money-=150;
						jl+=100;
						hp+=100;
						break;
					}	
					if(KEY_DOWN('4') && safe <= 90){
						clear();
						Yan(4);
						cout<<"你感觉飘飘欲仙...\n";
						dpcs++;
						hp-=70;
						jl+=200;
						money-=400;
						break;
					}	
					if(KEY_DOWN('5') && dpcs > 0){
						wait(2000,"戒快乐粉中……");
						jl-=50;
						hp+=50;
						dpcs--;
						if(dpcs == 0)	Yan(0);
						break;
					}
					if(KEY_DOWN('6')){
						wait(5000,"买提神药中……");
						money-=100;
						jl+=300;
						hp -= 10;
						break;
					}
					Sleep(20);
				}
				pause();
				break;
			}
			//扣5网络赌博,打游戏，刷CF，买电脑 
			if(KEY_DOWN('3')){
				clear();
				cout<<"你有"<<money<<"元钱，精力为"<<jl<<"，生命值为"<<hp<<"，游戏天赋为"<<game<<"，安全度为"<<safe<<"，CF分数为"<<cf<<"\n";
				slow("选择一项：\n",30);
				cout<<"扣1买电脑\n";
				cout<<"扣2打游戏\n";
				cout<<"扣3刷CF\n";
				cout<<"扣4拍卖电脑\n";
				while(1){
					if(KEY_DOWN('2')){
						wait(3000,"打游戏中……"); 
						jl-=50;          
						game+=1+gamep;
						if(random(10)==0)game+=9;
						break;
					}
					if(KEY_DOWN('1')){
						clear();
						slow("你要买哪一个？\n",30);
						cout<<"扣1买普通笔记本(1000元)\n";
						cout<<"扣2买电竞笔记本(8888元)\n";
						cout<<"扣3买量子计算机(888888元)\n";
						cout<<"不支持小键盘输入\n";
						
							while(1){   
								if(KEY_DOWN('1')){
									if(havesc==0){
										money-=1000;
										xl=2000;
										gamep=1;
										zbxl=3000;
										zbmp=200;
										havesc=1;
									}else{
										cout << "已购买";
										sleep(1);
										clear();
									}
									break;
								}
								if(KEY_DOWN('2')){
									if(havegc==0) {
										money-=8888;
										xl=4999;
										gamep=5;
										zbxl=5000;
										zbmp=500;
										havegc=1;
									}else{
										cout << "已购买";
										sleep(1);
										clear();
									}
									break;
								}
								if(KEY_DOWN('3')){
									if(haveqc==0) {
										money-=888888;
										xl=5000;
										gamep=150;
										zbxl=6900;
										zbmp=28888;
										safe += 3333;
										haveqc=1;
									}else{
										cout << "已购买";
										sleep(1);
										clear();
									}
									break;
								}
								Sleep(20);
							}
							Sleep(400);
							break;
					}
					if(KEY_DOWN('3')){
						clear();
						cout << "是否抄题解？[Y/N]";
						while(1){
							if(KEY_DOWN('Y')){
								wait(1000,"抄题解中……");
								jl-=50;
								cf+=500;
								if(random(5) == 0){
									cout << "抄题解被发现了！";
									cf = 0; 
								}
								break; 
							}else if(KEY_DOWN('N')){
								wait(1000,"刷Codeforces中……");
								jl-=20;
								cf+=100;
								break;
							}
						}
						sleep(1);
						break;
					}
					if(KEY_DOWN('4')){
						system("cls");
						int buysc[7] = {555,788,888,999,1350,890,1020}; 
						int buygc[5] = {4444,4500,3250,7777,12050}; 
						int buyqc[5] = {1450,200000,99999,777777,1200050};
						if(!havegc && !havesc && !haveqc){
							slow("你没有电脑可以拍卖哦！",10);
							sleep(1); 
							break; 
						} 
						slow("你要拍卖哪台电脑？\n",10);
						if(havesc)	printf("1.普通笔记本\n");
						if(havegc)	printf("2.电竞笔记本\n");
						if(haveqc)	printf("3.量子计算机\n"); 
						while(1){
							if(KEY_DOWN('1') && havesc){
								while(1){
									system("cls");
									int buy = buysc[random(7)];
									bool f = 0;
									printf("某人出价%d,是否购买？[Y/N] \n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("成交！",20); 
											havesc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("那么换一个！",20); 
											f = 1;
											break;
										}
										Sleep(20);
									}
									if(!f)	break;
									sleep(1);
									continue;
								}
								break;
							}
							if(KEY_DOWN('2') && havegc){
								while(1){
									system("cls");
									int buy = buygc[random(5)];
									bool f = 0;
									printf("某人出价%d,是否购买？[Y/N]\n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("成交！",20); 
											havesc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("那么换一个！",20); 
											f = 1;
											break;
										}
										Sleep(20);
									}
									if(!f)	break;
									sleep(1);
									continue;
								}
								break;
							}
							if(KEY_DOWN('3') && haveqc){
								while(1){
									int buy = buyqc[random(5)];
									bool f = 0;
									system("cls");
									printf("某人出价%d,是否购买？[Y/N]\n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("成交！",20); 
											haveqc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("那么换一个！",20); 
											f = 1;
											break;
										}
										Sleep(20);
									}
									if(!f)	break;
									sleep(1);
									continue;
								}
								break;
							}
							Sleep(20);
						}
						break;
					}
				}
				
				break;
			}
			
		} 
		if(flag == 1)	break; 
		clear();
	}
	cout<<"欢迎下次进入\n";
	pause();
	freopen("surival.data","w",stdout);
	cout<<money<<" "<<jl<<" "<<hp<<" "<<game<<" "<<safe<<" "<<cf<< " " << dpcs << " " << havesc << " " << havegc << " " << haveqc << "\n";
	MessageBox(0, "存档成功", "系统", MB_OK);
	return 0;;
}

