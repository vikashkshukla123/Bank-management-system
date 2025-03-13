#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
using namespace std;
struct bankManagement{
  int accountNo;
  string name;
  string address;
  char accountType;
  long long amount;

  bool check_availability();
  bool search_account(int);
  void new_account();
  void deposit();
  void withdraw();
  void check_account();
  void modify_account();
  void delete_account();
  
bankManagement(){
  accountNo = 0;
  name = " ";
  address =  " ";
  accountType = '\0';
  amount = 0.0;
}




};
int main(){
  bankManagement b[5];
  int x, an;
  bool check;
  while(1){
    system("CLS");
    cout<<endl;
    cout<<" enter 1 to create new account"<<endl;
    cout<<" enter 2 to Deposit"<<endl;
    cout<<" enter 3 to withdraw"<<endl;
    cout<<" enter 4 to check account"<<endl;
    cout<<" enter 5 to modify"<<endl;
    cout<<"enter 6 to delete"<<endl;
    cout<<"enter 7 to show all accounts"<<endl;
    cout<<"enter 8 to exit"<<endl;
    cout<<endl;
    cout<<"enter the choice"<<endl;
    cin>>x;
    switch(x){
      case 1:{
        check = false;
        for(int i = 0; i<5; i++){
          if(b[i].check_availability()){
            check = true;
            b[i].new_account();
          
    case 6:{check = false;
      cout<<"enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].search_account(an)){
          check = true;
          b[i].delete_account();  cout<<"working."<<endl;
            break;

          }

        }
        if(check == false){
          cout<<"account exceeded"<<endl;
          break;
        }
    }
    case 2:
    {
      check = false;
      cout<<"Enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].search_account(an)){
          check = true;
          b[i].deposit();
          break;
        }
      }
      if(check == false){
        cout<<"No account is found"<<endl;
        break;
      }

    }
    case 3:{
      check = false;
      cout<<"Enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].search_account(an)){
          check = true;
          b[i].withdraw();
          break;
        }
      }
      if(check == false){
        cout<<"No account is found"<<endl;
        break;
      }
    }
    case 4:{
      check = false;
      cout<<"enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].search_account(an)){
          check = true;
          b[i].check_account();
          break;
        }
      }
      if(check == false){
        cout<<"no account has been found"<<endl;
        break;
      }
    }
    case 5:{
      check = false;
      cout<<"enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].search_account(an)){
          check = true;
          b[i].modify_account();
          break;
        }
      }
      if(check == false){
        cout<<"No account is found"<<endl;
        break;
      }
    }
          break;
        }
      }
      if(check == false){
        cout<<"No account is found"<<endl;
        break;
      }

    }
    case 7:
    {check = false;
      cout<<"enter the account number"<<endl;
      cin>>an;
      for(int i = 0; i<5; i++){
        if(b[i].check_availability()){
          check = true;
          cout<<"account details of"<<i+1<<endl;
          b[i].check_account();
        }
      }
      if(check == false){
        cout<<"No account is found"<<endl;
        break;
      }

    }
    case 8:{
      exit(0);
    }
}
getch();
}
return 0;
}
bool bankManagement:: check_availability(){
  if(accountNo == 0 && name == " " && address == " " && accountType == '\0' && amount == 0.0){
    return true;
  }
  else{
    return false;
  }
}
bool bankManagement:: search_account(int a){
  if(accountNo == a){
    return true;
  }
  else{
    return false;
  }

}
void bankManagement:: new_account(){
  cout<<"enter your account number"<<endl;
  cin>>accountNo;
  cout<<endl;
  cout<<"enter your full name"<<endl;
  cin>>name;
  cout<<endl;
  cout<<"enter your address"<<endl;
  cin>>address;
  cout<<endl;
  cout<<"what type of account you want to open saving(s) or current(c)"<<endl;
  cin>>accountType;
  cout<<endl;
  cout<<"enter how much money do you want to deposit:"<<endl;
  cin>>amount;
  cout<<endl;
  cout<<"account created successfully...."<<endl;

}
void bankManagement:: deposit(){
  float d;
  cout<<"enter the amount to deposit ="<<endl;
  cin>>d;
  amount += d;
  cout<<"updated new amount is ="<<amount<<endl;
}
void bankManagement:: withdraw(){
  int wd;
  cout<<"enter the amount to withdraw="<<endl;
  cin>>wd;
  if(wd<=amount){
    amount -= wd;
    cout<<"amount is with draw successfully"<<endl;
  }
  else{
    cout<<"you don't have enough amount in bank to withdraw"<<endl;
  }
  cout<<"remaining amount : "<<amount<<endl;

}
void bankManagement :: check_account(){
  cout<<"your name:"<<name<<endl;
  cout<<"your address:"<<address<<endl;
  cout<<"your account type:"<<accountType<<endl;
  cout<<"your amount:"<<amount<<endl;
  
}
void bankManagement:: modify_account(){
  cout<<"account number: "<<accountNo<<endl;
  cout<<"modify account holder name"<<endl;
  cin>>name;
  cout<<endl;
  cout<<"modify your address"<<endl;
  cin>>address;
  cout<<endl;
  cout<<"modify account type"<<endl;
  cin>>accountType;
  cout<<endl;
  cout<<"Account is modified successfully"<<endl;
}

void bankManagement :: delete_account(){
  accountNo = 0;
  name = " ";
  address = " ";
  accountType = '\0';
  amount = 0.0;
  cout<<"account is successfully deleted"<<endl;
  cout<<endl;
}

