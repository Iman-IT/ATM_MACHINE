#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class atm{
	private :
		long int account_no;
		string name;
		int PIN;
		double balance;
		
		
	public:
	void setdata(long int account_no_a,string name_a,int PIN_a,	double balance_a){
		account_no= account_no_a;
		name=name_a;                    //assigning a data to private 
		PIN=PIN_a;
		balance=balance_a;
	}	                    //getting the details
   long int getaccountno(){
	 	return account_no;
	 }
   string getname(){
	 	return name;
	 }
   int	 getPIN(){
	 	return PIN;
	 }
   double  getbalance(){
	 	return balance;
	 }
	  void cashWithdraw(int amount_a){
	  	if(amount_a>0&&amount_a < balance)
	  	{
		  balance =balance - amount_a;
		  cout<<"Collect Your cash **** \n ";
		  cout<<"Avaliable cash is : "<<balance;
		  _getch();
	}
	else{
		cout<<"Insufficient balance \n";
		_getch();
	} }
	  };
	  
 int main(){
 	int choice =0 , enterPIN;
 	long int enteraccountno;
 	
 	system("cls");
 	
 	atm user1;                //creating object 
 	user1.setdata(12345," Iman",1111,50000);     //assigning data
 	
 	do{
 		system("cls");
 		cout<<"\t\t***Programmer : IMAN AZIZ ***\n\n\t****\Welcome to ATM Program**** \n\n ";
 		cout<<"Enter your account number : ";
 		cin>>enteraccountno;
 		
 		cout<<"Enter your PIN number : ";
 		cin>>enterPIN;
 		
 		if((enteraccountno==user1.getaccountno()) && (enterPIN==user1.getPIN())){
 			do{ 
 			int amount=0;
// 				cout<<"\n\t\t****Welcome to ATM Program**** \n ";
 				cout<<" \n\n Select Options  \n";
 				cout<<"1.Check Balance \n";
 				cout<<"2.Cash Withdarw \n";
 				cout<<"3.User deatil \n";
 				cout<<"4.Exit \n";
 				cin>>choice;
 				
 				switch(choice){
 					case 1:
 					cout<<"Your balance is : "<<user1.getbalance();
 					 break;
 					
 					case 2:
 						cout<<"Enter the amount : ";
 						cin>>amount;
 						user1.cashWithdraw(amount);
 						break;
 						
 					case 3:
					 cout<<"User details are : \n";
					 cout<<"Your account is : "<<user1.getaccountno()<<endl;
					 cout<<"Your Name is : "<<user1.getname()<<endl;
					 cout<<"Your Balance is : "<<user1.getbalance();
					  break;
					
				    case 4:
				    	exit(0); 
				    	break;
				    
				    default:
				    cout<<"Invalid input!!!! ";
				     } 
				 }
				     while(1);
 				 }
 				 else
 				 cout<<"User details are invalid ";
 				  }
 				  while(1);
	
	 
	 return 0;
 	
 }
