void AddAttendance(){
	ofstream file("attendance.txt", ios::app);
	string roll, date, std, type;
	cout<<"[!!] ADD ATTENDANCE RECORD [!!]\n\n";
	
	cout<<"ROLL NUMBER : ";
	cin>>roll;
	file<<roll<<endl;
	
	cout<<"DATE : ";
	cin>>date;
	file<<date<<endl;
	
	cout<<"CLASS : ";
	cin>>std;
	file<<std<<endl;

	cout<<"ABSENT/PRESENT/HALF_DAY : ";
	cin>>type;
	file<<type<<endl;
}

void showAttendance(){
	ifstream file("attendance.txt", ios::app);
	string infoRoll[20], infoDate[20], infoStd[20], infoType[20];
	string roll, date, std, type, query;

	int i=0;
	cout<<"[#] Enter the class : ";
	cin>>query;
	while(!file.eof()){
		getline(file, roll);
		infoRoll[i] = roll;
		getline(file, date);
		infoDate[i] = date;
		getline(file, std);
		infoStd[i] = std;
		getline(file, type);
		infoType[i] = type;
		i = i+1;
	}

	int j=0;

	while(j<i){
		if(infoStd[j]==query){
	
		if(!infoRoll[j].empty()){
		cout<<"\nRoll Number : "<<infoRoll[j];
		cout<<"\nDate : "<<infoDate[j];
		cout<<"\nClass : "<<infoStd[j];
		cout<<"\nStatus : "<<infoType[j]<<endl;
		}
	}
		j=j+1;
	}
}




