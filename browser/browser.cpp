//---------------------------------------------------------------------------

#include <SysUtils.hpp>
#include <vcl.h>
#pragma hdrstop
#include "browser.h"
//#include "browser0.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
#include <stdio.h>
#include "hello.h"
#include "about.h"
#include "auth.h"
#include <string.h>
#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdlib.h>
WideString exec; 
struct ldcfg
{
unsigned char name[10240];
} golink[100];
int massiv[256];
int methodw;
int methodr;
int stepr;
int stepw;
int r1;
int r2;
int r3;
int com0=0;
//char file9[130];
char file0[130];

//------ENIGMA CODE------------------------------


enigmac8(unsigned char filew[], unsigned char filer[]) //??????? ???????? ???????????
/* ? ????????? ???????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ????????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ????? ? ???????, ?????? ????, ??????
????? ??????? ?? ???????? ??????? ????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew,ios::out);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
int h;
h=random(254)+1;
rnd = massiv[h];
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
for (int k =1; k <= stepr; k++)
{
int h;
h=random(254)+1;
rnd = massiv[h];
f << rnd << " ";
}
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
getch();
}

enigmac7(unsigned char filew[], unsigned char filer[]) //??????? ?????? ???????????
/* ? ????????? ???????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ??????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ????? ? ???????, ?????? ????, ??????
????? ??????? ?? ???????? ??????? ????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew,ios::out);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
int h;
h=random(254)+1;
rnd = massiv[h];
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (set != '~') //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
for (int k =1; k <= stepr; k++)
{
int h;
h=random(254)+1;
rnd = massiv[h];
f << rnd << " ";
}
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac6(unsigned char filew[], unsigned char filer[]) //???????? ?????? ??????? ???????????
/* ? ????????? ??????? ??????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ????????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ????? ? ???????, ?????? ????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew,ios::out);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
for (int k =1; k <= stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac5(unsigned char filew[], unsigned char filer[]) //?????? ?????? ??????? ???????????
/* ? ????????? ??????? ??????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ??????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ????? ? ???????, ?????? ????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
r.open(filer);
f.open(filew,ios::out);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
for (int k =1; k <= stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac4(unsigned char filew[], unsigned char filer[]) // ???????? ?????? ???????????
/* ? ????????? ????????? ??????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ????????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ?????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac3(unsigned char filew[], unsigned char filer[]) //?????? ?????? ???????????
/* ? ????????? ??????? ??????? ??????????? ???????
????????????? ????????? ??????? - {?????? ?????, ?????,
?????? ?????, ???, ?????? ?????, ??????? ???? ? ??????
??????? ? ???????, ?????? ???? ????? ?????? ??????
??????? ????, ?????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f << massiv[i] << " ";
for (int k=1; k <=stepr; k++)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac2(unsigned char filew[], unsigned char filer[]) //???????? ???????????
/* ? ????????? ????????? ??????????? ??????? ?????????????
????????? ??????? - {?????? ?????, ?????, ?????? ?????,
???, ?????? ?????, ??????? ???? ? ???????? ??????? ???
??????, ?????}*/
{
int num=0, temp, rnd;
getchar();
ofstream f;
ifstream r;
char set;
int x, z;
f.open(filew);
r.open(filer);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f << massiv[i] << " ";
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
num++;
temp=num%stepr;
if (temp == 0)
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x];
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac1(unsigned char filew[], unsigned char filer[]) //?????? ???????????
/* ? ????????? ??????? ??????????? ??????? ?????????????
????????? ??????? - {?????? ?????, ?????, ?????? ?????,
???, ?????? ?????, ??????? ???? ? ?????? ??????? ???
??????, ?????}*/
{
int num=0, temp, rnd, x, z;
getchar();
ofstream f;
ifstream r;
char set;
r.open(filer);
f.open(filew);
if (r && f)
{
f << r1 << " " << methodw << " " << r2 << " " << stepw << " " << r3 << " ";
for (int i=1; i < 255; i++) //??????? ??????? ????????
{                           //? ??????? ?????
f << massiv[i] << " ";
}
cout << "\nWrite secret info. To escape enter \"~\"\n";
while (!r.eof()) //???? ??????
{
//cout << "IN!";
//getch();
num++;          //????? ???????? ??????????? ????????
temp=num%stepr;
if (temp == 0)  //???????? ?? ?????????????? ? ????????? ?????
{
rnd = 100000000+random(900000000);
f << rnd << " ";
}
else {
r.get(set);
cout << set; //???? ?????
if (r.eof())
break;
x = set;
//if ((x >= -129 && x <= -80) || (x <= -16 && x > -80)) //?????????????? ??????? ????
if (x<0)
x = 256+x;
if (x>255)
x-=256;
if (x==255)
x = 223;
z=massiv[x]; //??????????? ? ???? ???????? ??????? ????
//cout << x;
//getch(); //!!!!
f << z;
f << " ";
}
}
}
f.close();
r.close();
}

enigmac(unsigned char filew[], unsigned char filer[]) //????????? ???????????
{
randomize();
r1=100000000+random(90000000); //??????????? ?????
r2=100000000+random(90000000); //??????????? ?????
r3=100000000+random(90000000); //??????????? ?????
stepr=random(4)+2;             //??????????? ?????????? ????
//cout << stepr;
stepw=100000000+stepr*(r1-100000000); //??????????? ???? ??????
methodr=(random(8)+1);                //??????????? ?????????? ??????
methodw=100000000+r1-r2+r3+methodr;   //??????????? ?????? ??????
for (int m = 1; m <= 256; m++)        //??????????? ???????
{                                     //???? ? ??????????????
for (int i = 1; i <= 256; i++)        //??????????? ????????? ??????????
{                                     //?????????? ?? ?????
for (int j = 1; j <= 256; j++)        //??????? ????????
{
if (massiv[i]==massiv[j] && i!=j)
massiv[i]=100000000+random(900000000);
}
}
}
//cout << methodr;
if (methodr == 1)               //???????? ??????????
enigmac1(filew,filer);                     //?????? ????????
if (methodr == 2)               //??????????????? ??????
enigmac2(filew,filer);
if (methodr == 3)
enigmac3(filew,filer);
if (methodr == 4)
enigmac4(filew,filer);
if (methodr == 5)
enigmac5(filew,filer);
if (methodr == 6)
enigmac6(filew,filer);
if (methodr == 7)
enigmac7(filew,filer);
if (methodr == 8)
enigmac8(filew,filer);
//if (methodr == 9)
//enigmac9();

/*---!!!!!???????? ?? ?????????!!!!!!!!!!!!!!!---
for (int i = 1; i <= 256; i++)
{
for (int j = 1; j <= 256; j++)
{
if (massiv[i]==massiv[j] && i!=j)
cout << "!";
}
}
*/
/*----????? ??????? ????------
cout << "\nr1: " << r1 << "\nr2: " << r2 << "\nr3: " << r3 << "\nMethod: " << method;
getch();
for (int i = 1; i <= 256; i++)
cout << " " << massiv[i];
*/
}

//----------Decoder Block------------------------
enigmad8(unsigned char file9[]) //???????? ??????? ??????????
{
//cout << "\nEnter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
 {
 x = 0;
 num++;
 temp=num%stepr;
 if (temp!=0)
  {
  f >> x;
  for (int i = 1; i < 255; i++)
  if (massiv[i]==x)
  {
   y = i;
   set = y;
   cout << set;
   if (!f.eof())
   r << set;
   //   cout << " write ";
  }
 }
 else for (int k =1; k <= stepr; k++)
 f >> temp;
}
r.close();
f.close();
}



enigmad7(unsigned char file9[]) //?????? ??????? ??????????
{
//cout << "\nEnter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0,ios::out);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
 {
 x = 0;
 num++;
 temp=num%stepr;
 if (temp!=0)
  {
  f >> x;
  for (int i = 1; i < 255; i++)
  if (massiv[i]==x)
  {
   y = i;
   set = y;
   cout << set;
   if (!f.eof())
   r << set;
  }
 }
 else for (int k =1; k <= stepr; k++)
 f >> temp;
}
f.close();
r.close();
}



enigmad6(unsigned char file9[]) //???????? ?????? ??????? ??????????
{
//cout << "\nEnter output file: "; cin >> file0;
int num=0, temp, rnd;
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0,ios::out);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
 {
 x = 0;
 num++;
 temp=num%stepr;
 if (temp!=0)
  {
  f >> x;
  for (int i = 1; i < 255; i++)
  if (massiv[i]==x)
  {
   y = i;
   set = y;
   cout << set;
   r << set;
  }
 }
 else for (int k =1; k <= stepr; k++)
 f >> temp;
}
f.close();
r.close();
}



enigmad5(unsigned char file9[]) //?????? ?????? ??????? ??????????
{
//cout << "Enter output file: "; cin >> file0;
int num=0, temp, rnd;
ofstream r;
ifstream f;
int x, z, y;
char set;
r.open(file0,ios::out);
f.open(file9);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
 {
 x = 0;
 num++;
 temp=num%stepr;
 if (temp!=0)
  {
  f >> x;
  for (int i = 1; i < 255; i++)
  if (massiv[i]==x)
  {
   y = i;
   set = y;
   cout << set;
   r << set;
  }
 }
 else for (int k =1; k <= stepr; k++)
 f >> temp;
}
f.close();
r.close();
}



enigmad4(unsigned char file9[]) //???????? ?????? ??????????
{
//cout << "\Enter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
{
x = 0;
num++;
temp=num%stepr;
if (temp!=0)
{
f >> x;
for (int i = 1; i < 255; i++)
if (massiv[i]==x)
{
y = i;
set = y;
cout << set;
r << set;
}
}
}
f.close();
r.close();
}


enigmad3(unsigned char file9[]) //?????? ?????? ??????????
{
//cout << "\Enter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f >> massiv[i];
for (int k=1; k <=stepr; k++)
f >> temp;
}
while (!f.eof())
 {
 x = 0;
 num++;
 temp=num%stepr;
 if (temp!=0)
  {
  f >> x;
  for (int i = 1; i < 255; i++)
  if (massiv[i]==x)
  {
   y = i;
   set = y;
   cout << set;
   r << set;
  }
 }
}
f.close();
r.close();
}



enigmad2(unsigned char file9[]) //???????? ??????????
{
//cout << "\Enter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
f.open(file9);
r.open(file0,ios::out);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=254; i >= 1; i--) //??????? ??????? ????????
{
f >> massiv[i];
}
while (!f.eof())
{
x = 0;
num++;
temp=num%stepr;
if (temp!=0)
{
f >> x;
for (int i = 1; i < 255; i++)
if (massiv[i]==x)
{
y = i;
set = y;
cout << set;
r << set;
}
}
}
f.close();
r.close();
}



enigmad1(unsigned char file9[]) //?????? ??????????
{
//cout << "\Enter output file: "; cin >> file0;
int num=0, temp, rnd;
getchar();
ifstream f;
ofstream r;
int x, z, y;
char set;
r.open(file0,ios::out);
f.open(file9);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000);
methodr=methodw-100000000-r1+r2-r3;
for (int i=1; i < 255; i++) //??????? ??????? ????????
{
f >> massiv[i];
}
while (!f.eof())
{
x = 0;
num++;
temp=num%stepr;
if (temp!=0)    //???????? ?? ???????? ???????
{
f >> x;
for (int i = 1; i < 255; i++) //????????? ??????? ? ???????? ????
if (massiv[i]==x)             //? ?????? ??????? ?? ??????
{
y = i;
set = y;
cout << set;
r << set;
}
}
}
f.close();
r.close();
}

enigmad(unsigned char file9[]) //????????? ??????????
{
ifstream f;
//ofstream k;
int x, z, y;
char set;
//k.open("index.html");
//k << file9;
//k.close();
//cout << "\nEnter filename: "; cin >> file;
f.open(file9);
f >> r1 >> methodw >> r2 >> stepw >> r3;
stepr=(stepw-100000000)/(r1-100000000); //???????? ???
methodr=methodw-100000000-r1+r2-r3;     //???????? ?????
//k << " " << methodr << "267947947";
//k.close();
f.close();
while(f)
f.close();
if (methodr == 1) //????? ????????? ??????????
enigmad1(file9);
if (methodr == 2)
enigmad2(file9);
if (methodr == 3)
enigmad3(file9);
if (methodr == 4)
enigmad4(file9);
if (methodr == 5)
enigmad5(file9);
if (methodr == 6)
enigmad6(file9);
if (methodr == 7)
enigmad7(file9);
if (methodr == 8)
enigmad8(file9);
//if (methodr == 9)
//enigmad9();
}


deleter(char file9[])
{
char s;
ofstream f;
f.open(file9,ios::trunc);
if(!f)
{
cout << "\n\nFile can not be deleted\n\n";
}
f.close();
while (f)
f.close();
}


//-----------------------------------------------


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}

//-----------------------------------------------------

encode_dos()
{
unsigned char temp0[10240];
unsigned char file9[10240];
int i=1;
WideString t;
t=exec;
while (t[i]!=0)
 {
   temp0[i]=t[i];
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  file9[i]=temp0[i+1];
  i++;
 }
com0=0;
ifstream y;
y.open(file9);
if (!y)
exit(2);
y >> golink[com0].name;
while (!y.eof())
{
y >> golink[com0].name;
int h=0;
while (golink[com0].name[h]!='\0')
{
golink[com0].name[h]+=7;
h++;
}
if (y.eof())
break;
com0++;
}
com0=0;
y.close();
while(y)
y.close();
strcpy(temp0,golink[com0].name);
com0=1;
const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
strcpy(file0,dest);
enigmad(temp0);
//CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
strcpy(temp0,dest);
}


encode_cod()
{
const char dest[]="C:\\WINDOWS\\TEMP\\index.html";
strcpy(file0,dest);
unsigned char temp0[10240];
unsigned char file9[10240];
int i=1;
WideString t;
t=exec;
while (t[i]!=0)
 {
   //if (t[i]!='\\')
   temp0[i]=t[i];
   //else
   //file9[i]='/';
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  file9[i]=temp0[i+1];
  i++;
 }
 file9[i]='\0';
 i=1;
enigmad(file9);
com0=1;
for (int r=1; r<100; r++)
{
golink[r].name[0]='\0';
}
}


//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
//char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
//deleter(dest);
AnsiString fext;
fext=ExtractFileExt(exec);
CBURL->Text=fext;
if (fext=="\.cod" || fext=="\.COD")
{
encode_cod();
CppWebBrowser1->Navigate(WideString("C:\\WINDOWS\\TEMP\\index.html"));
CBURL->Text=exec;
SpeedButton2->Enabled=false;
SpeedButton1->Enabled=false;
}
else if (fext=="\.dos" || fext=="\.DOS" || fext=="\.dob" || fext=="\.DOB")
{
encode_dos();
CppWebBrowser1->Navigate(WideString("C:\\WINDOWS\\TEMP\\index.html"));
CBURL->Text=exec;
SpeedButton2->Enabled=true;
}
else
CppWebBrowser1->Navigate(WideString(exec));
//CBURL->Text=exec;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
if (OpenDialog1->Execute())
 {
unsigned char temp0[10240];
unsigned char file9[10240];
int i=1;
WideString t;
t=OpenDialog1->FileName;
while (t[i]!=0)
 {
   //if (t[i]!='\\')
   temp0[i]=t[i];
   //else
   //file9[i]='/';
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  file9[i]=temp0[i+1];
  i++;
 }
 file9[i]='\0';
 i=1;
const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
CBURL->Text=t;
strcpy(file0,dest);
enigmad(file9);
strcpy(file9,dest);
com0=1;
for (int r=1; r<100; r++)
{
golink[r].name[0]='\0';
}
SpeedButton2->Enabled=false;
SpeedButton1->Enabled=false;
CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
//deleter(file9);
 }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::N3Click(TObject *Sender)
{
if (OpenDialog3->Execute())
 {
unsigned char temp0[10240];
unsigned char file9[10240];
int i=1;
WideString t;
t=OpenDialog3->FileName;
while (t[i]!=0)
 {
   temp0[i]=t[i];
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  file9[i]=temp0[i+1];
  i++;
 }
com0=0;
ifstream y;
y.open(file9);
if (!y)
exit(2);
y >> golink[com0].name;
while (!y.eof())
{
y >> golink[com0].name;
int h=0;
while (golink[com0].name[h]!='\0')
{
golink[com0].name[h]+=7;
h++;
}
if (y.eof())
break;
com0++;
}
com0=0;
y.close();
while(y)
y.close();
strcpy(temp0,golink[com0].name);
com0=1;
CBURL->Text=t;
SpeedButton2->Enabled=true;
const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
strcpy(file0,dest);
enigmad(temp0);
CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
strcpy(temp0,dest);
//deleter(temp0);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
if (OpenDialog2->Execute())
 {
unsigned char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
deleter(dest);
for (int r=1; r<100; r++)
{
golink[r].name[0]='\0';
}
com0=0;
 CppWebBrowser1->Navigate(WideString(OpenDialog2->FileName));
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
if (com0!=0)
 {
 unsigned char temp0[10240];
 if (golink[com0+1].name[0]=='\0')
 {
 SpeedButton2->Enabled=false;
 }
 strcpy(temp0,golink[com0].name);
 const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
 strcpy(file0,dest);
 enigmad(temp0);
 CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
 strcpy(temp0,dest);
 com0++;
 SpeedButton1->Enabled=true;
 }
 else
  {
  CBURL->Text = CBURL->Items->Strings[CBURL->ItemIndex - 1];
  Load();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
unsigned char temp0[10240];
if (com0!=0)
{
if (com0-1==1)
 {
  com0-=2;
  strcpy(temp0,golink[com0].name);
  const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
  strcpy(file0,dest);
  enigmad(temp0);
  CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
  strcpy(temp0,dest);
  com0++;
  SpeedButton2->Enabled=true;
  SpeedButton1->Enabled=false;
  }
  else if (com0!=1)
  {
  com0-=2;
  strcpy(temp0,golink[com0].name);
  const char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
  strcpy(file0,dest);
  enigmad(temp0);
  CppWebBrowser1->Navigate(WideString("C:/WINDOWS/TEMP/index.htm"));
  strcpy(temp0,dest);
  com0++;
  SpeedButton2->Enabled=true;
  }
else
  {
  SpeedButton2->Enabled=true;
  SpeedButton1->Enabled=false;
  }
}
else
 {
 CBURL->Text = CBURL->Items->Strings[CBURL->ItemIndex + 1];
 Load();
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CBURLKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_RETURN) Load();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Load()
{
CppWebBrowser1->Navigate(WideString(CBURL->Text));
}
void __fastcall TForm1::CBURLClick(TObject *Sender)
{
Load();
}


//---------------------------------------------------------------------------

void __fastcall TForm1::CppWebBrowser1BeforeNavigate2(TObject *Sender,
      LPDISPATCH pDisp, Variant *URL, Variant *Flags,
      Variant *TargetFrameName, Variant *PostData, Variant *Headers,
      VARIANT_BOOL *Cancel)
{
if (com0==0)
{
int Index = CBURL->Items->IndexOf(AnsiString(*URL));
if (Index == -1)
 {
 CBURL->Items->Insert(0,AnsiString(*URL));
 CBURL->ItemIndex = 0;
 }
else CBURL->ItemIndex = Index;
SpeedButton2->Enabled = (CBURL->ItemIndex > 0);
SpeedButton1->Enabled = (CBURL->ItemIndex < CBURL->Items->Count - 1);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CppWebBrowser1ProgressChange(TObject *Sender,
      long Progress, long ProgressMax)
{
int rom=0;
randomize();
AnsiString t1="������ ��������? ���������� � TDSV!";
AnsiString t2="�� �����? Viewer ����� �������� ��� �����, ������������������ � Windows";
AnsiString t3="�� �����? �� ������ ������������ ������ DOB � DOS ��� ������� ������ � ������� COD";
AnsiString t4="���� �� �������� ����� - �� ������� - ���������� � TDSV";
AnsiString t5="�� �����? �� ������ ��������� ����� ��������� ���� (��� HTML) ����� � TDSV Enigma COD";
AnsiString t6="�� �����? ��������� �������� ����� DOS � COD ������";
AnsiString t7="�� �����? �� ����������� ���������� � ������� ��������� �� ������ ��������� �� http://illusionist7.narod.ru";
AnsiString t8="�� �����? ���������� ������ COD-������ - HTML";
AnsiString t9="�� �����? TDSV Viewer ������������ ��� ����������� ��������� �������� ������";
AnsiString t10="�� �����? TDSV Viewer - ��� ��� � ������� ������������ Mozilla-����������� ���������";
AnsiString t11="�������� - ������. ��� ������� �� ����� ������� ��� ����������!";
AnsiString t12="�� �����? ������ ��� ���������� ������ �� ��������� - HTML, ��� ������� �� ������ ������ ���� ����������";
AnsiString t13="�� ������� �� �������� - ��� ������ ��������� � ���� �����";
AnsiString t14="���, ��� ����� ��-���������� ������ �������� - ����� ���� ���";
AnsiString t15="��������� ������ ��������";
AnsiString t16="��������� ������ ��� �������";
AnsiString t17="���� �����, ����� �������� ������, ��� �������. �� ���� ��� ����, ���� ������� ������, ��� ��������";
AnsiString t18="������������ �������� ������������, ����� ����� ������������ ��";
AnsiString t19="���������� �������� ������� ����������� ����";
AnsiString t20="��� ������� ������ ������� � ������ �������, ��� ������ ������� �����";
AnsiString t21="����� �� ����� ����� ����, ���� �� �� ����������";
AnsiString t22="��� ������ � ���� ����, ��� ������ � �����";
AnsiString t23="Carpe Diem";
AnsiString t24="��� ���� ������ - ����� ���������";
AnsiString t25="������ ����� �������� �����, ������� � ������������ ��������� �������� �������� �������� ������� �������";
AnsiString t26="��������� �� ������� �������� �������� ���� ����� ����� �������������";
AnsiString t27="������� ���-�� ������, ��� � �������� ������ ���� ��� ������� - ��� ����� � ��� ��� �����";
AnsiString t28="����� ��������� ����, ������ �������";
AnsiString t29="���� ����������� ��������";
AnsiString t30="���������� � �������";
AnsiString t31="���� ��� - ���� ������: ������� ����� � �������� ������ � ��� ������� �����. � ��� ����� �������� ������ �� ����� ��� ���� ����� � ���������� ���";
AnsiString t32="������ �� �� ����������� �� ������, ������ �� ��� - ���� �� �������";
AnsiString t33="����� �� ������ ��� �����. ��� �������, ������� � �����. ������ �������. ��������� ����. � ��� ������ � �������� ����������";
AnsiString t34="������ ��������� � ����, ��� �� ��������";
AnsiString t35="����� ������� ���-�� � ������ �� ����, ��� �� ������� � ������ �� ����";
AnsiString t36="������� -  ��� ����� �� ���������, ����������� �� ������ ��������";
AnsiString t37="� ������� - � ������ ���� �������";
AnsiString t38="������ � �������� - �������������";
AnsiString t39="��� ������� ���������� ����������� ������";
AnsiString t40="� ���� ������ ������. ��� ���� ������";
AnsiString t41="�������� ������ �����, ������ ������ ������ �� ����";
AnsiString t42="������ �� ���� ������� � ��������!";
AnsiString t43="�� �� �� ������ ���������� ������� ��������. ���� ������� ��������";
AnsiString t44="�� ������ ������ ����� ���������!";
AnsiString t45="����� ���� �� ����� ���� ����� ����� ����, ���� ������ ��� �� �����";
AnsiString t46="�� ������������ ������� �� ������ �������";
AnsiString t47="�����������, ����� ����� �����, ���� �� �� ������ ������� �����";
AnsiString t48="���� ���� �������, �� � ���� ������� ����� ��������� ���, ��� �� ��� �������� ������ �������";
AnsiString t49="��������� �� ��������";
AnsiString t50="������ ��� �� �������, ��� ���������� ��� ����";
AnsiString t51="�� ��������, ��� ����, ��� �� ���-�� �������";
AnsiString t52="���� ������ �� ������, ���� �� ������ ��������� ������� ������ �������� ��� ���������� ������";
AnsiString t53="�� � �� �������� ������� ����� ���� �� ������";
AnsiString t54="\"�� ������ �� ����-��, ����������?\" - \"��� �� ���\" - �������� �������� ��������� - \"����� ��� �� ����\"";
AnsiString t55="��� ��� �� �� ����. ��� ��� � ���� �����. � ���� �����. � ���� ����";
AnsiString t56="�������� ���������� ����� ������ - ��� ������������ ��������� ����������� ���������";
AnsiString t57="��� ������������ ������������� - �� ������, � ��� �������������� ���� - ������ ���";
AnsiString t58="������ �� �� ��������. ������ �������� ��� �� ���� ������ � ��������";
AnsiString t59="��� �������������� ����� � �������� � ���� ������? ����������� � TDSV!";
rom=random(59)+1;
if (rom==1)
StatusBar1->SimpleText = t1;
if (rom==2)
StatusBar1->SimpleText = t2;
if (rom==3)
StatusBar1->SimpleText = t3;
if (rom==4)
StatusBar1->SimpleText = t4;
if (rom==5)
StatusBar1->SimpleText = t5;
if (rom==6)
StatusBar1->SimpleText = t6;
if (rom==7)
StatusBar1->SimpleText = t7;
if (rom==8)
StatusBar1->SimpleText = t8;
if (rom==9)
StatusBar1->SimpleText = t9;
if (rom==10)
StatusBar1->SimpleText = t10;
if (rom==11)
StatusBar1->SimpleText = t11;
if (rom==12)
StatusBar1->SimpleText = t12;
if (rom==13)
StatusBar1->SimpleText = t13;
if (rom==14)
StatusBar1->SimpleText = t14;
if (rom==15)
StatusBar1->SimpleText = t15;
if (rom==16)
StatusBar1->SimpleText = t16;
if (rom==17)
StatusBar1->SimpleText = t17;
if (rom==18)
StatusBar1->SimpleText = t18;
if (rom==19)
StatusBar1->SimpleText = t19;
if (rom==20)
StatusBar1->SimpleText = t20;
if (rom==21)
StatusBar1->SimpleText = t21;
if (rom==22)
StatusBar1->SimpleText = t22;
if (rom==23)
StatusBar1->SimpleText = t23;
if (rom==24)
StatusBar1->SimpleText = t24;
if (rom==25)
StatusBar1->SimpleText = t25;
if (rom==26)
StatusBar1->SimpleText = t26;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
unsigned char dest[]="C:\\WINDOWS\\TEMP\\index.htm";
deleter(dest);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)
{
FLog->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
CppWebBrowser1->GoHome();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
CppWebBrowser1->Navigate(WideString("http://illusionist7.narod.ru"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
if (com0==0)
CppWebBrowser1->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
if (com0==0)
CppWebBrowser1->Stop();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
FProg->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TDSVViewer1Click(TObject *Sender)
{
CppWebBrowser1->Navigate(WideString("http://illusionist7.narod.ru"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
FAvt->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N5Click(TObject *Sender)
{
if (SaveDialog1->Execute() && com0==0)
 {
 WideString t, m;
 unsigned char filew[10240];
 unsigned char filer[10240];
 ifstream r;
 ofstream w;
unsigned char temp0[10240];
unsigned char temp1[10240];
int i=1;
t=CBURL->Text;
m=SaveDialog1->FileName;
while (t[i]!=0)
 {
   temp0[i]=t[i];
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  filer[i]=temp0[i+1];
  i++;
 }
 filer[i]='\0';
 i=1;
while (m[i]!=0)
 {
   temp1[i]=m[i];
   i++;
 }
temp1[i]='\0';
i=0;
int err=0;
while (temp1[i+1]!='\0')
 {
  filew[i]=temp1[i+1];
  if (temp1[i+1]=='\.')
  err++;
  i++;
 }
 if (err==0)
 {
 filew[i]='\.'; filew[i+1]='h'; filew[i+2]='t'; filew[i+3]='m'; filew[i+4]='l';
 i+=5;
 }
 filew[i]='\0';
 r.open(filer);
 if (!r) StatusBar1->SimpleText="���� ������ ���������";
 ofstream k;
// k.open("index.txt");
// k << filer << " " << filew;
// k.close();
 w.open(filew);
 if (!w) StatusBar1->SimpleText="������ ����������. ���������� �����.";
 char templet[10240];
 if (w && r)
 StatusBar1->SimpleText="���� ��������";
 r.getline(templet,10240);
 while (!r.eof() && w && r)
 {
 w << templet << endl;
 r.getline(templet,1024);
 }
 w << templet << endl;
r.close(); w.close();
 }
 if (com0!=0)
 {
 StatusBar1->SimpleText="����� Enigma ��������� ������";
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::COD1Click(TObject *Sender)
{
if (SaveDialog2->Execute() && com0==0)
 {
 WideString t, m;
 unsigned char filew[10240];
 unsigned char filer[10240];
 ifstream r;
 ofstream w;
unsigned char temp0[10240];
unsigned char temp1[10240];
int i=1;
t=CBURL->Text;
m=SaveDialog2->FileName;
while (t[i]!=0)
 {
   temp0[i]=t[i];
   i++;
 }
temp0[i]='\0';
i=0;
while (temp0[i+1]!='\0')
 {
  filer[i]=temp0[i+1];
  i++;
 }
 filer[i]='\0';
 i=1;
while (m[i]!=0)
 {
   temp1[i]=m[i];
   i++;
 }
temp1[i]='\0';
i=0;
int err=0;
while (temp1[i+1]!='\0')
 {
  filew[i]=temp1[i+1];
  if (temp1[i+1]=='\.')
  err++;
  i++;
 }
 if (err==0)
 {
 filew[i]='\.'; filew[i+1]='c'; filew[i+2]='o'; filew[i+3]='d';
 i+=4;
 }
 filew[i]='\0';
 enigmac(filew,filer);
 }
 if (com0!=0)
 {
 StatusBar1->SimpleText="����� Enigma ��������� ������";
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
if (CppWebBrowser1->Offline==false)
{
CppWebBrowser1->Offline=true;
N10->Checked=true;
}
else
{
CppWebBrowser1->Offline=false;
N10->Checked=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
if (PrintDialog1->Execute() && com0==0)
{
int i=1;
unsigned char pr0[10240], pr1[10240];
WideString t;
t=CBURL->Text;
while (t[i]!=0)
{
pr0[i-1]=t[i];
i++;
}
i=0;
while (pr0[i+1]!='\0')
{
pr1[i]=pr0[i+1];
i++;
}
ShellExecute(Handle, "print", pr1, NULL,NULL,SW_HIDE);
}
}
//---------------------------------------------------------------------------

TRegistry *Reg0 = new TRegistry;

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (CBURL->Text[1]!=0 && CBURL->Text!="Enter adress here" && com0==0)
{
AnsiString t;
t=CBURL->Text;
Reg0->RootKey = HKEY_LOCAL_MACHINE;
Reg0->OpenKey("\\Software\\Microsoft\\Internet Explorer\\Main",true);
Reg0->WriteString("Start Page",t);
}
}
//---------------------------------------------------------------------------
/*
//����������� � �������
//����������� � ROOT
Reg0->RootKey = HKEY_CLASSES_ROOT;
//����������� COD
Reg0->OpenKey("\\.cod",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//����������� DOS
Reg0->OpenKey("\\.dos",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//����������� DOB
Reg0->OpenKey("\\.dob",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//����������� ILKC
Reg0->OpenKey("\\.ilkc",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//����������� � LOCAL_MACHINE
Reg0->RootKey = HKEY_LOCAL_MACHINE;
//����������� COD
Reg0->OpenKey("\\Software\\Classes\\.cod",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//����������� DOS
Reg0->OpenKey("\\Software\\Classes\\.dos",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//����������� DOB
Reg0->OpenKey("\\Software\\Classes\\.dob",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//����������� ILKC
Reg0->OpenKey("\\Software\\Classes\\.ilkc",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");

ForceDirectories("C:\\Program Files\\TDSV");
RenameFile("D:\\TDSVV.ex0","C:\\Program Files\\TDSV\\TDSVViewer.exe");
//remove("C:\\Program Files\\TDSV\\TDSVViewer.exe");
//RemoveDir("C:\\Program Files\\TDSV");
if (DirectoryExist("C:\\Documents and Settings\\All Users\\������� ����\\���������")==true)
RenameFile("TDSVV.ln0","C:\\Documents and Settings\\All Users\\������� ����\\���������\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\Documents and Settings\\All Users\\Main Menu\\Programs")==true)
RenameFile("TDSVV.ln0","C:\\Documents and Settings\\All Users\\Main Menu\\Programs\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\WINDOWS\\Main Menu\\Programs")==true)
RenameFile("TDSVV.ln0","C:\\WINDOWS\\Main Menu\\Programs\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\WINDOWS\\������� ����\\���������")==true)
RenameFile("TDSVV.ln0","C:\\WINDOWS\\������� ����\\���������\\TDSVV.lnk");
if (DirectoryExist("C:\\Documents and Settings\\All Users\\������� ����")==true)
RenameFile("TDSVV.ln1","C:\\Documents and Settings\\All Users\\������� ����\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\Documents and Settings\\All Users\\Desktop")==true)
RenameFile("TDSVV.ln1","C:\\Documents and Settings\\All Users\\Desktop\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\WINDOWS\\Desktop")==true)
RenameFile("TDSVV.ln1","C:\\WINDOWS\\Desktop\\TDSV Viewer.lnk");
if (DirectoryExist("C:\\WINDOWS\\������� ����")==true)
RenameFile("TDSVV.ln1","C:\\WINDOWS\\������� ����\\TDSV Viewer.lnk");

//��������
remove("C:\\Program Files\\TDSV\\TDSVViewer.exe");
RemoveDir("C:\\Program Files\\TDSV");
remove("C:\\Documents and Settings\\All Users\\������� ����\\���������\\TDSV Viewer.lnk");
remove("C:\\Documents and Settings\\All Users\\Main Menu\\Programs\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Main Menu\\Programs\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\������� ����\\���������\\TDSVV.lnk");
remove("C:\\Documents and Settings\\All Users\\������� ����\\TDSV Viewer.lnk");
remove("C:\\Documents and Settings\\All Users\\Desktop\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Desktop\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\������� ����\\TDSV Viewer.lnk");
Reg0->RootKey = HKEY_LOCAL_MACHINE;
Reg0->DeleteKey("\\Software\\Classes\\.cod\\shell",true);
Reg0->DeleteKey("\\Software\\Classes\\.dos\\shell",true);
Reg0->DeleteKey("\\Software\\Classes\\.dob\\shell",true);
Reg0->DeleteKey("\\Software\\Classes\\.ilck\\shell",true);*/
