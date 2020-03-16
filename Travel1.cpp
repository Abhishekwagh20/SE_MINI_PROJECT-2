#include<iostream>
using namespace std;
#include<cstring>
class graph1
{
	int A[10][10];
	string city[20];
	int cost[10][10];
	int visited[10];
	int ch1;
	public:
		graph1()
		{
			city[0]="Mumbai"; city[1]="Pune"; city[2]="Nashik"; city[3]="Delhi";city[4]="Kolkata";city[5]="Goa";
			 for(int i=0;i<6;i++)
                 		for (int j=0;j<6;j++)
                 		{
                       		 	A[i][j]=0;
                       		 	cost[i][j]=0;
                 		}


		}
		void create();
		void display();
		void exist();
		void dfs(int);
};
void graph1::create()
{
	int m,choice;
	int v1,v2;
     	 char ans,y,Y;
     	 do{
     	 		cout<<"\n";
		       	for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
			}
		       	cout <<"\n \nEnter the city from where you want to start travel: \n";
		       	cin >> v1;
			cout<<"\n";
		       	for(int i=0;i<6;i++)
			{
		            cout <<i << ":" << city[i];
		            cout<<"\n";
		       	}
		       	cout <<"\n \nEnter the city where you want to go:  ";
		       cin >> v2;
		       cout<<"\n";

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


			if (v1==0&&v2==1)
			{
				A[v1][v2]=150;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==2)
			{
				A[v1][v2]=200;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==3)
			{
				A[v1][v2]=1450;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==4)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==0&&v2==5)
			{
				A[v1][v2]=600;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			else if (v1==1&&v2==0)
			{
				A[v1][v2]=150;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==2)
			{
				A[v1][v2]=220;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==3)
			{
				A[v1][v2]=1300;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==4)
			{
				A[v1][v2]=1850;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==1&&v2==5)
			{
				A[v1][v2]=700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			else if (v1==2&&v2==0)
			{
				A[v1][v2]=200;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==1)
			{
				A[v1][v2]=220;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==3)
			{
				A[v1][v2]=1250;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==4)
			{
				A[v1][v2]=1700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==2&&v2==5)
			{
				A[v1][v2]=750;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			else if (v1==3&&v2==0)
			{
				A[v1][v2]=1450;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==1)
			{
				A[v1][v2]=1300;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==2)
			{
				A[v1][v2]=1250;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==4)
			{
				A[v1][v2]=1550;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==3&&v2==5)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			else if (v1==4&&v2==0)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==1)
			{
				A[v1][v2]=1850;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==2)
			{
				A[v1][v2]=1700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==3)
			{
				A[v1][v2]=1550;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==4&&v2==5)
			{
				A[v1][v2]=2100;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}

			else if (v1==5&&v2==0)
			{
				A[v1][v2]=600;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==1)
			{
				A[v1][v2]=700;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==2)
			{
				A[v1][v2]=750;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==3)
			{
				A[v1][v2]=2000;
				A[v2][v1]=A[v1][v2];
				cout<<"You will travel "<<A[v1][v2]<<"  km";
			}
			else if (v1==5&&v2==4)
			{
				A[v1][v2]=2100;
				A[v2][v1]=A[v1][v2];
				cout<<"\nYou will travel "<<A[v1][v2]<<"  km";
			}


         do{
         	cout<<"\n\n Enter the way of transport 1)Flight  2)Bus  3)Car : ";
         	cin>>ch1;
         	cout<<"\n";
        	switch(ch1)
        	{
        		case 1:
        		{
        				do{
						cout<<"\n SELECT YOUR CLASS";
						cout<<"\n\n1>ECONOMY CLASS  2>BUSSINESS CLASS 3>FIRST CLASS ";
						cin>>choice;
						switch(choice)
						{
							case 1:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=1500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=3000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=4500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								break;
							}
							case 2:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=4000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=17000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								break;
							}
							case 3:
							{
								if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=2500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=5000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=25000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=28000;
									cout<<"\n COST IS: "<<cost[v1][v2];
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
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=4000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=15000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=17000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}

								break;
        		}
        		case 3:
        		{
        							if(A[v1][v2]>=100&&A[v1][v2]<=250)
								{
									cost[v1][v2]=1500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=251&&A[v1][v2]<=500)
								{
									cost[v1][v2]=3000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=501&&A[v1][v2]<=750)
								{
									cost[v1][v2]=4500;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=751&&A[v1][v2]<=1000)
								{
									cost[v1][v2]=6000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1001&&A[v1][v2]<=1400)
								{
									cost[v1][v2]=7000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1401&&A[v1][v2]<=1800)
								{
									cost[v1][v2]=8000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}
								if(A[v1][v2]>=1801)
								{
									cost[v1][v2]=10000;
									cout<<"\n COST IS: "<<cost[v1][v2];
								}

								break;
        		}
        	}
         }while(ch1<0);

         cout << "\n \nDo you want to travel to another cities: (y or n)?";
	cin >> ans;
 	}while(ans=='y'||ans=='Y');

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
int main()
{
	graph1 m;
	int ch;

	do{
	cout<<"\n\n1>create \n2>display\n3>existing path\n4>exit\n";
	cout<<"\n\n Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			m.create();
			break;
		}
		case 2:
		{
			m.display();
			break;
		}
		case 3:
		{
			m.exist();
			break;
		}

	}
	}while(ch<4);

	return 0;
}

