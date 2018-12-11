//Preprocessor directives
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Students struct
struct student
{
 string fstName, lstName, Registration, classes; }studentData;//Variable of student type

//Teachers struct
struct teacher
{
 string fst_name, lst_name, qualification, Experience, pay, subj, addrs, cel_no; }teach[50];//Variable of teacher type

//Main function
int main()
{

int i=0,j=0;
char choice;
string find, search;

for( ; ; )//outer loop
{ 
 system("cls");//Clear screen

//The Main Screen
 cout<<"\t\t\t\t\t SCHOOL MANAGEMENT SYSTEM \n\n";
 cout<<"Input \'1\' to go to student's screen"<<endl;
 cout<<"Input \'2\' to go to teacher's screen"<<endl;
 cout<<"Input \'3\' to Exit program \n"<<endl;
 cout<<"Make your Entry: ";cin>>choice;

system("cls");//clear screen

switch(choice) //1st switch-case
{
case '1': //Student
 { 
for(; ;)//inner loop-'1'
{ 
system("cls");//Clear screen
//Level-'2' display
cout<<"\t\t\t\t\t STUDENTS INFORMATION AND BIO DATA SCREEN\n\n";
cout<<"Input \'1\' to Create new entry\n";
cout<<"Input \'2\' to Find and display entry\n";
cout<<"Input \'3\' to go to Main Screen \n\n";
cout<<"Make your Input: ";cin>>choice;

switch (choice) //2nd Switch-case
{
case '1':
{  ofstream f1("student.txt",ios::app);//writing to text file, student

for( i=0;choice!='N'&&choice!='n';i++)
{
if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First Name: ";
 cin>>studentData.fstName;
 cout<<"Enter Last Name: ";
 cin>>studentData.lstName;
 cout<<"Enter Registration Number: ";
 cin>>studentData.Registration;
 cout<<"Enter Class of student: ";
 cin>>studentData.classes;
 
 f1<<studentData.fstName<<endl<<studentData.lstName<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
 cout<<"Do you want to enter data: ";
 cout<<"Press \"Y\" to Continue and \"N\" to Stop: ";cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -'1'

case '2'://Display data
{  ifstream f2("student.txt"); 

cout<<"Enter First Name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fstName);

if(studentData.fstName==find)
{
 notFound = '1';
 cout<<"First Name: "<<studentData.fstName<<endl;
 cout<<"Last Name: "<<studentData.lstName<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen


}
continue;//control back to inner loop -'1'

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-'1' breaking
}
continue;//Control pass to '1'st loop    
}

case '2'://Teachers biodata
{ 
for(; ;)//inner loop-'2'
{ 
system("cls");//Clear screen
//Level-'2' Display process
cout<<"\t\t\t\t\t TEACHERS INFORMATION AND BIODATA SECTION\n\n";
cout<<"Input '1' to Create new entry\n";
cout<<"Input '2' to Find and display entry\n";
cout<<"Input '3' to go to Main Screen\n";
cout<<"Make your input: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("teacher.txt",ios::app);//writing to text file, teacher

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Enter First Name: ";
  cin>>teach[i].fst_name;
  cout<<"Enter Last Name:: ";
  cin>>teach[i].lst_name;
  cout<<"Enter Qualification: ";
  cin>>teach[i].qualification;
  cout<<"Enter Experience(year): ";
  cin>>teach[i].Experience;
  cout<<"Enter Subject you teach: ";
  cin>>teach[i].subj;
  cout<<"Enter Salary recieved: ";
  cin>>teach[i].pay;
  cout<<"Enter Phone Number: ";
  cin>>teach[i].cel_no;
  
  
  t1<<teach[i].fst_name<<endl<<teach[i].lst_name<<endl 
   <<teach[i].qualification<<endl<<teach[i].Experience
   <<endl<<teach[i].subj<<endl<<teach[i].pay
   <<endl<<teach[i].cel_no<<endl;
  cout<<"Do you want to enter data: ";
   cout<<"Press \"Y\" to Continue and \"N\" to Stop: ";cin>>choice;
 }//if
}//for loop
//for finding through name 
system("cls");



t1.close();
}//case '1'

continue;//Control pass to inner loop-'2'

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 

cout<<"Enter First Name to display teacher's information: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,teach[j].fst_name);
 
 if(teach[j].fst_name==find)
 {
  notFound = '1';
  cout<<"First name: "<<teach[j].fst_name<<endl;
  getline(t2,teach[j].lst_name);
  cout<<"Last name: "<<teach[j].lst_name<<endl;
  getline(t2,teach[j].qualification);
  cout<<"Qualification: "<<teach[j].qualification<<endl;
  getline(t2,teach[j].Experience);
  cout<<"Experience: "<<teach[j].Experience<<endl;

  getline(t2,teach[j].subj);
  cout<<"Subject you teach: "<<teach[j].subj<<endl;

  getline(t2,teach[j].pay);
  cout<<"Salary: "<<teach[j].pay<<endl;

  getline(t2,teach[j].addrs);
  cout<<"Address: "<<teach[j].addrs<<endl;

  getline(t2,teach[j].cel_no);
  cout<<"Phone Number: "<<teach[j].cel_no<<endl;

 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"No Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
}//case '2'

continue;//Control pass to inner loop-'2'

case '3'://Jump to main 
{
break;//inner switch
}//case '3'

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to '1'st loop
}//outer case '2'


case '3':
{
break;//outer case '3'
}//outer case '3'
}   
break;//outer loop
}

return 0;
}
