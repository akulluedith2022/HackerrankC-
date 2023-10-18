#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string first_name, friend_name;
char friend_sex = 0;
int age = -1;

int main(){
    cout << "please enter your first name: ";
    cin >> first_name;
    cout << "Hello, " << first_name;

    cout << "please enter your friend's name: ";
    cin >> friend_name;
    cout << "Dear " << friend_name << ",\n";
    cout << "How are you? I am fine. I miss you\n";
    
    cout << "Is your friend male or female? (Enter m for male and f for female)\n";
    cin >> friend_sex;

    if(friend_sex == 'm'){
        cout << "If you see friend_name please ask him to call me.\n";
    }
    else if(friend_sex == 'f'){
        "If you see friend_name please ask her to call me.\n";
    }

    cout << "How old is the recipient?\n";
    cin >> age;
    if(age < 0 || age > 110){
        cout << "You're kidding!\n";
    }
    else{
        cout <<  "I hear you just had a birthday and you are " << age << " years old\n";
    }

    if(age < 12){
        cout << "Next year you will be " << age + 1 <<"\n";
    }
    else if(age == 17){
        cout << "Next year, you will be able to vote!\n";
    }
    else if(age > 70){
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Yours sincerely,\n ____________\n__________\n Akullu Edith";
    
}