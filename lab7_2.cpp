#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() 
{
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    cin >> name;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    
    int number;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ":";
    cin >> number;
    int numDigits = log10(number)+1;
    int firstTwoDigits = number/pow(10, numDigits-2);
    int result = firstTwoDigits -12;

    cout << "Fahsai: I think you may be GEAR " << result << ". I have a free movie ticket for you.\n";
   
    string movie;
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name << ":";
    cin >> movie;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    
    string day;
    cout << name << ":";
    cin >> day;
    
    cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    string whatever;
    cout << name << ":";
    cin >>whatever;
    
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \(^ ^)/";
    
    

    
    


    return 0;
}
