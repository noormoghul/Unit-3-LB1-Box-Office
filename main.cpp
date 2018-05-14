#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string movie;
    int adultTicSold, childTicSold;
    float adultPrice = 10.00, childPrice = 6.00;
    float grossProfit, boxOfficePerc = .2, netBoxProfit, distribPayable;
    
    cout<< "Enter the name of the movie."<<endl;
    getline(cin,movie);
    
    cout<< "How many adult tickets sold?"<<endl;
    cin>> adultTicSold;
    
    cout<< "How many child tickets sold?"<<endl;
    cin>> childTicSold;
    
    grossProfit = (adultTicSold*adultPrice) + (childTicSold*childPrice);
    
    netBoxProfit = grossProfit*boxOfficePerc;
    
    distribPayable = grossProfit - netBoxProfit;
    
    cout<< fixed <<setprecision(2) <<right;
    cout<< "\n\nMovie Name:" << setw(30) << '"' << movie <<"\"\n\n";
    cout<< "Adult Tickets Sold:" <<setw(24) <<adultTicSold <<endl<<endl;
    cout<< "Child Tickets Sold:" <<setw(24) <<childTicSold <<endl<<endl;
    cout<< "Gross Box Office Profit:" <<setw(17)<<"$"<<setw(8) <<grossProfit <<endl<<endl;
    cout<< "Net Box Office Profit:" <<setw(19)<<"$"<<setw(8) <<netBoxProfit <<endl<<endl;
    cout<< "Amount Paid to Distributor:" <<setw(14)<<"$"<<setw(8) <<distribPayable <<endl<<endl;
    
    
    return 0;
}
