/* EMPLOYEE MANAGEMENT*/


#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define PERSONS_LIMIT 100
#define maxlimit 100 

int countPersons = 0;

class Employee
{
	public:
	float salary;
	int age,empid;
	char sex,fname[maxlimit],lname[maxlimit],department[maxlimit],designation[maxlimit];
}obj[PERSONS_LIMIT];


void readdata()
	{
		if(countPersons<PERSONS_LIMIT)
		{
			cout<<"\n\t\t\t Enter Employee id (number): \t";
			cin>>obj[countPersons].empid;
			cout<<"\n\t\t\t Enter First Name: \t";
			cin>>obj[countPersons].fname;
			cout<<"\n\t\t\t Enter Last Name: \t";
			cin>>obj[countPersons].lname;
			cout<<"\n\t\t\t Enter Age (number): \t";
			cin>>obj[countPersons].age;
			cout<<"\n\t\t\t Enter Sex (M/F) : \t";
			cin>>obj[countPersons].sex;
			cout<<"\n\t\t\t Enter Department: \t";
			cin>>obj[countPersons].department;
			cout<<"\n\t\t\t Enter Designation : \t";
			cin>>obj[countPersons].designation;
			cout<<"\n\t\t\t Enter Salary (number): \t";
			cin>>obj[countPersons].salary;
			countPersons++;
		}
		else
		{
			cout<<"\n\n\t\t\t Error : Limit is only " << PERSONS_LIMIT;
		}
	}

	void view()
	{
		cout<<"\n\t\t ************************************************************* Employee Record *************************************************************\n\n";
		if (countPersons==0)
		{
			cout<<"\n\n\n\n\t\t\t\t\t FOR GOD SAKE!!!! HIRE SOME EMPLOYEES\n";
		}
		else
		{
				
			for(int i=0;i<countPersons;i++)
			{
				cout<<"\t\t---------------------------------------------------------------------------------------------------------------------------------------------";
				cout<<"\n\n\t\t\t\tEmployee Id : \t"<<obj[i].empid;
				cout<<"\n\t\t\t\tNAME: \t\t"<<obj[i].fname<<" "<<obj[i].lname;
				cout<<"\n\t\t\t\tAGE: \t\t"<<obj[i].age;
				cout<<"\n\t\t\t\tSEX: \t\t"<<obj[i].sex;
				cout<<"\n\t\t\t\tDEPARTMENT: \t"<<obj[i].department;
				cout<<"\n\t\t\t\tDESIGNATION: \t"<<obj[i].designation;
				cout<<"\n\t\t\t\tSALARY: \t"<<obj[i].salary<<"\n\n";
				cout<<"\t\t---------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
		}

	}

	void search()
	{
		int sear;
		cout<<"\n\t\t\t\tEnter Employee id: \n\t\t\t";
		cin>>sear;
		for(int i=0; i<countPersons; i++)
            {
                if(sear==obj[i].empid)
                {
				cout<<"\t\t---------------------------------------------------------------------------------------------------------------------------------------------";
				cout<<"\n\n\t\t\t\tEmployee Id : \t"<<obj[i].empid;
				cout<<"\n\t\t\t\tNAME: \t\t"<<obj[i].fname<<" "<<obj[i].lname;
				cout<<"\n\t\t\t\tAGE: \t\t"<<obj[i].age;
				cout<<"\n\t\t\t\tSEX: \t\t"<<obj[i].sex;
				cout<<"\n\t\t\t\tDEPARTMENT: \t"<<obj[i].department;
				cout<<"\n\t\t\t\tDESIGNATION: \t"<<obj[i].designation;
				cout<<"\n\t\t\t\tSALARY: \t"<<obj[i].salary<<"\n\n";
				cout<<"\t\t---------------------------------------------------------------------------------------------------------------------------------------------\n";
				}
				else
				{
					cout<<"\n\n\t\t\t\t\t Error404: Employee Not Found\n";
				}
			}
	}

	void modify()
	{

		int s;
		cout<<"\n\t\t\t Enter Employee id: \t\t";
		cin>>s;
		for(int i=0;i<countPersons;i++)
		{
            if(s==obj[i].empid)
			{
			cout<<"\n\t\t\t Enter New Employee id (number): \t";
			cin>>obj[i].empid;
			cout<<"\n\t\t\t Enter New First Name: \t";
			cin>>obj[i].fname;
			cout<<"\n\t\t\t Enter New Last Name: \t";
			cin>>obj[i].lname;
			cout<<"\n\t\t\t Enter New Age (number): \t";
			cin>>obj[i].age;
			cout<<"\n\t\t\t Enter New Sex (M/F) : \t";
			cin>>obj[i].sex;
			cout<<"\n\t\t\t Enter New Department: \t";
			cin>>obj[i].department;
			cout<<"\n\t\t\t Enter New Designation : \t";
			cin>>obj[i].designation;
			cout<<"\n\t\t\t Enter New Salary (number): \t";
			cin>>obj[i].salary;
			}
			else
			{
				cout<<"\n\n\t\t\t Enter valid Details\n\n\n\n";
			}
		}
	}




int main()
{
	int n;
    do
	{
        cout<<"\n\t\t===============================================================================================================================================";
        cout<<"\n\t\t                                                     |       Employee Management System     |"<<endl;
        cout<<"\t\t===============================================================================================================================================";
        cout<<"\n\n\n\n\t\t\t\t(1)\tTo Add New Data \n\t\t\t\t(2)\tTo View List of Employees \n\t\t\t\t(3)\tTo Search an Employee \n\t\t\t\t(4)\tTo Modify Employee data \n\t\t\t\t(5)\tExit"<<endl;
        cout<<"\n\n\t\t\t\t\t :: Enter Your Choice :->> \t";
        cin>>n;
        switch (n)
		{
			case 1:
			{
				readdata();
				break;
			}

			case 2:
			{
				view();
				break;
			}

			case 3:
			{
				
				search();
				break;
			}

			case 4:
			{
				
				modify();
				break;
			}

			case 5:
			{
				cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tBrought To You By Ankur,Anshul and Raghav\n\n\n\n\n\n";
				break;
			}

			default:
			{
				cout<<"\t\tPlease Enter your choice Correctly:\t\t"<<endl;
				break;
			}
        }
	}while(n<6&&n!=5);

return 0;
}