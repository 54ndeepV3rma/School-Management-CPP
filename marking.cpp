void addMarks(){
	ofstream file("marksDB.txt", ios::app);
	string roll, std, sub[6];
	float marks[6];
	float total=0,per;

	cout<<"[#] ENTER THE FOLLOWING DETAILS : \n";
	
	cout<<"ROLL NUMBER : ";
	cin>>roll;
	file<<roll<<endl;

	cout<<"CLASS : ";
	cin>>std;
	file<<std<<endl;
	cout<<"MARKS OBTAINED IN THE SUBJECTS : \n";
	// Input of 5 subjects
	for(int i=0;i<6;i++){
		cout<<"SUBJECT NAME : ";
		cin>>sub[i];
		cout<<"MARK : ";
		cin>>marks[i];
		file<<sub[i]<<"  => "<<marks[i]<<endl;
	}
	// Total 
	for(int i=0;i<6;i++){
		total = total + marks[i];
	}
	file<<total<<endl;
	// Percentage
	per = (total/600)*100;
	file<<per<<endl;

}
void viewMarks(){

	ifstream file("marksDB.txt", ios::app);
	string infoRoll[200], infoStd[200], infoSub[20][6],infoTotal[200], infoPerc[200];
	string roll, std, sub[6], total, perc;
	
	int i=0;

	while(getline(file, roll)){
		getline(file, roll);
		infoRoll[i] = roll;
		getline(file, std);
		infoStd[i] = std;
		for(int j=0;j<6;j++){
			getline(file, sub[j]);
		}
		getline(file, total);
		infoTotal[i] = total;
		getline(file, perc);
		infoPerc[i] = perc;
		i=i+1;
	}

	int a=0;
	string query;
	cout<<"[#] SEARCH RESULT BY CLASS : ";
	cin>>query;
	while(a<i){
		if(!infoRoll[a].empty()){
		if(query==infoStd[a]){
		cout<<"---------------------\n";
		cout<<"ROLL NUMBER  : "<<infoRoll[a]<<endl;
	    cout<<"CLASS        : "<<infoStd[a]<<endl;	   
	   for(int j=0;j<6;j++){
		cout<<sub[j]<<endl;
	   }
	   cout<<"TOTAL MARKS   : "<<infoTotal[a]<<endl;
	   cout<<"PERCENTAGE    : "<<infoPerc[a]<<"\n\n";
	   cout<<"\n---------------------\n\n";
	  }
	}
	   a=a+1;

	}
}

