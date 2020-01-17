#include<iostream>
#include<string>
using namespace std;

//Dialog of the first example is given below.


int main(){
    string name;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"????:";
    getline (cin,name);
    cin.ignore();
    cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name."<<endl;
    cout<<"Fahsai: I think you are Engineering student. What is your student ID?"<<endl;

    string code;
    cout<<name<<":";
    cin>>code;
    cin.ignore();

    int gear=((code[0]-48)*10+(code[1]-48))-12;

    cout<<"Fahsai: I think you may be GEAR "<<gear<<"\n"".  I have a free movie tickets for you. "<<endl;
    cout<<"Fahsai: Let's go to cinema together!!!"<<endl;
    cout<<"Fahsai: What movie do you want to watch?"<<endl;
    string movie;
     
    cout<<name<<":";
    getline (cin,movie);
    cin.ignore();

    cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
    cout<<name<<":";
    string day;
    getline (cin,day);
    cin.ignore();
    string text; 
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you."<<endl;
    cout<<name<<":";
    getline (cin,text);
    cin.ignore();
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/";




    





    return 0;
}

/*Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)*/ 

