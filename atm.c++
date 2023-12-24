#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class atm
{
    private:
        long int acc_no;
        string name;
        int PIN;
        double balance;
        string number;
    public:
        void getdata(long int acc_no1,string name1,int PIN1,double balance1,string number1)
        {
            acc_no = acc_no1;
            name = name1;
            PIN = PIN1;
            balance = balance1;
            number = number1;
        }
        long int getuseracc_no()
        {
            return acc_no;
        }
        int getuser_pin()
        {
            return PIN;
        }
        double getuser_balance()
        {
            return balance;
        }
        void cash_withdraw(int amt)
        {
            if(amt>0 && amt<balance)
            {
                balance-=amt;
                cout<<"Please Collect Your Cash"<<endl;
                cout<<"Available Balance: "<<balance<<endl;
                _getch();
            }
            else
            {
                cout<<"Insufficient Balance or Invalid Data"<<endl;
                _getch();
            }
        }
        string getuser_name()
        {
            return name;
        }
        string getuser_phoneno()
        {
            return number;
        }
        void user_change_no(string old_1,string new_1)
        {
            if(old_1==number)
            {
                number = new_1;
                cout<<"Successfully Updated "<<endl;
                _getch();
            }
            else
            {
                cout<<"Invalid or Incorrect Number "<<endl;
                _getch();
            }
        }
};
int main()
{
    int choice = 0,user_acc_no,user_pin;
    system("cls");
    atm user1;
    user1.getdata(123456789,"Sukant",1911,45000,"6379813063");
    while(1)
    {
        system("cls");
        cout<<"*****$$$$Welcome to ATM$$$$*****"<<endl;
        cout<<"Enter Your Account Number:"<<endl;
        cin>>user_acc_no;
        cout<<"Enter Your PIN Number:"<<endl;
        cin>>user_pin;
        if((user_acc_no==user1.getuseracc_no())&&(user_pin==user1.getuser_pin()))
        {
           while(1)
           {
                int amount = 0;
                string old_no,new_no;
                system("cls");
                cout<<"*****$$$$Welcome to ATM$$$$*****"<<endl;
                cout<<"Select Options :"<<endl;
                cout<<"1. Check Balance"<<endl;
                cout<<"2. Cash Withdraw"<<endl;
                cout<<"3. Show User Details"<<endl;
                cout<<"4. Change Mobile Number"<<endl;
                cout<<"5. Exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    cout<<"Your Bank Balance is: "<<user1.getuser_balance()<<endl;
                    _getch();
                    break;
                    case 2:
                    cout<<"Enter Your Amount: "<<endl;
                    cin>>amount;
                    user1.cash_withdraw(amount);
                    break;
                    case 3:
                    cout<<"***User Details***"<<endl;
                    cout<<"-> Account Number: "<<user1.getuseracc_no()<<endl;
                    cout<<"-> Name: "<<user1.getuser_name()<<endl;
                    cout<<"-> Balance: "<<user1.getuser_balance()<<endl;
                    cout<<"-> Mobile Number"<<user1.getuser_phoneno()<<endl;
                    _getch();
                    break;
                    case 4:
                   
                    cout<<"Enter Old Mobile Number: "<<endl;
                    cin>>old_no;
                    cout<<"Enter New Mobile Number: "<<endl;
                    cin>>new_no;
                    user1.user_change_no(old_no,new_no);
                    break;
                    case 5:
                    exit(0);
                    break;
                    default:
                    cout<<"Enter Valid Data !!!"<<endl;
                    break;
                }
           }
            
           
        }
    }
    
    
}