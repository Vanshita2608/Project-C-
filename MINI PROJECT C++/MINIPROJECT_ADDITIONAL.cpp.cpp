#include<iostream>
using namespace std;


class domesticPassengers
// This Will Take Input For Passengers Travelling in domestic flight
{
    protected:
        int s,d,sts,date,pno,age;
        char name[50],gen,eid[50];

    public:
        void set_info()
        {
            cout<<"Enter your full name"<<endl;
            cin>>name;
            cout<<"Enter your gender(M/F)"<<endl;
            cin>>gen;
            cout<<"Phone number:"<<endl;
            cin>>pno;
            cout<<"Email id:"<<endl;
            cin>>eid;
            cout<<"Age:"<<endl;
            cin>>age;

        }
        void get_info()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Gender:"<<gen<<endl;
            cout<<"Phone number:"<<pno<<endl;
            cout<<"Email id:"<<eid<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
class domestic : private domesticPassengers
{
    private:
        int s,d,sts,date,pno,age;
        char name[50],gen,eid[50];

    public:
        int seats()
        {
            return sts;
        }
        void flight_d()
        {
            cout<<"___________________________________________________________________________"<<endl;
            cout<<"Flight\t\t\tDeparture\tArrival\t\tPrice"<<endl<<endl;
            cout<<"Go Air(1)\t\t08:00\t\t10:00\t\t1500"<<endl;
            cout<<"Spice Jet(2)\t\t14:00\t\t16:00\t\t1850"<<endl;
            cout<<"Air India(3)\t\t19:45\t\t21:45\t\t2025"<<endl;
            cout<<"Jet Airways(4)\t\t22:35\t\t01:10\t\t3508"<<endl;
            cout<<"Indigo(5)\t\t23:33\t\t02:17\t\t2789"<<endl;
            cout<<"Vistara(6)\t\t20:44\t\t22:12\t\t3450"<<endl;
            cout<<"Air Asia(7)\t\t21:09\t\t23:44\t\t2988"<<endl;
            cout<<"_____________________________________________________________________________"<<endl<<endl<<endl;

        }
        void set_domestic()
        {
            cout<<"Enter the date you want to travel (DDMMYYYY)"<<endl;
            cin>>date;
            cout<<endl<<"Pick your destination of departure"<<endl;
            cout<<"Mumbai(1) Chennai(2) Kolkata(3) Delhi(4) Madhya Pradesh(5) Goa(6) Gujarat(7)"<<endl;
            cin>>s;
            cout<<endl<<"Pick your destination of arrival"<<endl;
            cout<<"Mumbai(1) Chennai(2) Kolkata(3) Delhi(4) Madhya Pradesh(5) Goa(6) Gujarat(7)"<<endl;
            cin>>d;

            if((s==1 && d==2)||(s==2 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==3)||(s==3 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==4)||(s==4 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==5)||(s==5 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==6)||(s==6 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==7)||(s==7 && d==1))

            {
                flight_d();
            }
            else if((s==2 && d==3)||(s==3 && d==2))
            {
                flight_d();
            }
            else if((s==2 && d==4)||(s==4 && d==2))
            {
                flight_d();
            }
            else if((s==2 && d==5)||(s==5 && d==2))
            {
                flight_d();
            }
             else if((s==2 && d==6)||(s==6 && d==2))
            {
                flight_d();
            }
             else if((s==2 && d==7)||(s==7 && d==2))
            {
                flight_d();
            }
            else if((s==3 && d==4)||(s==4 && d==3))
            {
                flight_d();
            }
            else if((s==3 && d==5)||(s==5 && d==3))
            {
                flight_d();
            }
            else if((s==3 && d==6)||(s==6 && d==3))
            {
                flight_d();
            }
            else if((s==3 && d==7)||(s==7 && d==3))
            {
                flight_d();
            }
            else if((s==4 && d==5)||(s==5 && d==4))
            {
                flight_d();
            }
            else if((s==4 && d==6)||(s==6 && d==4))
            {
                flight_d();
            }
            else if((s==4 && d==7)||(s==7 && d==4))
            {
                flight_d();
            }
            else if((s==5 && d==6)||(s==6 && d==5))
            {
                flight_d();
            }
            else if((s==5 && d==7)||(s==7 && d==5))
            {
                flight_d();
            }
            else if((s==6 && d==7)||(s==7 && d==6))
            {
                flight_d();
            }
            else
            {
                cout<<"Your destination and source are the same"<<endl;
            }
        }
};
////////////////////////////////////////////////  INTERNATIONAL ////////////////////////////////////////////////////

class internationalPassengers
// This Will Take Input For Passengers Travelling in international flight
{
    private:
        int a,de,dte, food ,classt ,tic, comboV, comboNV, drinks;
        double pn;
        char fname[250],ed[30],g,pan[30],na[250];

    public:
        void set_infoi()
        {
            cout<<endl<<"Enter your full name:"<<endl;
            cin>>fname;
            cout<<"Enter your gender(M/F):"<<endl;
            cin>>g;
            cout<<"Phone number:"<<endl;
            cin>>pn;
            cout<<"Enter your email id:"<<endl;
            cin>>ed;
            cout<<"Enter your passport number:"<<endl;
            cin>>pan;
            cout<<"Enter your nationality:"<<endl;
            cin>>na;

            cout<<endl<<"Enter your food choice(1. Veg   2. Non-veg   3. Drinks): "<<endl;
            cin>>food;

            if(food == 1)
            {
                cout<<endl<< "Menu for veg food: \n";
                cout<< "1. Combo 1\n2. Combo 2\n3. Combo 3\nEnter Choice: ";
                cin>> comboV;
            }
            else if(food == 2)
            {
                cout<<endl<<"Menu for non-veg food: \n";
                cout<< "1. Combo 1\n2. Combo 2\n3. Combo 3\nEnter Choice: ";
                cin>> comboNV;
            }
            else if(food == 3)
            {
                cout<<endl<< "Menu For Drinks: \n";
                cout<< "1. Wine \n2. Coffee\n3. Tea\n4. Juice\nEnter Choice: ";
                cin>> drinks;
            }
        }
        void get_infoi()
        {
            cout<<endl<<"Name: "<<fname<<endl;
            cout<<"Gender:"<<g<<endl;
            cout<<"Phone number:"<<pn<<endl;
            cout<<"email id:"<<ed<<endl;
            cout<<"Passport number:"<<pan<<endl;
            cout<<"Nationality:"<<na<<endl;

//
            if(food == 1)
            {
                if(comboV == 1)
                {
                    cout << "Food Choice: Grilled Sandwiches + Fruit Juice + Potato Chips\n";
                }
                else if(comboV == 2)
                {
                    cout << "Food Choice: Veg Spring Rolls + Orange Juice + Dry Fruits\n";
                }
                else if(comboV == 3)
                {
                    cout <<"Food Choice: Instant Noodles + Red Wine\n";
                }
            }
            else if(food == 2)
            {
                if(comboNV == 1)
                {
                    cout << "Food Choice: Chicken Sandwitch + Red Wine\n";
                }
                else if(comboNV == 2)
                {
                    cout << "Food Choice: Egg Paneer Rolls + Orange Juice\n";
                }
                else if(comboNV == 3)
                {
                    cout <<"Food Choice: Chicken Noodles + Mixed Fruit Juice";
                }
            }
            else if(food == 3)
            {
                if(drinks == 1)
                {
                    cout << "Food Choice: Wine\n";
                }
                else if(drinks == 2)
                {
                    cout << "Food Choice: Coffee\n";
                }
                else if(drinks == 3)
                {
                    cout <<"Food Choice: Tea\n";
                }
                else if(drinks == 4)
                {
                    cout << "Food Choice: Juice\n";
                }
            }
// Food Choice Ends

            if(classt == 1)
            {
                if(tic == 1)
                {
                    cout<<"Economic class + Window seat"<<endl;
                }
                else
                {
                    cout<<"Economic class"<<endl;
                }
            }
            else if(classt == 2)
            {
                if(tic == 1)
                {
                    cout<<"Business class + Window seat"<<endl;
                }
                else
                {
                    cout<<"Business class"<<endl;
                }
            }
        }
};
class intl : public internationalPassengers
{
    protected:
        int a,de,dte,pn ,classt ,tic ;
        char fname[250],ed[30],g,pan[30],na[250],food[100];

    public:
        void flight_i()
        {
            cout<<"___________________________________________________________________________"<<endl;
            cout<<"Flight\t\t\t\tDeparture\tArrival\t\tPrice"<<endl<<endl;
            cout<<"Qatar Airways(1)\t\t07:30\t\t21:30\t\t35000"<<endl;
            cout<<"Etihad Airways(2)\t\t08:15\t\t22:15\t\t45750"<<endl;
            cout<<"Fly Emirates(3)\t\t\t09:45\t\t23:45\t\t89250"<<endl;
            cout<<"Lufthansa(4)\t\t\t22:35\t\t01:10\t\t54120"<<endl;
            cout<<"Cathay Pacific(5)\t\t23:33\t\t02:17\t\t62789"<<endl;
            cout<<"Ryan Air(6)\t\t\t12:08\t\t03:10\t\t78909"<<endl;
            cout<<"Delta Air(7)\t\t\t06:19\t\t08:15\t\t89990"<<endl;
            cout<<"___________________________________________________________________________"<<endl<<endl<<endl;
        }
        void set_intl()
        {
            cout<<"Enter the date you want to travel(DDMMYYYY)"<<endl;
            cin>>dte;

            cout<<endl<<"Pick your destination of departure"<<endl;
            cout<<"India(1) New York(2) London(3) New Zealand(4) Norway(5) Australia(6) Singapore(7)"<<endl;
            cin>>de;

            cout<<endl<<"Pick your destination of arrival"<<endl;
            cout<<"India(1) New York(2) London(3) New Zealand(4) Norway(5) Australia(6) Singapore(7)"<<endl;
            cin>>a;

            if((de==1 && a==2)||(de==2 && a==1))
            {
                flight_i();
            }
            else if((de==1 && a==3)||(de==3 && a==1))
            {
                flight_i();
            }
            else if((de==1 && a==4)||(de==4 && a==1))
            {
                flight_i();
            }
            else if((de==1 && a==5)||(de==5 && a==1))
            {
                flight_i();
            }
            else if((de==1 && a==6)||(de==6 && a==1))
            {
                flight_i();
            }
            else if((de==1 && a==7)||(de==7 && a==1))
            {
                flight_i();
            }
            else if((de==2 && a==3)||(de==3 && a==2))
            {
                flight_i();
            }
            else if((de==2 && a==4)||(de==4 && a==2))
            {
                flight_i();
            }
            else if((de==2 && a==5)||(de==5 && a==2))
            {
                flight_i();
            }
            else if((de==2 && a==6)||(de==6 && a==2))
            {
                flight_i();
            }
            else if((de==2 && a==7)||(de==7 && a==2))
            {
                flight_i();
            }
            else if((de==3 && a==4)||(de==4 && a==3))
            {
                flight_i();
            }
            else if((de==3 && a==5)||(de==5 && a==3))
            {
                flight_i();
            }
            else if((de==3 && a==6)||(de==6 && a==3))
            {
                flight_i();
            }
            else if((de==3 && a==7)||(de==7 && a==3))
            {
                flight_i();
            }
            else if((de==4 && a==5)||(de==5 && a==4))
            {
                flight_i();
            }
            else if((de==4 && a==6)||(de==6 && a==4))
            {
                flight_i();
            }
            else if((de==4 && a==7)||(de==7 && a==4))
            {
                flight_i();
            }
            else if((de==5 && a==6)||(de==6 && a==5))
            {
                flight_i();
            }
            else if((de==5 && a==7)||(de==7 && a==5))
            {
                flight_i();
            }
            else if((de==6 && a==7)||(de==7 && a==6))
            {
                flight_i();
            }
            else
            {
                cout<<"Your destination of departure and arrival is the same"<<endl;
            }
        }
};
int main()
{
    int n,f,in, tic, w;
    double cost,costb, classt;
    int numPassengers;
    int numPassengersI;

    // Class Declaration

    domestic d1; // domestic flight details
    intl i1;    // international flight details
   // i_economy e1; // Seats booking for international flight
    internationalPassengers iP[numPassengers]; // passengers information for international flight
    domesticPassengers dP[numPassengers];   // passengers information for domestic flight

    // Class Declaration Ends



    cout<<"              Welcome to 'TOUCHING ADORABLE SKIES' Airline Booking                                    "<<endl;
    cout<<"******************************************************************************"<<endl;
    cout<<"          Come, travel with us...to experience the LEISURE as high as SKY "<<endl;
    cout<<"                        With the deals of GRASS-ROOT level                 "<<endl;
    cout<<"********************************************************************************"<<endl<<endl<<endl;

    cout<<"Enter 1 for Domestic Flights and 2 for International Flights"<<endl;
    cin>>f; // Flight Choice

    cout << "Enter Total Number of passengers: "<<endl;
    cin >> numPassengers; // Number of passengers

    if(f==1)
    {
        d1.set_domestic(); // This Function Will Take information of location from user about domestic flight

        cout<<"Enter your choice"<<endl;
        cin>>n; // Choice for domestic flight details
        cout<<"_______________________________________________________________________________"<<endl;

        switch(n)
        {
            case 1:
            {
                cout<<"Flight  : Go Air"<<endl;
                cout<<"Departure  : 08.00"<<endl;
                cout<<"Arrival  : 10.00"<<endl;
                cout<<"Price :1500"<<endl;
                cost=1500+(0.05*1500);
                cout<<"Fare="<<cost<<endl<<endl;
                break;
            }
            case 2:
            {
                cout<<"Flight  :Spice Jet"<<endl;
                cout<<"Departure  : 14.00"<<endl;
                cout<<"Arrival  : 16.00"<<endl;
                cout<<"Price  :1850"<<endl;
                cost=1850+(0.05*1850);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;
            }
            case 3:
            {
                cout<<"Flight  :Air India"<<endl;
                cout<<"Departure  : 19.45"<<endl;
                cout<<"Arrival  : 21.45"<<endl;
                cost=2025+(0.05*2025);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;
            }
            case 4:
            {
                cout<<"Flight  :Jet Airways"<<endl;
                cout<<"Departure  : 22.35"<<endl;
                cout<<"Arrival  : 01.10"<<endl;
                cost=3508+(0.05*3508);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;

            }
            case 5:
            {
                cout<<"Flight  :Indigo"<<endl;
                cout<<"Departure  : 23.33"<<endl;
                cout<<"Arrival  : 02.17"<<endl;
                cost=2789+(0.05*2789);
                cout<<"Fare ="<<cost<<endl<<endl;
            }
            case 6:
            {
                cout<<"Flight  :Vistara"<<endl;
                cout<<"Departure  : 20.44"<<endl;
                cout<<"Arrival  : 22.12"<<endl;
                cost=3450+(0.05*3450);
                cout<<"Fare ="<<cost<<endl<<endl;
            }
            case 7:
            {
                cout<<"Flight  :Air Asia"<<endl;
                cout<<"Departure  : 21.09"<<endl;
                cout<<"Arrival  : 23.44"<<endl;
                cost=2988+(0.05*2988);
                cout<<"/Fare ="<<cost<<endl<<endl;
            }
            default:
            {
                cout<<"Either your destination is same or the option selected is inappropriate"<<endl;
                cout<<"                   END OF YOUR BOOKING PROCESS                                    "<<endl;
                cout<<"**********************************************************"<<endl;
                cout<<"          Hope our hospitality refreshes you in totality      "<<endl;
                break;
            }
        }
        // Case Ends Here


        // For Domestic Passengers

        for(int a = 0; a < numPassengers; a++) // Input
        {
           dP[a].set_info(); // Total Number Of passengers
        }

        for(int a = 0; a < numPassengers; a++) // Output
        {
            cout<<endl<<endl<<endl<<"**********Details of the passenger are**********"<<endl;
            dP[a].get_info();
            cout<<"______________________________________________________________________"<<endl;
            cout<<"                   END OF YOUR BOOKING PROCESS                                    "<<endl;
            cout<<"**********************************************************"<<endl;
            cout<<"          Hope our hospitality refreshes you in totality      "<<endl;
            cout<<"**************************************************************"<<endl;
            cout<<"Your tickets will be sent on your registered email address......"<<endl;
            cout<<"________________________________________________________________"<<endl;
            cout<<".........THANK YOU FOR CHOOSING US AS YOUR TRVEL PARTNER............"<<endl;
        }

    }
    else
    {
        i1.set_intl(); // This Function Will Take information of location from user about international flight
        cout<<"Enter your choice"<<endl;
        cin>>in;        // Choice for international flight details
        cout<<"_____________________________________________________________________________"<<endl;

        switch(in)
        {
            case 1:
            {
                cout<<"Flight: Qatar Airways"<<endl;
                cout<<"Departure :07:30"<<endl;
                cout<<"Arrival:21:30"<<endl;
                cout<<"Price:35000"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1) // Economy Class
                {
                    if(tic == 1)
                    {
                        w=35000+(0.05*35000) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=35000+(0.05*35000);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else // Busniess Class
                {
                    if(tic == 1)
                    {
                        costb=35000+(0.05*35000);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                    else
                    {
                        costb=35000+(0.05*35000) + 3500;
                        cout<<"Fare for business class + Window seat:"<<costb<<endl;
                    }
                }
                break;
            }
            case 2:
            {
                cout<<"Flight: Etihad Airways"<<endl;
                cout<<"Departure :08:15"<<endl;
                cout<<"Arrival:22:15"<<endl;
                cout<<"Price:45750"<<endl;


                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;
                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=45750+(0.05*45750) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=35000+(0.05*35000);
                        cout << "Fare for economy class: " << w<< endl;
                    }
                }
                else
                {
                    if(tic == 1)
                    {
                        costb=45750+(0.05*45750) + 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=35000+(0.05*35000);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            case 3:
            {
                cout<<"Flight: Fly Emirates"<<endl;
                cout<<"Departure :09:45"<<endl;
                cout<<"Arrival:23:45"<<endl;
                cout<<"Price:89250"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=89250+(0.05*89250) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=35000+(0.05*35000);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else
                {

                    if(tic == 1)
                    {
                        costb=89250+(0.05*89250) + 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=89250+(0.05*89250);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            case 4:
            {
                cout<<"Flight: Lufthansa"<<endl;
                cout<<"Departure : 22.35"<<endl;
                cout<<"Arrival: 01.10"<<endl;
                cout<<"Price : 54120"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=54120+(0.05*54120) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=54120+(0.05*54120);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else
                {

                    if(tic == 1)
                    {
                        costb=54120+(0.05*54120)+ 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=54120+(0.05*54120);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            case 5:
            {
                cout<<"Flight: Cathay Pacific"<<endl;
                cout<<"Departure : 23.33"<<endl;
                cout<<"Arrival: 02.17"<<endl;
                cout<<"Price : 62789"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=62789+(0.05*62789) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=62789+(0.05*62789);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else
                {

                    if(tic == 1)
                    {
                        costb=62789+(0.05*62789)+ 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=62789+(0.05*62789);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            case 6:
            {
                cout<<"Flight: Ryan Air"<<endl;
                cout<<"Departure : 12.08"<<endl;
                cout<<"Arrival: 03.10"<<endl;
                cout<<"Price : 78909"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=78909+(0.05*78909) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=78909+(0.05*78909);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else
                {

                    if(tic == 1)
                    {
                        costb=78909+(0.05*78909)+ 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=78909+(0.05*78909);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            case 7:
            {
                cout<<"Flight: Delta Air"<<endl;
                cout<<"Departure : 06.19"<<endl;
                cout<<"Arrival: 08.15"<<endl;
                cout<<"Price : 89990"<<endl;

                cout<<endl<<"Would you prefer traveling in economy class(1) or business class(2)?:"<<endl;
                cin>>classt;
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;

                if(classt == 1)
                {
                    if(tic == 1)
                    {
                        w=89990+(0.05*89990) + 1500;
                        cost=cost+w;
                        cout<<"Fare for economy class + Window Seat:"<<w<<endl;
                    }
                    else
                    {
                        w=89990+(0.05*89990);
                        cout << "Fare for economy class: " << w << endl;
                    }
                }
                else
                {

                    if(tic == 1)
                    {
                        costb=89990+(0.05*89990)+ 3500;
                        cout<<"Fare for business class + Window Seat:"<<costb<<endl;
                    }
                    else
                    {
                        costb=89990+(0.05*89990);
                        cout<<"Fare for business class:"<<costb<<endl;
                    }
                }
                break;
            }
            default:
            {
                cout<<"Either your destination is same or you have selected an inappropriate option"<<endl;
                cout<<"                 END OF YOUR BOOKING PROCESS                                    "<<endl;
                cout<<"********************************************************"<<endl;
                break;
            }
        }
        // Case Ends Here

        // For International Passengers

        for(int a = 0; a<numPassengers; a++)
        {
            iP[a].set_infoi();
        }
        for(int a = 0; a<numPassengers; a++)
        {
            cout<<endl<<"**********Information of the passenger**********"<<endl;
            iP[a].get_infoi();
        }
            cout<<"_________________________________________________________________________________________"<<endl;
            cout<<endl<<"                   END OF YOUR BOOKING PROCESS                                    "<<endl;
            cout<<"*******************************************************************"<<endl;
            cout<<"                Hope our hospitality refreshes you in totality      "<<endl;
            cout<<"********************************************************************"<<endl;
            cout<<".........Your tickets will be sent on your registered email address......"<<endl;
            cout<<"_________________________________________________________________________________________"<<endl;
            cout<<"................THANK YOU FOR CHOOSING US AS YOUR TRVEL PARTNER............"<<endl;
    }
}

