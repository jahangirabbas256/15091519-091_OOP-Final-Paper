#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()

//NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY

{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
re:
;
                                        		                                
cout<<"|                                 WELCOME TO                                            |";
cout<<"|                                                                                       |";
cout<<"|                           HOSPITAL MANAGEMENT SYSTEM                                  |";
cout<<"|                                                                                       |";


system("pause");
system("cls");



int i;
int login();
login();
//giving option to the user for their choice
b:
cout<<" Patient Report management in Hospital ";	
cout<<"Please,  Choose from the following Options:";
cout<<"_________________________________________________________________ |";
cout<<"|                                           	                     |";
cout<<"|             1  >> Add New Patient Record                        |";
cout<<"|             2  >> Add Diagnosis Information                     |";
cout<<"|             3  >> Full History of the Patient                   |";
cout<<"|             4  >> Information About the Hospital                |";
cout<<"|             5  >> Exit the Program                              |";
cout<<"|             7 >> Delete Patient Record                          |";
cout<<"|             6 >> Update Patient Record                          |";
cout<<"|_________________________________________________________________|";
a:cout<<"Enter your choice: ";cin>>i;
if(i>7||i<1){cout<<"Invalid Choice";cout<<"Try again...........";goto a;} //if inputed choice is other than given choice



system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
	ifstream file;
	file.open("hos.txt");
		if(!file)
		{
		cout<<"Error while opening the file";goto b;
		}
		else
		{
		cout<<"  ...........................Information about the Patient.............................";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"";
			}
			cout<<"";
			system("pause");
            system("cls");
			goto b;
		}
}

//Adding the record of the new patient..................option 3
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"Enter the patient's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"Error while opening the file";goto b;
		}
		else
		{
                        struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            char id[15];
                        };

            patient_info ak;
            cout<<"********************************************************************";pat_file<<"********************************";//fn1353 st
            cout<<"Name : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"";
            cout<<"Address : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"";
            cout<<"Contact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"";
            cout<<"Age : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"";
            cout<<"Sex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"";
            cout<<"Blood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"";
            cout<<"Any Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"";
            cout<<"Patient ID : ";pat_file<<"Patient ID : ";gets(ak.id);pat_file<<ak.id<<"";
            cout<<"********************************************************************";pat_file<<"*******************************";
            cout<<"Information Saved Successfully";
            }
  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2||6)
{
    fstream pat_file;
    cout<<"Enter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"Error while opening the file";goto b;
		}
		else
		{
		    cout<<"....................................... Information about "<<fname<<" ........................................";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"  ";
			}
			cout<<"  ";
			pat_file.close();
			pat_file.open(fname, ios::out | ios::app);
            cout<<"  ";
			cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<" ";
                            struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                char ward[15];
                            };
            app add;
            cout<<"Symptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<" ";
            cout<<"Diagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<" ";
            cout<<"Medicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<" ";
            cout<<"Addmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<" ";
            cout<<"Type of ward : "; pat_file<<"Type of ward : ";gets(add.ward); pat_file<<add.ward<<"  ";pat_file<<"**********";
            cout<<"---"<<add.ward<<" ward is alloted Successfully";
			pat_file.close();
			cout<<"";
			system("pause");
            system("cls");
			goto b;
		}
}
// Deleting the record
 else if(i==7)
{
	 cout<<"Enter the patient's file name to be opened : ";
cout<<"patient file deleted Successfully : ";


}
//For displaying the full medical history of patient in that hospital............option 3

if(i==3)
{
    fstream pat_file;
    cout<<"Enter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"Error while opening the file";goto b;
		}
		else
		{
		    cout<<"........................................ Full Medical History of "<<fname<<" ........................................";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"";
			}
			cout<<"";
        }
        system("pause");
        system("cls");
        goto b;
}

//Exiting Through the system with a Thank You note........................option 5
if(i==5)
{
system("cls");
cout<<"|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
cout<<"|____________________________________________________________|";
cout<<"|                            		                            |";
cout<<"|                               		                            |";
cout<<"|                        		                            |";
cout<<"|                            		                            |";
cout<<"|                                		                            |";
cout<<"|                     THANK YOU FOR USING                          |";
cout<<"|                                                                  |'";
cout<<"|            Patient Report management in Hospital           |";
cout<<"|                                                                       |" ;
cout<<"|                                                                        |" ;
cout<<"|                                                     |";
cout<<"|                                                              |";
cout<<"|                                                |";
cout<<"|     -Brought To You by Jahangir_15091519-091 |";
cout<<"|__________________________________________  __|";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
}


cout<<"";

}

int login(){
   string pass ="";
   char ch;
   cout<<"Patient Report management in Hospital ";
   cout<<"------------------------------";
   cout<<"    LOGIN ";	
   cout<<"------------------";	
   cout << "Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "jahangir"){
      cout << "Access Granted!"<<endl;
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "Access Aborted...Please Try Again";
      system("PAUSE");
      system("CLS");
      login();
   }
}

