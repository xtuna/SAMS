#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>


using namespace std;

string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50],arr6[50];
int total=0;

// Function for the 1st Option "Enter Data"
void enter()
{
    int ch=0;
    COORD c;
            c.X=67;//its for left and right position of cursor
            c.Y=4;// and this is for up and down cursor control
    cout<<"\n\t\t__________________________________________________________________________________________\n"<<endl;
    cout<<"\n\t\t\t\t\t\tNumber of Students: "<<endl;
    cout<<"\t\t__________________________________________________________________________________________\n"<<endl;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);//this is for controlling the position of cursor
    cin>>ch; // only numbers can be inputted

        if (cin.fail()) //if there is an invalid character inputted, then it will print "Wrong Input"
            {
            cout<<"Wrong Input";
            getchar();
            }

	cin.ignore();//Used for ignoring the input of one or more characters
	system("cls");
    if(total==0)
        {
        	//Using of 'for' loop based on the number or value inputted in the "Number of Students"
            total=total+ch;
            for(int i=0;i<ch;i++)
			{
				//Inputting of one or more necessary data
				cout<<"\t\t__________________________________________________________________________________________\n"<<endl;
			    cout<<"\n\t\t\t\t\t\tEnter the Data of student "<<i+1<<endl<<endl;

			    cout<<"\t\t\t\t\t\tEnter Name: ";
				getline(cin,arr1[i]);

				cout<<"\t\t\t\t\t\tEnter Roll no: ";
				getline(cin,arr2[i]);

				cout<<"\t\t\t\t\t\tEnter Course and Section: ";
				getline(cin,arr3[i]);

				cout<<"\t\t\t\t\t\tEnter Class: ";
				getline(cin,arr4[i]);

				cout<<"\t\t\t\t\t\tEnter Contact: ";
				getline(cin,arr5[i]);

				cout<<"\t\t\t\t\t\tEnter Time Attended: ";
				getline(cin,arr6[i]);

			}
        }
    else
        {
            for(int i=total;i<total+ch;i++)
			{
			    cout<<"\n\t\t\t\t\t\tEnter the Data of student "<<i+1<<endl<<endl;

			    cout<<"\t\t\t\t\t\tEnter Name: ";
				getline(cin,arr1[i]);

				cout<<"\t\t\t\t\t\tEnter Roll No.: ";
				getline(cin,arr2[i]);

				cout<<"\t\t\t\t\t\tEnter Course and Section: ";
				getline(cin,arr3[i]);

				cout<<"\t\t\t\t\t\tEnter Class: ";
				getline(cin,arr4[i]);

				cout<<"\t\t\t\t\t\tEnter Contact: ";
				getline(cin,arr5[i]);

				cout<<"\t\t\t\t\t\tEnter Time Attended: ";
				getline(cin,arr6[i]);

			}
			total=total+ch;
        }
        cout<<"\n\n\t\t\t\t\t\tData successfully saved!"<<endl;
        cout<<"\t\t__________________________________________________________________________________________"<<endl;
        cout<<"\n\t\t\t\t\t\t";
        system("pause");
        system("cls");
}

void show()//To display all of the data inputted in the program
{
	system("cls");
	if(total==0)// If there is no data entered, it will print a message showing that there is no data.
	{
	    cout<<"\t\t__________________________________________________________________________________________"<<endl;
		cout<<"\n\t\t\t\t\t\tNo data is entered"<<endl;
		cout<<"\t\t__________________________________________________________________________________________"<<endl;
		cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
	}
	else{
		for(int i=0;i<total;i++)// If there is data entered, it will show the data entered into the program
	    		{cout<<"\t\t__________________________________________________________________________________________"<<endl;
                cout<<"\n\t\t\t\t\t\tDATA OF THE STUDENT("<<i+1<<")"<<endl;
                cout<<"\t\t__________________________________________________________________________________________"<<endl;
	    		cout<<"\n\n\t\t\t\t\tName of the Student: "<<arr1[i]<<"\n";
	    		cout<<"\n\t\t\t\t\tRoll number of the Student: "<<arr2[i]<<"\n";
	    		cout<<"\n\t\t\t\t\tCourse and Section: "<<arr3[i]<<"\n";
	    		cout<<"\n\t\t\t\t\tClass: "<<arr4[i]<<"\n";
	    		cout<<"\n\t\t\t\t\tContact (in case of emergency): "<<arr5[i]<<"\n";
	    		cout<<"\n\t\t\t\t\tTime Attended: "<<arr6[i]<<"\n";
	    		cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
	    	    }
	    	    cout<<"\n\t\t\t\t\t\t   End of the Line!!!"<<endl;
                cout<<"\n\t\t\t\t\t    ";
                system("pause");
                system("cls");
	    	}
}
void search() // Function for the 3rd option "Search Data"
{
	system("cls");
	cout<<"\t\t__________________________________________________________________________________________"<<endl;
	if(total==0)
	{
		cout<<"\n\t\t\t\t\t\tNo data is entered"<<endl;
		cout<<"\t\t__________________________________________________________________________________________"<<endl;
		cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
	}
	else{
	string rollno;
				cout<<"\n\t\t\t\t\t\tEnter the Roll No. of Student: ";
				cin>>rollno;
				for(int i=0;i<total;i++) // to exactly show one result and don't repeat the infos
				{
					if(rollno==arr2[i]) //to call the array and when it match it will display the rest of the details
					{
						cout<<"\t\t\t\t\tName: "<<arr1[i]<<endl;
	    	        	cout<<"\t\t\t\t\tRoll No.: "<<arr2[i]<<endl;
	    		        cout<<"\t\t\t\t\tCourse and Section: "<<arr3[i]<<endl;
	    		        cout<<"\t\t\t\t\tClass: "<<arr4[i]<<endl;
	    	        	cout<<"\t\t\t\t\tContact: "<<arr5[i]<<endl;
	    	        	cout<<"\t\t\t\t\tTime Attended: "<<arr6[i]<<endl;
	    	        	cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
        cout<<"\n\t\t\t\t\t\t   End of the Line!!!"<<endl;
        cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
	    	        	break; //terminate loop
					}
				}
			}
}

void update() // function for updating past data
{

	system("cls");
	cout<<"\t\t__________________________________________________________________________________________"<<endl;
	if(total==0)
	{
		cout<<"\n\t\t\t\t\t\tNo data is entered"<<endl;
		cout<<"\t\t__________________________________________________________________________________________"<<endl;
		cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
	}
	else
	{
	    string rollno;
				cout<<"\t\t\t\tEnter the roll no of student which you want to update: ";
				cin>>rollno;

				for(int i=0;i<total;i++)//this syntax loops depending on the number of student
				{
					if(rollno==arr2[i])//presents recent information when condition satisfied
                    cin.ignore();
					{
						cout<<"\n\t\t\t\t\tPrevious data"<<endl<<endl;
						cout<<"\t\t\t\t\tData of Student "<<i+1<<endl;
						cout<<"\t\t\t\t\tName: "<<arr1[i]<<endl;
	    	        	cout<<"\t\t\t\t\tRoll no: "<<arr2[i]<<endl;
	    		        cout<<"\t\t\t\t\tCourse and Section: "<<arr3[i]<<endl;
	    		        cout<<"\t\t\t\t\tClass: "<<arr4[i]<<endl;
	    	        	cout<<"\t\t\t\t\tContact: "<<arr5[i]<<endl;
	    	        	cout<<"\t\t\t\t\tTime Attended: "<<arr6[i]<<endl;
	    	        	cout<<"\t\t\t\t\t____________________________"<<endl;
	    	        	cout<<"\n\t\t\t\t\tEnter new data"<<endl<<endl;	//for replacing past information
							cout<<"\t\t\t\t\tEnter Name: ";
				            getline(cin,arr1[i]);
				            cout<<"\t\t\t\t\tEnter Roll no: ";
				            getline(cin,arr2[i]);
			             	cout<<"\t\t\t\t\tEnter Course and Section: ";
				            getline(cin,arr3[i]);
				            cout<<"\t\t\t\t\tEnter Class: ";
				            getline(cin,arr4[i]);
				            cout<<"\t\t\t\t\tEnter Contact: ";
				            getline(cin,arr5[i]);
				            cout<<"\t\t\t\t\tTime Attended: ";
				            getline(cin,arr6[i]);
					}
						cout<<"\n\t\t\t\t\tData Updated Successfully! "<<endl;
                        cout<<"\t\t__________________________________________________________________________________________"<<endl;
                        cout<<"\n\t\t\t\t\t\t";
                        system("pause");
                        system("cls");
				}
	}
}

void deleterecord()
{
	system("cls");
	cout<<"\t\t__________________________________________________________________________________________"<<endl;
	if(total==0)
	{
		cout<<"\n\t\t\t\t\t\tNo data is entered"<<endl;
		cout<<"\t\t__________________________________________________________________________________________"<<endl;
		cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
	}
	else{
		int a;
	        	cout<<"\n\t\t\t\t\tPress 1 to delete all record"<<endl;
				cout<<"\t\t\t\t\tPress 2 to delete specific record"<<endl;
                cout<<"\n\t\t\t\t\tEnter your choice: ";
				cin>>a;
				system("cls");
				if(a==1) //if '1' is pressed, then it will delete all existing records.
				{
					total=0;
					cout<<"\t\t__________________________________________________________________________________________"<<endl;
					cout<<"\n\t\t\t\t\t\tAll record is deleted..!!"<<endl;
					cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
        cout<<"\n\t\t\t\t\t\t   End of the Line!!!"<<endl;
        cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
				}
				else if(a==2) //if '2' is pressed, then it will delete the record based on the roll no. the user inputted.
				{
				string rollno;
				cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
				cout<<"\n\t\t\t\tEnter the roll no of student which you wanted to delete: ";
				cin>>rollno;
				for(int i=0;i<total;i++) //a syntax loop to determine the roll no. to delete.
				{
					if(rollno==arr2[i]) //if roll no. exist, then it will continue the loop and proceed to deletion of data.
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
						arr6[j]=arr6[j+1];
				     	}
					total--;
					cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
					cout<<"\n\n\t\t\t\t\tYour required record is deleted"<<endl;
					cout<<"\n\t\t__________________________________________________________________________________________"<<endl;
					cout<<"\n\t\t\t\t\t\t   End of the Line!!!"<<endl;
        cout<<"\n\t\t\t\t\t    ";
        system("pause");
        system("cls");
					}
				}
				}

			else

			{
				cout<<"\t\t\t\t\tInvalid input";
			}
		}
	cout<<"\t\t__________________________________________________________________________________________"<<endl;
}

int main()
{
    system("COLOR 0A");
	int value,exit_c;
	char l_arrow = 16,r_arrow = 17;
	string option[] = {"Enter Data", "Show Data", "Search Data", "Update Data", "Delete Data","Exit"};
	while(true)
		{
		    bungad:
			cout<<"\n\n\t\t__________________________________________________________________________________________\n"<<endl;
			cout<<"\t\t\t\t\t    "<<l_arrow<<" STUDENT'S RECORD OF ATTENDANCE "<<r_arrow<<endl;
			cout<<"\t\t__________________________________________________________________________________________\n"<<endl;
			for(int i=1; i<=6; i++)
			{
				cout<<"\t\t\t\t\t\tPress "<<i<<" to "<<option[i-1]<<endl;

			}
			cout<<"\t\t__________________________________________________________________________________________"<<endl;
			cout<<"\n\t\t\t\t\t\tChoose an Option:";
			cin>>value;
			system("cls");
				switch(value)
					{

						case 1:

							enter();
							break;

						case 2:

							show();
							break;

						case 3:

							search();
							break;

						case 4:

							update();
							break;

						case 5:

							deleterecord();
							break;

						case 6:
                            cout<<"\n\n\n\t\t\t\tAre you sure you want to exit? press 'y' if yes and 'n' for no"<<endl;
                            cout<<"\t\t\t\t";
                            exit_c=getch();
                            system("cls");
                            if(exit_c==110)
                            {
                                goto bungad;
                            }
                            else
                            {
                                cout<<"\n\n\n\t\t\t\t\t\t\tThank you bye"<<endl;
                                cout<<"\n\t\t\t\t\t\t";
                                system("pause");
                                exit(0);
                            }
							break;

						default:

							cout<<"Invalid input!"<<endl;
							getchar();
					}
		}
}
