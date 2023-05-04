int countRecords(void){
	// Reading
	ifstream file("students.txt", ios::app);

	// Store all in array
	string infoName[20], infoRoll[20], infoStandard[20], infoGender[20];

	// Store each line temporarily
	string name, roll, standard, gender;
	int i=0;

	// Storing--z/
	while(!file.eof()){
		getline(file, roll);
		infoRoll[i] = roll;
		getline(file, name);
		infoName[i] = name;
		getline(file, standard);
		infoStandard[i] = standard;
		getline(file, gender);
		infoGender[i] = gender;
		i = i+1;
	}

	return i-1;  
}
void admission(){

	string name, roll, std;
	char gender;
	string ask;
	string silent;
	ofstream Admission("students.txt", ios::app);

	cout<<"Enter the following details : \n\n";

	cout<<"Roll Number : ";
	cin>>roll;
	Admission<<roll<<"\n";
	
	cout<<"Full Name : ";
	cin>>name;
	Admission<<name;
	
	cout<<"Class : ";
	cin>>std;
	Admission<<"\n"<<std;

	cout<<"Gender [M/F/O]: ";
	cin>>gender;
	Admission<<"\n"<<gender<<"\n";


}


void search(){
	
	system("cls");
	// Reading
	ifstream file("students.txt", ios::app);

	// Store all in array
	string infoName[20], infoRoll[20], infoStandard[20], infoGender[20];

	// Store each line temporarily
	string name, roll, standard, gender;
	int i=0;

	// Storing
	while(!file.eof()){
		getline(file, roll);
		infoRoll[i] = roll;
		getline(file, name);
		infoName[i] = name;
		getline(file, standard);
		infoStandard[i] = standard;
		getline(file, gender);
		infoGender[i] = gender;
		i = i+1;
	}

	int j=0;

    // Searching Informations
    // Temp variables
    string tempRoll;
    int IndexNumber;
cout<<""
<<"\t\t\t\t\t\t   _  __    ____   _  _\n "  
<<"\t\t\t\t\t\t  | |/ /  / ___|  | || |\n"  
<<"\t\t\t\t\t\t  | ' /   \\___ \\  | || |_\n" 
<<"\t\t\t\t\t\t  | . \\    ___) | |__   _|\n"
<<"\t\t\t\t\t\t  |_|\\_\\  |____/     |_|  \n\n";

	cout<<"Search Student By Roll Number !!"
	    <<"\nEnter the Roll Number : ";
	cin>>tempRoll;
	while(j<i){
		if(tempRoll==infoRoll[j]){
			cout<<"\nRoll Number  : "<<infoRoll[j]<<endl;
      cout<<"Full Name    : "<<infoName[j]<<endl;
			cout<<"Class        : "<<infoStandard[j]<<endl;
			cout<<"Gender       : "<<infoGender[j];

			IndexNumber=j;
	}
		j=j+1;
	}
}

void update(){
	system("cls");
	// Reading
	ifstream file("students.txt", ios::app);

	// Store all in array
	string infoName[20], infoRoll[20], infoStandard[20], infoGender[20];

	// Store each line temporarily
	string name, roll, standard, gender;
	int i=0;

	// Storing
	while(!file.eof()){
		getline(file, roll);
		infoRoll[i] = roll;
		getline(file, name);
		infoName[i] = name;
		getline(file, standard);
		infoStandard[i] = standard;
		getline(file, gender);
		infoGender[i] = gender;
		i = i+1;
	}

	int j=0;

    // Searching Informations
    // Temp variables
    string tempRoll, tempName, tempStandard, tempGender, newRoll;
    int IndexNumber; // This will tell the index Number of the specific Student Data in the Memory Location such as Name, Roll and so on
    int ch;
cout<<""
<<"\t\t\t\t\t\t   _  __    ____   _  _\n "  
<<"\t\t\t\t\t\t  | |/ /  / ___|  | || |\n"  
<<"\t\t\t\t\t\t  | ' /   \\___ \\  | || |_\n" 
<<"\t\t\t\t\t\t  | . \\    ___) | |__   _|\n"
<<"\t\t\t\t\t\t  |_|\\_\\  |____/     |_|  \n\n";
	cout<<"Search Student By Roll Number !!"
	    <<"\nEnter the Roll Number : ";
	cin>>tempRoll;
	cout<<"What do you want to edit ??\n";
	cout<<"[1] Name\t [2] Roll Number\n[3] Class\t [4] Gender\n";
	cout<<"[#][choose]:> ";
	cin>>ch;

 if(ch==1){
 	cout<<"\nEnter the new name of the student : ";
	cin>>tempName;

	while(j<i){
		if(tempRoll==infoRoll[j] && !(infoRoll[j].empty())){
	        infoName[j] = tempName;
			
						IndexNumber=j;
	}
		j=j+1;
	}
  }else if(ch==2){
  	cout<<"\nEnter the New Roll number of the student : ";
	cin>>newRoll;
	while(j<i){
		if(tempRoll==infoRoll[j]){
	        infoRoll[j] = newRoll;
			IndexNumber=j;
	}
		j=j+1;
	}
  }else if(ch==3){
  	cout<<"\nEnter the New class of the student : ";
	cin>>tempStandard;
	while(j<i){
		if(tempRoll==infoRoll[j]){
	        infoStandard[j] = tempStandard;
			IndexNumber=j;
	}
		j=j+1;
	}
  }else if(ch==4){
  	cout<<"\nEnter the New Gender of the student : ";
	cin>>tempGender;
	while(j<i){
		if(tempRoll==infoRoll[j]){
	        infoGender[j] = tempGender;
			IndexNumber=j;
	}
		j=j+1;
	}
  }
    // New File Pointer to OverWrite new Data in the Record
    remove("students.txt");
    ofstream updateFile("students.txt", ios::out);
	j=0;
	cout<<"\n-------------------------------------";
	cout<<"\n           Updated Records !\n";
	cout<<"-------------------------------------\n";
	while(j<i){
		if(!infoRoll[j].empty()){
		// Displaying Changes
		if(tempRoll==infoRoll[j]){
	  cout<<"ROLL NUMBER : "<<infoRoll[j]<<endl;
		cout<<"NAME        : "<<infoName[j]<<endl;
		cout<<"CLASS       : "<<infoStandard[j]<<endl;
		cout<<"GENDER      : "<<infoGender[j]<<endl;
}
		// Updating Changes
		updateFile<<infoRoll[j]<<endl;
		updateFile<<infoName[j]<<endl;
		updateFile<<infoStandard[j]<<endl;
		updateFile<<infoGender[j]<<endl;
	}
		j=j+1;
	}
	file.close();
}