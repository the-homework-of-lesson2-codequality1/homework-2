#include<iostream>
#include<iomanip>
using namespace std;
 void main()
{char str[20];
cout<<"����ͼ��Ϊ:"<<endl;
cin>>str;
if(0==strcmp(str,"������"))
{double a,s;
char dw[20];
cout<<"����߳�:"<<endl;
cin>>a;
cout<<"���뵥λ:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;}
s=a*a;
cout<<"ͼ������Ϊ:"<<str<<",�߳�Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,���Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"������"))
{double a,b,s;
char dw[20];
cout<<"����׺͸�:"<<endl;
cin>>a;
cin>>b;
cout<<"���뵥λ:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;
b=2.54*b;}
s=a*b*0.5;
cout<<"ͼ������Ϊ:"<<str<<",��Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,��Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<b<<"cm,���Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"������"))
{double a,b,s;
char dw[20];
cout<<"���볤�Ϳ�:"<<endl;
cin>>a;
cin>>b;
cout<<"���뵥λ:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;
b=2.54*b;}
s=a*b;
cout<<"ͼ������Ϊ:"<<str<<",��Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,��Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<b<<"cm,���Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"Բ��"))
{double a,s;
char dw[20];
cout<<"����뾶:"<<endl;
cin>>a;
cout<<"���뵥λ:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;}
s=a*a*3.14;
cout<<"ͼ������Ϊ:"<<str<<",�뾶Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,���Ϊ:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
}
