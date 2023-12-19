#include<iostream>
using namespace std;

int main()
{
    int current_year, current_month, current_date;
    int birth_year, birth_month, birth_date;
    int calculated_date, calculated_days, calculated_month ,calculated_year;
    int date, month_day;

    int month [] = { 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout<<" enter the D.O.B separated by space in the format of (DD MM YYYY) : ";
    cin>> birth_date >> birth_month >> birth_year;
    
    cout<<" enter the current date separated by space in the format of (DD MM YYYY) : ";
    cin>> current_date >> current_month >> current_year;

    cout<<"========================================================================================"<<endl;
    cout<<"                       WELCOME TO AGE CALCULATOR                                       "<<endl;
    cout<<"========================================================================================"<<endl;

    cout<<" your D.O.B is (DD MM YYYY) : "<<birth_date<< "/" <<birth_month<< "/" <<birth_year<<endl;
    cout<<" your current date is (DD MM YYYY) : "<<current_date<< "/" <<current_month<< "/" <<current_year<<endl;    
   
       if(current_date < birth_date){
           calculated_date= current_date + month[current_month - 1];
           calculated_days= calculated_date - birth_date;
          }
       else{
           calculated_days= current_date - birth_date;
          }
    
       if(current_month < birth_month){
           calculated_month= (current_month + 11) - birth_month;
           calculated_year= (current_year - 1) - birth_year;
          }

       else{
           calculated_month= current_month - birth_month;
           calculated_year= current_year - birth_year;
           }
    
         cout<<" your age is "<< calculated_year <<" years "<< calculated_month <<" months "<< calculated_days <<" days "<<endl;
      
    return 0;

}