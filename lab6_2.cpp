//Dialog of the first example is given below.
#include<iostream>
#include <string>
using namespace std;

int main()
{
string name;
cout <<"Fahsai: Sawadee ka...Can you tell me your name?"<< "\n";
cout <<"?????:";
getline(cin,name);
cout <<"Fahsai: Wow!!!"<< name << "  that is a really cool name." <<"\n";

int id;
cout <<"Fahsai: I think you are Engineering student. " <<"\n"<< "What is your student ID? :";
cin  >> id;
cout << "Fahsai: I think you may be GEAR" << id/10000000-12 <<" I have a free movie tickets for you." <<"\n"; 
cout << "Fahsai: Let's go to cinema together!!!"<< "\n"; 

string movie;
cout << "Fahsai: What movie do you want to watch?:";
cin.ignore();
getline(cin,movie);


string day;
cout << "Fahsai: So....which day are you free to go with me?:" <<"\n";
getline(cin,day);
cout <<"Fahsai:"<< day <<"." << "....that is OK!!! I'm looking forward to watch" << movie << "  with you."<< "\n";


string say;
getline(cin,say);
cout << "Fahsai: 555+ see you  " << day <<  "  Bye Bye \\(^ ^)/"; 
 return 0;
}

