#include<iostream>
using namespace std;
#include <iomanip>
int main() {
    system("cls");
    system("color 0A");
    // cout<<"===================| Input Number |================="<<endl;
    // int id ;
    // string name;
    // float salary,hour,wage;
    // cout<<"Pleas Input ID: ";cin>>id;
    // cout<<"Pleas Input Name: ";cin>>name;
    // cout<<"Pleas Input Salary: ";cin>>salary;
    // cout<<"Pleas Input Hour: ";cin>>hour;
    // cout<<"Pleas Input Wide: ";cin>>wage;
    // cout<<"================================================="<<endl;
    // cout<<" ID: "<<id<<endl;
    // cout<<" Name: "<<name<<endl;
    // cout<<" Salary: "<<salary<<endl;
    // cout<<" Hour: "<<hour<<endl;
    // cout<<" Wide: "<<wage<<"$ / 1h "<<endl;
    //  float total  = salary + hour * wage;
    // cout<<"Total wide "<<total<<" $";
    // This AVG of student
    //     string name;
    //     float math,physic,chemistry,biology,history,geography,avg,total;
    //     cout<<"Pleas Input Name: ";cin>>name;
    //     cout<<"Pleas Input Math: ";cin>>math;
    //     cout<<"Pleas Input Physic: ";cin>>physic;
    //     cout<<"Pleas Input Chemistry: ";cin>>chemistry;
    //     cout<<"Pleas Input Biology: ";cin>>biology;
    //     cout<<"Pleas Input History: ";cin>>history;
    //     cout<<"Pleas Input Geography: ";cin>>geography;
    //     avg = (math + physic + chemistry + biology + history + geography) / 6;
    //     total = math + physic + chemistry + biology + history + geography;
    //     cout<<"================================================="<<endl;
    //     cout<<" Name: "<<name<<endl;
    //     cout<<" Math: "<<math<<endl;
    //     cout<<" Physic: "<<physic<<endl;
    //     cout<<" Chemistry: "<<chemistry<<endl;
    //     cout<<" Biology: "<<biology<<endl;
    //     cout<<" History: "<<history<<endl;
    //     cout<<" Geography: "<<geography<<endl;
    //     cout<<" AVG: "<<avg<<endl;
    //     cout<<" Total: "<<total<< " Score"<<endl;
    //  if (total <= 300){
    //         cout<<"You are fail!"<<endl;
    //         cout<<"Your toal score is "<<total<<endl;
    //     }else{
    //         cout<<"You are pass!"<<endl;
    //         cout<<"Your toal score is "<<total<<endl;
    //     }
    // unsigned int x; // This is unsigned int
    // cout<<"Pleas Input Age: ";cin>>x;
    // char result = 96; // This is ASCII code
    // cout<<result<<endl;	
    // result = '/u00A9'; // This is unicode
    // cout<<result<<endl;

    // tenery opereter
    // string result = (x > y) ? "x is greater than y " : "y is greater than x";
    // cout<<result<<endl;
    // if(x <= 0){
    //     cout<<"Invalid option!"<<endl;
    // }else{
    //     cout<<"You age is "<<x<<endl;
    // }


    // This is a simple example of a student's score
    // string name,gender;
    // int age;
    // float math,English,khmer;
    // cout<<"======================| SYSTEM STUDENTS SCORE |================="<<endl;
    // cout<<"[+] Pleas Input Name: ";getline(cin,name);
    // cout<<"[+] Pleas Input Gender: ";cin>>gender;
    // cout<<"[+] Pleas Input age: ";cin>>age;
    // cout<<"======================| THIS IS INPUT SCORE |======================"<<endl;
    // cout<<"[+] Pleas Input Math: ";cin>>math;
    // cout<<"[+] Pleas Input English: ";cin>>English;
    // cout<<"[+] Pleas Input Khmer: ";cin>>khmer;
    // float total = math + English + khmer;
    // float avg = total / 3;
    // cout<<"======================| THIS IS INFORMATION |======================"<<endl;
    // cout<<"[+] Name: "<<name<<endl;
    // cout<<"[+] Gender :"<<gender<<endl;
    // cout<<"[+] Age: "<<age<<endl;
    // cout<<"======================| THIS IS SCORE |======================"<<endl;
    // cout<<"[+] Math: "<<math<<endl;
    // cout<<"[+] English: "<<English<<endl;
    // cout<<"[+] Khmer: "<<khmer<<endl;
    // cout<<"[+] AVG: "<<avg<<endl;
    // if (total <= 49){
    //     cout<<"[+] You are fail!"<<endl;
    //     cout<<"[+] Your toal score is: "<<total<<endl;
    // }else{
    //     cout<<"[+] You are pass!"<<endl;
    //     cout<<"[+] Your toal score is: "<<total<<endl;
    // }

        // this is a simple example of excheng money
        // cout<<"======================| SYSTEM EXCHENG MONEY |================="<<endl;
        // float khr,usd;
        // float const RATE = 4000;
      
        // cout<<"============| [+] Pleas Input Money: |============"<<endl;
        // cout<<"[+] Pleas Input USD: ";cin>>usd;
        // cout<<"[+] Pleas Input KHR: ";cin>>khr;
        // usd =  usd * RATE;
        // khr = khr / RATE;
        // cout<<"======================| THIS IS INFORMATION |======================"<<endl;
        // cout<<"[+] USD: "<<khr<<" $"<<endl;
        // cout<<"[+] KHR: "<<usd<<" Reil"<<endl;

        // This is a simple example of a tax 
         cout<<"======================| SYSTEM TAX |================="<<endl;
         string name,gander;
         float wage,tax,hour,salary;
            cout<<"[+] Pleas Input Name: ";getline(cin,name);
            cout<<"[+] Pleas Input Gander: ";cin>>gander;
            cout<<"[+] Pleas Input Wage: ";cin>>wage;
            cout<<"[+] Pleas Input Hour: ";cin>>hour;
            cout<<"[+] Pleas tax: ";cin>>tax;
           cout<<"======================| THIS IS INFORMATION |======================"<<endl;

            salary = wage * hour;
            salary = salary - (salary * tax / 100);

            cout<<"[+] Name: "<<name<<endl;
            cout<<"[+] Gander: "<<gander<<endl;
            cout<<"[+] Wage: "<<wage<<" $"<<endl;
            cout<<"[+] Hour: "<<hour<<" Hour"<<endl;
            cout<<"[+] Tax: "<<tax<<" %"<<endl;
            cout<<"[+] Totla Salary: "<<salary<<" $"<<endl;

    

    return 0;
}
