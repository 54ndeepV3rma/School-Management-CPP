#include<iostream>
#include<fstream>
using namespace std;
#include "StudentModule.cpp"
#include "attendance.cpp"
#include "marking.cpp"

int main(){
int ch=0;

// LOGO LOADING
home:
// BASIC INFO PRINTING
system("cls");
cout<<""
<<"\t\t\t\t\t\t   _  __    ____   _  _\n "  
<<"\t\t\t\t\t\t  | |/ /  / ___|  | || |\n"  
<<"\t\t\t\t\t\t  | ' /   \\___ \\  | || |_\n" 
<<"\t\t\t\t\t\t  | . \\    ___) | |__   _|\n"
<<"\t\t\t\t\t\t  |_|\\_\\  |____/     |_|  \n\n";

cout<<"\t\t\t\t\t\t\e[1;101m SCHOOL MANAGEMENT SOFTWARE \e[0m\n\n";
cout<<"\t\t\t\t\t\t\e[1;104m DEVELOPER : Sandeep Verma \e[0m\n\n";
cout<<"\t\t\t\033[1;32mTOTAL STUDENTS :\e[0m "<<countRecords()<<endl;
cout<<"\t\t\t================================================================================\n\n";


// OPTIONS TO CHOOSE

cout<<"\t\t\t[1] Student Admission \t\t [3] Marking System\n";
cout<<"\t\t\t[2] Attendance \t\t\t [0] Exit\n\n";
// CHOOSING THE TASK

do{
cout<<"\t\t\t\e[1;33m[#][choose]:> \e[0m";
cin>>ch;
if(ch==1){

	system("cls");
	int student_ch;
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"\t\t\t\t\t\t\t[!] STUDENT ADMISSION PANEL [!] \n\n";
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"[1] Add a new student\t\t [3] Update student Information\n";
	cout<<"[2] Search student record\n\n";
	cout<<"[#][choose]:> ";
	cin>>student_ch;
	if(student_ch==1){
		char askExit;
		againAdd:
		admission();
		cout<<"\n\nDo you want to add more record ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{
			goto againAdd;
		}
	}else if(student_ch==2){
		char askExit;
		againSearch:
		search();
		cout<<"\n\nDo you want to search again ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{
			goto againSearch;
		}
	}else if(student_ch==3){
		char askExit;
		againUpdate:
		update();
		cout<<"\n\nDo you want to update again ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{
			goto againUpdate;
		}
	}else{
		cout<<"\n\n$ INVALID INPUT DETECTED !!!";
	}
}else if(ch==2){
	system("cls");
	int student_ch;
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"\t\t\t\t\t\t\t[!] ATTENDANCE PANEL [!] \n\n";
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"[1] Add attendance record\t\t [2 ] View attendace record\n\n";
	cout<<"[#][choose]:> ";
	cin>>student_ch;
	if(student_ch==1){
		char askExit;
		againAtte:
		AddAttendance();
		cout<<"\n\nDo you want to add more record ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{

			goto againAtte;
		}
	}else if(student_ch==2){
		char askExit;
		againShowAtte:
		showAttendance();
		cout<<"\n\nDo you want to view again ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{
			goto againShowAtte;
		}
	}
}else if(ch==3){
	system("cls");
	int student_ch;
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"\t\t\t\t\t\t\t[!] MARKS MANAGEMENT SYSTEM [!]                   \n\n";
	cout<<"\t\t\t\t\t\t----------------------------------------------------\n\n";
	cout<<"[1] Add marks of students \t\t [2] Search Marks of Student\n\n";
	cout<<"[#][choose]:> ";
	cin>>student_ch;
	if(student_ch==1){
		char askExit;
		againAddMarks:
		addMarks();
		cout<<"\n\nDo you want to add more marks ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{

			goto againAddMarks;
		}
	}else if(student_ch==2){
		char askExit;
		againShowMarks:
		viewMarks();
		cout<<"\n\nDo you want to see again ? [Y/n] : ";
		cin>>askExit;
		if(askExit=='N' || askExit=='n'){
			goto home;
		}else{
			goto againShowMarks;
		}
	}
}

}while(ch!=0);
cout<<"\n\nSEE YOU SOON ! BYE SIR :)\n\n";

return 0;
}