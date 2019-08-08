#include<iostream>
#include<iomanip>
using namespace std;
 void main()
{char str[20];
cout<<"输入图形为:"<<endl;
cin>>str;
if(0==strcmp(str,"正方形"))
{double a,s;
char dw[20];
cout<<"输入边长:"<<endl;
cin>>a;
cout<<"输入单位:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;}
s=a*a;
cout<<"图形类型为:"<<str<<",边长为:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,面积为:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"三角形"))
{double a,b,s;
char dw[20];
cout<<"输入底和高:"<<endl;
cin>>a;
cin>>b;
cout<<"输入单位:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;
b=2.54*b;}
s=a*b*0.5;
cout<<"图形类型为:"<<str<<",底为:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,高为:"<<setiosflags(ios::fixed)<<setprecision(3)<<b<<"cm,面积为:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"长方形"))
{double a,b,s;
char dw[20];
cout<<"输入长和宽:"<<endl;
cin>>a;
cin>>b;
cout<<"输入单位:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;
b=2.54*b;}
s=a*b;
cout<<"图形类型为:"<<str<<",长为:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,宽为:"<<setiosflags(ios::fixed)<<setprecision(3)<<b<<"cm,面积为:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
if(0==strcmp(str,"圆形"))
{double a,s;
char dw[20];
cout<<"输入半径:"<<endl;
cin>>a;
cout<<"输入单位:"<<endl;
cin>>dw;
if(0==strcmp(dw,"in"))
{a=2.54*a;}
s=a*a*3.14;
cout<<"图形类型为:"<<str<<",半径为:"<<setiosflags(ios::fixed)<<setprecision(3)<<a<<"cm,面积为:"<<setiosflags(ios::fixed)<<setprecision(3)<<s<<"cm2"<<endl;
}
}
