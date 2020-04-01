#include<iostream>
using namespace std;
#include<cstring>
#include<fstream>
#include<graphics.h>
#include<string.h>
string city[20];
class graph1
{
	int A[10][10];
	int cost[10][10];
	int v1,v2,km,km1;
	char mobile[10];
	char mobile1[10];
	int cost1,cost2,cost3,cost4;
	int visited[10];
	int ch1;
	int num;
	char name[50];
	char a[50];
	string name1[20];
	char answer;
	public:
		void initialize()
		{
			city[0]="Mumbai"; city[1]="Pune"; city[2]="Nashik"; city[3]="Delhi";city[4]="Kolkata";city[5]="Goa";
			for(int i=0;i<6;i++)
			{
                 		for (int j=0;j<6;j++)
                 		{
                       		 	A[i][j]=0;
                       		 	cost[i][j]=0;
                 		}
                 	}
                        cost1=0;
                      	cost2=0;
                      	cost3=0;
                      	cost4=0;
                      	km=0;
                      	km1=0;
                      	num=0;
		}
		void calculate_km();       //RMW
		void inputing();           //RMW
		void displaying();	       //RMW
		void create();            //RMW,AMW
		void display();           //RMW
		void exist();             //RMW
		void dfs(int);            //YPG
		void initvisited();        //YPG
		void bfs(int);           //YPG
		void graph_display();     //RMW,AMW
		void discount();         //RMW
		void calculate();        //RMW
		void input();           //RMW
		void ticket();          //RMW,AMW
		void insert();          //AMW
		void available();	//AMW
		void info();		//AMW
};

void graph1::available()
{
	if(v1==0&&v2==1||v1==0&&v2==2||v1==0&&v2==3||v1==0&&v2==4||v1==0&&v2==5)
	{
		cout<<"\n\n\n There are only  6(SIX)  tickets  available\n\n\n";
		cout<<"\n How many tickets you want to book: \n";
		cin>>num;
		cout<<"\n\n......................CHECKING............................\n\n";
		if(num>6)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}
	}
	if(v1==1&&v2==0||v1==1&&v2==2||v1==1&&v2==3||v1==1&&v2==4||v1==1&&v2==5)
	{
		cout<<"\n There are only  10(TEN)  tickets  available";
		cout<<"\n How many tickets you want to book: ";
		cin>>num;
		if(num>10)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}
	}
	if(v1==2&&v2==0||v1==2&&v2==1||v1==2&&v2==3||v1==2&&v2==4||v1==2&&v2==5)
	{
		cout<<"\n There are only  15(FIFTEEN)  tickets  available";
		cout<<"\n How many tickets you want to book: ";
		cin>>num;
		if(num>15)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}

	}
	if(v1==3&&v2==0||v1==3&&v2==1||v1==3&&v2==2||v1==3&&v2==4||v1==3&&v2==5)
	{
		cout<<"\n There are only  10(TEN)  tickets  available";
		cout<<"\n How many tickets you want to book: ";
		cin>>num;
		if(num>10)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}
	}
	if(v1==4&&v2==0||v1==4&&v2==1||v1==4&&v2==2||v1==4&&v2==3||v1==4&&v2==5)
	{
		cout<<"\n There are only  8(EIGHT)  tickets  available";
		cout<<"\n How many tickets you want to book: ";
		cin>>num;
		if(num>8)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}

	}
	if(v1==5&&v2==0||v1==5&&v2==1||v1==5&&v2==2||v1==5&&v2==3||v1==5&&v2==4)
	{
		cout<<"\n There are only  20(TWENTY)  tickets  available";
		cout<<"\n How many tickets you want to book: ";
		cin>>num;
		if(num>20)
		{
			cout<<"\n You can not book that much tickets... : ( ";
			cout<<"\n Please Enter Number of tickets you want to book: ";
			cin>>num;
		}


	}
}

void graph1::info()
{
	cout<<"\n .............................YOUR INFORMATION PLEASE............................";
	if(num>1)
	{
		for(int j=2;j<=num;j++)
		{
			cout<<"\n Enter \"FIRST\" name of  "<<j<<" customer          :: ";
			cin>>name1[j];
			go:
			cout<<"\n Enter mobile number of  "<<j<< "  customer         ::";
			cin>>mobile1;
			int i=0;
			while(mobile1[i]!='\0')
			{
				i++;
			}
			if(i<10)
			{
				cout<<"\n WRONG MOBILE NUMBER ....ENTER AGAIN....";
				goto go;
			}
		}
	}
	cout<<"\n THANKS FOR INFORMATION YOU CAN PROCEED..... ";
}

void graph1::insert()
{
			initialize();
			go:
			for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
			}

		       	cout <<"\n \nEnter the city from where you want to start travel: \n";
		       	cin >> v1;
			cout<<"\n";
			if(v1>5)
			{
				cout<<"\n YOU ENTERED WRONG CHOICE OF CITY";
				goto go;
			}
		       	for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
		       	}
		       	go1:
		       	cout <<"\n \nEnter the city where you want to go:  ";
		       	cin >> v2;
		       	if(v2>5)
			{
				cout<<"\n YOU ENTERED WRONG CHOICE OF CITY";
				goto go1;
			}

		       	if(v2==v1)
			{
				cout<<"\nYou entered the same city... : (  Please add Destination city\n";
				for(int i=0;i<6;i++)
				{
		           		 cout <<i << ":" << city[i];
		       		}
				cout<<"\n Enter the city where you want to go: ";
				cin>>v2;
				cout<<"\n";
			}
			available();
			info();

}

void graph1::create()
{
	int m,choice;
     	char ans,y,Y;
     	cout<<"\n";
	cout<<"\n";
	insert();
			if(v1==0 && v2==1)
			{
				A[v1][v2]=150;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}	
			else if (v1==1&&v2==0)
			{
				A[v1][v2]=150;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==0 && v2==2)
			{
				A[v1][v2]=200;
				cout<<"You will travel "<<A[v1][v2]<<"  km";	
			}
			else if (v1==2&&v2==0)
			{
				A[v1][v2]=200;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==0 && v2==3)
			{
				A[v1][v2]=1450;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==3 && v2==0)
			{
				A[v1][v2]=1450;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==0 && v2==4)
			{
				A[v1][v2]=2000;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==4 && v2==0)
			{
				A[v1][v2]=2000;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==0 && v2==5)
			{
				A[v1][v2]=600;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if(v1==5 && v2==0)
			{
				A[v1][v2]=600;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			
			
			else if (v1==1&&v2==2)
			{
				A[v1][v2]=220;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==1)
			{
				A[v1][v2]=220;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==3)
			{
				A[v1][v2]=1300;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==1)
			{
				A[v1][v2]=1300;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==4)
			{
				A[v1][v2]=1850;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==1)
			{
				A[v1][v2]=1850;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==5)
			{
				A[v1][v2]=700;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==1)
			{
				A[v1][v2]=700;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			
			
			
			
			else if (v1==2&&v2==3)
			{
				A[v1][v2]=1250;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==2)
			{
				A[v1][v2]=1250;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==2&&v2==4)
			{
				A[v1][v2]=1700;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==2)
			{
				A[v1][v2]=1700;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			else if (v1==2&&v2==5)
			{
				A[v1][v2]=750;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==2)
			{
				A[v1][v2]=750;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			
			else if (v1==3&&v2==4)
			{
				A[v1][v2]=1550;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==3)
			{
				A[v1][v2]=1550;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==5)
			{
				A[v1][v2]=2000;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==3)
			{
				A[v1][v2]=2000;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			
			
			
			else if (v1==4&&v2==5)
			{
				A[v1][v2]=2100;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==4)
			{
				A[v1][v2]=2100;
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}


         do{
         	cout<<"\n\n Enter the way of transport::\n******1)Flight******\n******2)Bus******\n******3)Car******\n\n";
         	cin>>ch1;
         	cout<<"\n";
        	switch(ch1)
        	{
        		case 1:
        		{
        				do{
						cout<<"\n :::  SELECT YOUR CLASS :::";
						cout<<"\n\n******1>ECONOMY CLASS******\n******2>BUSSINESS CLASS******\n******3>FIRST CLASS******\n\n";
						cin>>choice;
						switch(choice)
						{
							case 1:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=1500;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=3000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=4500;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								break;
							}
							case 2:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=4000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=17000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								break;
							}
							case 3:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2500;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=5000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=25000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=28000;
									cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
								}
								break;
							}

						}
					}while(choice<0);

					break;
        		}
        		case 2:
        		{
        			if(A[v1][v2]>=100&&A[v1][v2]<=250)
				{
					cost[v1][v2]=2000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=251&&A[v1][v2]<=500)
				{
					cost[v1][v2]=4000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=501&&A[v1][v2]<=750)
				{
					cost[v1][v2]=6000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=751&&A[v1][v2]<=1000)
				{
					cost[v1][v2]=8000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
				{
					cost[v1][v2]=10000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
				{
					cost[v1][v2]=15000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1801)
				{
					cost[v1][v2]=17000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				break;

        		}
        		case 3:
        		{
        			if(A[v1][v2]>=100&&A[v1][v2]<=250)
				{
					cost[v1][v2]=1500;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=251&&A[v1][v2]<=500)
				{
					cost[v1][v2]=3000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=501&&A[v1][v2]<=750)
				{
					cost[v1][v2]=4500;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=751&&A[v1][v2]<=1000)
				{
					cost[v1][v2]=6000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
				{
					cost[v1][v2]=7000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
				{
					cost[v1][v2]=8000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}
				if(A[v1][v2]>=1801)
				{
					cost[v1][v2]=10000;
					cout<<"\n COST PER TICKET IS: "<<cost[v1][v2];
				}

				break;
        		}
        	}
         }while(ch1<0);
}
void graph1::display()
{
		cout<<"\n THE ADJACENCY MATRIX IS:\n";
		cout<<"\t";
		for(int i=0;i<6;i++)
		{
			cout<<"\t"<<city[i]<<"\tcost";
		}

		cout<<"\n------------------------------------------------------------------------------------------------------------\n";
		for(int i=0;i<6;i++)
		{
			cout<<"\t"<<city[i]<<"\t|";
			for(int j=0;j<6;j++)
			{
				cout<<A[i][j]<<"\t";
				cout<<cost[i][j]<<"\t";
			}
		cout<<"\n";
		}
}
void graph1::ticket()
{
	calculate_km();
	ofstream fout,rout;

	fout.open("travel1.txt",ios::out|ios::app);
	fout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*TICKET*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
	fout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
	fout<<"\n\tSEAT NUMBER ::"<<"\""<<"1"<<"\"";
	fout<<"\n\tNAME                   ::"<<"\""<<name<<"\"";
	fout<<"\n\tSOURCE                 ::"<<"\""<<city[v1]<<"\"";
	fout<<"\n\tDESTINATION            ::"<<"\""<<city[v2]<<"\"";
	fout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
	fout<<"\n\tTOTAL COST             ::"<<"\""<<cost1<<"\"";
	fout<<"\n\tCOST WITH DISCOUNT     ::"<<"\""<<cost2<<"\"";
	fout<<"\n================================================================\n";
	fout<<"\n                               CONTACT US:9888888888";
	fout<<"\n================================================================\n";

	if(num>1)
	{
		for(int j=2;j<=num;j++)
		{
			fout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*TICKET*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
			fout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
			fout<<"\n\tSEAT NUMBER ::"<<"\""<<j<<"\"";
            		fout<<"\n\tNAME                   ::"<<"\""<<name1[j]<<"\"";
			fout<<"\n\tSOURCE                 ::"<<"\""<<city[v1]<<"\"";
			fout<<"\n\tDESTINATION            ::"<<"\""<<city[v2]<<"\"";
			fout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
			fout<<"\n\tTOTAL COST             ::"<<"\""<<cost1<<"\"";
			fout<<"\n\tCOST WITH DISCOUNT     ::"<<"\""<<cost2<<"\"";
			fout<<"\n================================================================\n";
			fout<<"\n                               CONTACT US:9888888888";
			fout<<"\n================================================================\n";
		}
	}

	rout.open("travel2.txt",ios::out|ios::ate);
	rout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*TICKET*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
	rout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
	rout<<"\n\tSEAT NUMBER ::"<<"\""<<"1"<<"\"";
	rout<<"\n\tNAME                   ::"<<"\""<<name<<"\"";
	rout<<"\n\tSOURCE                 ::"<<"\""<<city[v1]<<"\"";
	rout<<"\n\tDESTINATION            ::"<<"\""<<city[v2]<<"\"";
	rout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
	rout<<"\n\tTOTAL COST             ::"<<"\""<<cost1<<"\"";
	rout<<"\n\tCOST WITH DISCOUNT     ::"<<"\""<<cost2<<"\"";
	rout<<"\n================================================================\n";
	rout<<"\n                               CONTACT US:9888888888";
	rout<<"\n================================================================\n";

	cout<<"\n==========================TICKET================================\n";
	cout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
	cout<<"\n\tSEAT NUMBER ::"<<"\""<<"1"<<"\"";
	cout<<"\n\tNAME                    ::"<<"\""<<name<<"\"";
	cout<<"\n\tSOURCE                  ::"<<"\""<<city[v1]<<"\"";
	cout<<"\n\tDESTINATION             ::"<<"\""<<city[v2]<<"\"";
	cout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
	cout<<"\n\tTOTAL COST              ::"<<"\""<<cost1<<"\"";
	cout<<"\n\tCOST WITH DISCOUNT      ::"<<"\""<<cost2<<"\"";
	cout<<"\n\tTO AVAIL 5% DISCOUNT NEXT TIME CODE:::::\"1234\"";
	cout<<"\n================================================================\n";
	cout<<"\n                                 CONTACT US:9888888888";
	cout<<"\n=================================================================\n";

	if(num>1)
	{
		for(int j=2;j<=num;j++)
		{
			rout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*TICKET*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
			rout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
			rout<<"\n\tSEAT NUMBER ::"<<"\""<<j<<"\"";
            		rout<<"\n\tNAME                   ::"<<"\""<<name1[j]<<"\"";
			rout<<"\n\tSOURCE                 ::"<<"\""<<city[v1]<<"\"";
			rout<<"\n\tDESTINATION            ::"<<"\""<<city[v2]<<"\"";
			rout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
			rout<<"\n\tTOTAL COST             ::"<<"\""<<cost1<<"\"";
			rout<<"\n\tCOST WITH DISCOUNT     ::"<<"\""<<cost2<<"\"";
			rout<<"\n================================================================\n";
			rout<<"\n                               CONTACT US:9888888888";
			rout<<"\n================================================================\n";

			cout<<"\n==========================TICKET================================\n";
			cout<<"\n=====================DARY TRAVEL AGENCY=======================\n";
			cout<<"\n\tSEAT NUMBER ::"<<"\""<<j<<"\"";
            		cout<<"\n\tNAME                    ::"<<"\""<<name1[j]<<"\"";
			cout<<"\n\tSOURCE                  ::"<<"\""<<city[v1]<<"\"";
			cout<<"\n\tDESTINATION             ::"<<"\""<<city[v2]<<"\"";
			cout<<"\n\tTOTAL KM               ::"<<"\""<<A[v1][v2]<<"\"";
			cout<<"\n\tTOTAL COST              ::"<<"\""<<cost1<<"\"";
			cout<<"\n\tCOST WITH DISCOUNT      ::"<<"\""<<cost2<<"\"";
			cout<<"\n\tTO AVAIL 5% DISCOUNT NEXT TIME CODE:::::\"1234\"";
			cout<<"\n================================================================\n";
			cout<<"\n                                 CONTACT US:9888888888";
			cout<<"\n=================================================================\n";
		}
	}
}

void printProgBar( int percent )
{
    string bar;

  for(int i = 0; i < 50; i++)
    {
        if( i < (percent/2))
        {
            bar.replace(i,1,"=");
        }
        else if( i == (percent/2))
        {
            bar.replace(i,1,">");
        }
	else
        {
            bar.replace(i,1," ");
        }
  }

  cout<< "\r" "[" << bar << "] ";
  cout.width( 3 );
  cout<< percent << "%     " << std::flush;
}
void graph1::calculate()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cost1=cost1+cost[i][j];
		}
	}
	cost3=cost1*num;
	cout<<"\n Total cost is:::"<<cost3;
}
void graph1::discount()
{
	cost2=cost1;
	if(answer=='n' || answer=='N')
	{
		cost2=cost1-(cost1*5/100);
	}
	cost4=cost2*num;
	cout<<"\n COST AFTER DISCOUNT IS:::"<<cost4<<"\n\n";
}

void graph1::calculate_km()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			km=km+A[i][j];
		}
	}
	km1=km;
	cout<<"\n Total kilometer  is:::"<<km1;
}

void graph1::inputing()
{
	cout<<"\n\n\n........................ YOUR DATA IS BEING INPUTING.......................................\n\n\n";
	cout<<"\n-----------------INPUTING--------------------\n\n\n";
        int N = 100;
        for(int i = 0; i < N; i++)
        {
             	float p = (i / (float) N) * (float) 100;
        	printProgBar(p);
            usleep(19990);
       	}
       	printProgBar(100);
        cout << endl;

}
void graph1::displaying()
{
	cout<<"\n\n\n........................ YOUR DATA IS BEING DISPLAYING......................................\n\n\n";
	cout<<"\n---------------DISPLAYING-----------------------\n\n\n";
        int N = 100;
        for(int i = 0; i < N; i++)
        {
             	float p = (i / (float) N) * (float) 100;
        	printProgBar(p);
            usleep(19990);
       	}
       	printProgBar(100);
        cout << endl;
}


void graph1::input()
{
	int cnt1;
	cnt1=0;

	cout<<"\n Enter your name::";
	cin.getline(name,50);
	go1:
	cout<<"\n Enter your mobile number::";
	cin>>mobile;
	int i=0;
	while(mobile[i]!='\0')
	{
		i++;
	}
	if(i<10)
	{
		cout<<"\n WRONG MOBILE NUMBER ....ENTER AGAIN....";
		goto go1;
	}
	cout<<"\n ARE YOU NEW CUSTOMER(y/n)::";
	cin>>answer;
	if(answer=='n' || answer=='N')
	{
		int password;
		password = 1234;
		cout << "\nEnter your previous travelling code \"FOR 5% DISCOUNT 4 CHANCES ONLY 😀\":\n";
		cin >> password;
	    	l1:
		if (password == 1234)
	        {
	      		cout <<"\n.....Access Granted...\n";
	      		cout<<"\n ....................😊  YOU ARE ELIGIBLE FOR 5% DISCOUNT  😊..............................";
	      		cout<<"\n---------------------LOADING-----------------------\n";
	      		int N = 100;
	            	for(int i = 0; i < N; i++)
	            	{
	                	float p = (i / (float) N) * (float) 100;
	                	printProgBar(p);
                        usleep(19990);
	           	}
		    	printProgBar(100);
            		cout << endl;
		        goto step1;
        	}
    		while(password != 1234 && cnt1<3)
        	{
            		cout << "Access Denied.....Invalid Username/Password:";
	    		cout<<"\n Enter correct password:\n";
	    		cin>>password;
	    		cnt1++;
	   		if(password==1234)
				goto l1;
        	}
	}
	step1:
	cout<<"\n\n..........................HAVE A GOOD EXPERIANCE WITH US.........................\n ";
	cout<<"======================================================================================\n\n";
}
void graph1::exist()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(A[i][j]!=0)
			{
				cout<<"\n You will travel from this path:"<<city[i]<<"====>"<<city[j]<<"\n";
			}
		}
	}
}
void graph1::initvisited()
{
	for(int i=0;i<6;i++)			//mark as visited
 	       visited[i]=0;
}
void graph1::bfs(int v1)
{
	int queue[20],front=0,rear=0;
	cout<<city[v1]<<"\t";
	visited[v1]=1;
	while(1)
	{
		for(int i=0;i<6;i++)
		{
			if(A[v1][i]!=0 && !visited[i])
			{
				cout<<city[i]<<"\t";
				visited[i]=1;
				queue[front]=i;
				front++;
			}
		}
		if(front==rear)
			break;

		v1=queue[rear];
		rear++;
	};

}
void graph1::dfs(int v1)
{
	int v2;
        visited[v1]=1;
        cout <<city[v1] <<"\t";
        for (v2=0;v2<6;v2++)
        {
        	if (A[v1][v2]!=0 && !visited[v2])
                dfs(v2);
        }
}

void graph1::graph_display()
{

	char a[]="Nashik";
	char b[]="Pune";
	char c[]="Mumbai";
	char d[]="Delhi";
	char e[]="Goa";
	char f[]="Kolkata";
	char g[]="DARY TRAVEL AGENCY";
	char h[]="FLIGHT";
	char i[]="BUS";
	char j[]="CAR";

	outtextxy(200,10,g);
	
	if(v1==0&&v2==1 || v1==1&&v2==0)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(4);
	line(400,100,400,200);
	if(ch1==1)
		outtextxy(400,150,h);
	else if(ch1==2)
		outtextxy(400,150,i);
	else
		outtextxy(400,150,j);
	setcolor(14);
	line(400,100,250,50);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==0&&v2==2||v1==2&&v2==0)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(4);
	line(250,50,400,200);
	if(ch1==1)
		outtextxy(250,100,h);
	else if(ch1==2)
		outtextxy(250,100,i);
	else
		outtextxy(250,100,j);
	setcolor(14);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}


	else if(v1==0&&v2==3||v1==3&&v2==0)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(4);
	line(400,200,250,350);
	if(ch1==1)
		outtextxy(200,150,h);
	else if(ch1==2)
		outtextxy(200,150,i);
	else
		outtextxy(200,150,j);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);
	}

	else if(v1==0&&v2==4||v1==4&&v2==0)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	setcolor(14);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	setcolor(4);
	line(50,100,400,200);
	if(ch1==1)
		outtextxy(50,100,h);
	else if(ch1==2)
		outtextxy(50,100,i);
	else
		outtextxy(50,100,j);
	setcolor(14);
	line(50,100,250,350);

	}

	else if(v1==0&&v2==5||v1==5&&v2==0)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	setcolor(4);	
	line(50,200,400,200);
	if(ch1==1)
		outtextxy(0,75,h);
	else if(ch1==2)
		outtextxy(0,75,i);
	else
		outtextxy(0,75,j);
	
	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);
	}


	else if(v1==1&&v2==2||v1==2&&v2==1)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(4);
	line(400,100,250,50);
	if(ch1==1)
		outtextxy(450,150,h);
	else if(ch1==2)
		outtextxy(450,150,i);
	else
		outtextxy(450,150,j);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);
	}

	else if(v1==1&&v2==3||v1==3&&v2==1)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	setcolor(4);
	line(250,350,400,100);
	if(ch1==1)
		outtextxy(250,150,h);
	else if(ch1==2)
		outtextxy(250,150,i);
	else
		outtextxy(250,150,j);
	setcolor(14);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==1&&v2==4||v1==4&&v2==1)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(4);
	line(50,100,400,100);
	if(ch1==1)
		outtextxy(75,150,h);
	else if(ch1==2)
		outtextxy(75,150,i);
	else
		outtextxy(75,150,j);
	setcolor(14);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==1&&v2==5||v1==5&&v2==1)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	setcolor(4);
	line(50,200,400,100);
	if(ch1==1)
		outtextxy(250,100,h);
	else if(ch1==2)
		outtextxy(250,100,i);
	else
		outtextxy(250,100,j);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}


	else if(v1==2&&v2==3||v1==3&&v2==2)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	setcolor(14);
	line(250,50,250,350);
	setcolor(14);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	setcolor(4);
	line(250,350,250,50);
	if(ch1==1)
		outtextxy(300,300,h);
	else if(ch1==2)
		outtextxy(300,300,i);
	else
		outtextxy(300,300,j);
	
	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==2&&v2==4||v1==4&&v2==2)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(4);
	line(50,100,250,50);
	if(ch1==1)
		outtextxy(200,200,h);
	else if(ch1==2)
		outtextxy(200,200,i);
	else
		outtextxy(200,200,j);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==2&&v2==5||v1==5&&v2==2)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	setcolor(14);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(4);
	line(50,200,250,50);
	if(ch1==1)
		outtextxy(250,150,h);
	else if(ch1==2)
		outtextxy(250,150,i);
	else
		outtextxy(250,150,j);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==3&&v2==4||v1==4&&v2==3)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	setcolor(14);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	setcolor(14);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	setcolor(4);
	line(50,100,250,350);
	if(ch1==1)
		outtextxy(125,275,h);
	else if(ch1==2)
		outtextxy(125,275,i);
	else
		outtextxy(125,275,j);

	}

	else if(v1==3&&v2==5||v1==5&&v2==3)
	{
	outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	setcolor(14);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(4);
	line(250,350,50,200);
	if(ch1==1)
		outtextxy(50,225,h);
	else if(ch1==2)
		outtextxy(50,225,i);
	else
		outtextxy(50,225,j);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(14);
	line(50,200,50,100);
	setcolor(14);
	line(50,200,250,50);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}

	else if(v1==4&&v2==5||v1==5&&v2==4)
	{
		outtextxy(250,50,a);
	setcolor(14);
	line(250,50,400,100);
	setcolor(14);
	line(250,50,400,200);
	line(250,50,250,350);
	setcolor(14);
	line(250,50,50,200);

	outtextxy(400,100,b);
	setcolor(14);
	line(400,100,400,200);
	setcolor(14);
	line(400,100,250,50);
	setcolor(14);
	line(400,100,50,200);
	line(400,100,50,100);

	outtextxy(400,200,c);
	setcolor(14);
	line(400,200,250,350);
	setcolor(14);
	line(400,200,400,100);
	setcolor(14);
	line(400,200,50,100);
	line(400,200,50,200);

	outtextxy(250,350,d);
	setcolor(14);
	line(250,350,50,200);
	setcolor(14);
	line(250,350,50,100);
	line(250,350,400,100);
	line(250,350,250,50);

	outtextxy(25,200,e);
	setcolor(4);
	line(50,200,50,100);
	if(ch1==1)
		outtextxy(0,150,h);
	else if(ch1==2)
		outtextxy(0,150,i);
	else
		outtextxy(0,150,j);
	setcolor(14);
	line(50,200,250,50);
	setcolor(14);
	line(50,200,400,100);
	setcolor(14);
	line(50,200,400,200);

	outtextxy(0,100,f);
	setcolor(14);
	line(50,100,250,50);
	setcolor(14);
	line(50,100,400,100);
	line(50,100,400,200);
	line(50,100,250,350);

	}
}

int main()
{
	graph1 m;
	int choice;
	char choice1;
	int choice2;
	cout<<"\n\n.....😃....😃.....😃.....😃....WELCOME TO \"DARY\" TRAVEL AGENCY ...😃....😃....😃.....😃..\n\n\n";
    	m.input();	
    	do{
		cout<<"\n    /*/*/*/*/*/*/*/*////////////MENU////////////*/*/*/*/*/*/*/*/*/     ";
		cout<<"\n=================================================================";
		cout<<"\n\n\t\t1>Book Ticket\n\t\t2>Display\n\t\t3>Exit\n\n";
		cout<<"\n=================================================================";

		cout<<"\n\n ::::  Enter your choice  ::::\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"\n.......................................................................................\n";
				cout<<"\n...............................BOOKING HERE.................................\n";
				cout<<"\n........................ONE TICKET AT A TIME...........................\n";
				m.create();
				m.inputing();
				cout<<"\n\n";
				break;
			}
			case 2:
			{
				do
				{
					cout<<"\n**************************************************************************************************************";
					cout<<"\n1>ADJECENCY MATRIX\n2>TRAVERSAL PATH\n3>DFS TRAVERSAL\n4>BFS TRAVERSAL\n5>TOTAL COST AND TICKET\n6>NETWORK\n7>EXIT\n\n";
					cout<<"\n****************************************************************************************************************";
					cout<<"\n ENTER YOUR CHOICE:  ";
					cin>>choice2;
					switch(choice2)
					{
						case 1:
							m.displaying();
							m.display();
							break;
					
						case 2:
							m.displaying();
							m.exist();
							break;
						
						case 3:
							int v1;
							for(int i=0;i<6;i++)
							{
		        					    cout <<i << ":" << city[i];
		        					    cout<<"\n";
							}
							cout<<"\nENTER STARTING VERTEX::\n";
							cin>>v1;
							cout<<"\nDFS TRAVERSAL IS::\n";
							m.initvisited();
							m.dfs(v1);
							break;
					
						case 4:		 
							int y1;
							for(int i=0;i<6;i++)
							{
		        					    cout <<i << ":" << city[i];
		        					    cout<<"\n";
							}
							cout<<"\nENTER STARTING VERTEX::\n";
							cin>>y1;
							cout<<"\nBFS TRAVERSAL IS::\n";
							m.initvisited();
							m.bfs(y1);
							break;	
				
				
						case 5:
							cout<<"\n:::::::::::::::::::::::::::::THE COST IS:::::::::::::::::::::::::::::::::::";
							m.calculate();
							m.discount();
							cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
							m.ticket();
							break;
					
						case 6:
							int gd=DETECT,gm;
							initgraph(&gd,&gm,NULL);
							m.graph_display();
							getch();
							closegraph();	
							break;		
					}
				}while(choice2<7);
			}		
		}
	cout<<"\nDo you want to continue(y or n): ";
	cin>>choice1;
	} while(choice1=='y'||choice1=='Y');
return 0;
}

