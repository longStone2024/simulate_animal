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
	title("ģ�����V1.2.99������---�����С���");
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
	cout << "��ɣ�";
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
	title("ģ�����V1.2.99������---�����С���");
	printf("�����ϴ����ݣ�[Y/N]\n");
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

		title("ģ�����V1.2.99������");
		if(safe<=0||random(safe)==0 || yu) {
			yu = 0;
			if(safe>=500) {
				cout<<"�㱻����������...\n";
				money-=200;
				hp-=20;
				jl-=20;
				wait(5000,"�׼����С���");
				cout<<"�������...\n";
			} else if(safe<=0) {
				Yan(2);
				cout<<"�㱻ǹ��...\n";
				pause();
				return 0;
			} else {
				cout<<"��������...\n";
				money-=100;
				jl-=50;
				hp-=50;
				wait(5000,"�׼����С���");
				cout<<"�������...\n";
			}
		}
		if(hp<=0||dpcs>=5) {
			Yan(2);
			cout<<"������...\n";
			pause();
			return 0;
		}
		if(money<=0) {
			Yan(2);
			cout<<"��������...\n";
			pause();
			return 0;
		}
		if(jl<=0) {
			cout<<"���۵���...\n";
			sleep(2);
			cout<<"������..\n";
			jl=20;
		}
		clear();
		cout<<"����"<<money<<"ԪǮ������Ϊ"<<jl<<"������ֵΪ"<<hp<<"����Ϸ�츳Ϊ"<<game<<"����ȫ��Ϊ"<<safe<<"��CF����Ϊ"<<cf<<"\n";
		cout<<"��1ȥ׬Ǯ\n��2����\n��3����\n";
		cout<<"��esc�˳�\n";
		freopen("CON","r",stdin);
		int flag = 0;
		while(1){
			if(KEY_DOWN(VK_ESCAPE)){
				clear();
				cout << "ȷ��Ҫ�˳���[Y/N]\n";
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
				cout<<"����"<<money<<"ԪǮ������Ϊ"<<jl<<"������ֵΪ"<<hp<<"����Ϸ�츳Ϊ"<<game<<"����ȫ��Ϊ"<<safe<<"��CF����Ϊ"<<cf<<"\n";
				slow("ѡ�����׬Ǯ��ʽ��\n",20);
				cout<<"��1ȥ��ש\n��2��С͵\n";
				if(game>=25)cout<<"��3ȥֱ����Ϸ\n";
				if(safe<=400)cout<<"��4ȥ����\n";
				if(safe<=250)cout<<"��5ȥ���\n";
				cout << "��6��\n";
				if(money>=1000)cout<<"��7��ҵ\n";
				cout << "��8ֱ������\n";
				while(1){
					if(KEY_DOWN('1')){
						wait(2000,"��ש�С���");
						money+=50;
						jl-=50;
						break;
					}
					if(KEY_DOWN('2')){
						wait(5000,"����͵��������");
						jl-=50;
						if(random(10)) {
							money+=100;
							hp-=20;
							safe-=50;
						} else {
							cout<<"�޹�����...\n";
							safe-=10;
						}
						break;
					}	
					if(KEY_DOWN('3') && game>=25){
						wait(7000-zbxl,"ֱ���С���");
						jl-=100;
						hp-=20;
						money+=random(1000)+20+game+zbmp;
						game+=20;
						break;
					}	
					if(KEY_DOWN('4') && safe <= 400){
						wait(7000-zbxl,"��������٣�");
						jl-=100;
						hp-=20;
						safe -= 70;
						money+=random(5000)+20;
						
						if(random(3) == 0){
							printf("���Ȼ���컯��֮�´�٣���ϲ��ϲ���η���\n��ʧ10000Money��");
							fflush(stdin);
							money-=10000;
							yu = 1;
							safe -= 20;
						}
						sleep(1);
						break;
					}	
					if(KEY_DOWN('5') && safe <= 250){
						wait(5000,"�����·�ˡ���");
						jl-=120;
						hp-=120;
						money+=500;
						safe-=70;
						break;
					}
					if(KEY_DOWN('6')){
						wait(5000-xl,"�����򹤣�����ѽ��");
						money+=200;
						jl-=100;
						hp-=50;
						break;
					}
					if(KEY_DOWN('7') && money >= 1000){
						clear();
						if(random(3) == 0) {
							slow("���׬һ��...\n",15);
							money+=2400+random(200);
						} else {
							slow("��Ĺ�˾�Ʋ���...\n",15);
							money-=1000;
						}
						sleep(1);
						break;
					}
					if(KEY_DOWN('8')){
						clear();
						if(rand() % 4 >= 1){
							wait(1000,"ֱ���С���");
							slow("������׬5000",15);
							jl -= 5;
							money += 5000; 
						}else{
							wait(1000,"ֱ���С���");
							slow("����12000",15);
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
				cout<<"����"<<money<<"ԪǮ������Ϊ"<<jl<<"������ֵΪ"<<hp<<"����Ϸ�츳Ϊ"<<game<<"����ȫ��Ϊ"<<safe<<"��CF����Ϊ"<<cf<<"\n";
				slow("ѡ�����������ʽ��\n",20);
				cout<<"��1�Է�\n��2˯��\n��3�Դ��\n";
				if(safe<=90||dpcs>0)cout<<"��4�������ַۡ�\n";
				if(dpcs>0)cout<<"��5��һ�조���ַۡ�\n";
				cout << "��6������ҩ\n";
				while(1){
					if(KEY_DOWN('1')){
						wait(1000,"�Է��С���");
						money-=30;
						hp+=30;
						break;
					}
					if(KEY_DOWN('2')){
						title("ģ�����V1.2.99������---˯���С���");
						clear();
						cout << "˯������\n��������\n";
						load();
						jl+=100;
						safe+=rand() % 150;
						break;
					}	
					if(KEY_DOWN('3')){
						wait(2000,"��һ�ٴ�͡���");
						money-=150;
						jl+=100;
						hp+=100;
						break;
					}	
					if(KEY_DOWN('4') && safe <= 90){
						clear();
						Yan(4);
						cout<<"��о�ƮƮ����...\n";
						dpcs++;
						hp-=70;
						jl+=200;
						money-=400;
						break;
					}	
					if(KEY_DOWN('5') && dpcs > 0){
						wait(2000,"����ַ��С���");
						jl-=50;
						hp+=50;
						dpcs--;
						if(dpcs == 0)	Yan(0);
						break;
					}
					if(KEY_DOWN('6')){
						wait(5000,"������ҩ�С���");
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
			//��5����Ĳ�,����Ϸ��ˢCF������� 
			if(KEY_DOWN('3')){
				clear();
				cout<<"����"<<money<<"ԪǮ������Ϊ"<<jl<<"������ֵΪ"<<hp<<"����Ϸ�츳Ϊ"<<game<<"����ȫ��Ϊ"<<safe<<"��CF����Ϊ"<<cf<<"\n";
				slow("ѡ��һ�\n",30);
				cout<<"��1�����\n";
				cout<<"��2����Ϸ\n";
				cout<<"��3ˢCF\n";
				cout<<"��4��������\n";
				while(1){
					if(KEY_DOWN('2')){
						wait(3000,"����Ϸ�С���"); 
						jl-=50;          
						game+=1+gamep;
						if(random(10)==0)game+=9;
						break;
					}
					if(KEY_DOWN('1')){
						clear();
						slow("��Ҫ����һ����\n",30);
						cout<<"��1����ͨ�ʼǱ�(1000Ԫ)\n";
						cout<<"��2��羺�ʼǱ�(8888Ԫ)\n";
						cout<<"��3�����Ӽ����(888888Ԫ)\n";
						cout<<"��֧��С��������\n";
						
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
										cout << "�ѹ���";
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
										cout << "�ѹ���";
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
										cout << "�ѹ���";
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
						cout << "�Ƿ���⣿[Y/N]";
						while(1){
							if(KEY_DOWN('Y')){
								wait(1000,"������С���");
								jl-=50;
								cf+=500;
								if(random(5) == 0){
									cout << "����ⱻ�����ˣ�";
									cf = 0; 
								}
								break; 
							}else if(KEY_DOWN('N')){
								wait(1000,"ˢCodeforces�С���");
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
							slow("��û�е��Կ�������Ŷ��",10);
							sleep(1); 
							break; 
						} 
						slow("��Ҫ������̨���ԣ�\n",10);
						if(havesc)	printf("1.��ͨ�ʼǱ�\n");
						if(havegc)	printf("2.�羺�ʼǱ�\n");
						if(haveqc)	printf("3.���Ӽ����\n"); 
						while(1){
							if(KEY_DOWN('1') && havesc){
								while(1){
									system("cls");
									int buy = buysc[random(7)];
									bool f = 0;
									printf("ĳ�˳���%d,�Ƿ���[Y/N] \n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("�ɽ���",20); 
											havesc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("��ô��һ����",20); 
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
									printf("ĳ�˳���%d,�Ƿ���[Y/N]\n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("�ɽ���",20); 
											havesc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("��ô��һ����",20); 
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
									printf("ĳ�˳���%d,�Ƿ���[Y/N]\n",buy);
									while(1){
										
										if(KEY_DOWN('Y')){
											money += buy;
											slow("�ɽ���",20); 
											haveqc = 0;
											break;
										}
										if(KEY_DOWN('N')){
											slow("��ô��һ����",20); 
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
	cout<<"��ӭ�´ν���\n";
	pause();
	freopen("surival.data","w",stdout);
	cout<<money<<" "<<jl<<" "<<hp<<" "<<game<<" "<<safe<<" "<<cf<< " " << dpcs << " " << havesc << " " << havegc << " " << haveqc << "\n";
	MessageBox(0, "�浵�ɹ�", "ϵͳ", MB_OK);
	return 0;;
}

