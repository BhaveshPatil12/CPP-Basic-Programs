#include<iostream>
using namespace::std;
int main()
{
    int age;
    float score;
    cout<<"Enter your Age:\n";
    cin>>age;
    cout<<"Enter your Score:\n";
    cin>>score;
    if(age>18){
        cout<<"eligible for university\n";
          if(score>75){
           cout<<"qualified for university\n";
    }
          else{  
            cout<<"Not qualified for university\n";
         }
     }
    else{ 
        cout<<"Not eligible for university\n";
    }
    return 0;
}