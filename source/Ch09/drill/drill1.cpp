#include "../../std_lib_facilities.h"


// simple Date
// guarantee initialization with constructor
// provide some notational convenience
/*struct Date {
    int y, m, d;    // year, month, day
    Date(int y, int m, int d);  // check for valid date and initialize
    void add_day(int n);    // increase the Date by n days
};*/

// simple Date (control access)
class Date {
    public:
        class Invalid {}; //2B used as an exception
        Date(int yy, int mm, int dd):y{yy}, m{mm}, d{dd}  // check for valid date and initialize
        {
            if((dd>=1 && dd<=31)&&(mm>=1 && mm<=12)){
                y=yy;
                m=mm;
                d=dd;
            }
            else error("Bad date!");
        }
        void add_day(int n){
            // increase dd by n days
            d=abs((d+n)%31);
        }    // increase the Date by n days
        int month() { return m; }
        int day() { return d; }
        int year() { return y; }
    private:
        int y, m, d;    // year, month, day
        bool is_valid
};


// helper functions:
//void init_day(Date& dd, int y, int m, int d)
//Date::Date(int yy, int mm, int dd)  // constructor
//:y{yy}, m{mm}, d{dd}    // note: member initializers
/*ez itt same shit mint ez a másik:
Date::Date(int yy, int mm, int dd)
{
    y = yy;
    m = mm;
    d = dd;
}
{
// check that (y,m,d) is a valid date
// if it is, use it to initialize dd
    if((dd>=1 && dd<=31)&&(mm>=1 && mm<=12)){
        y=yy;
        m=mm;
        d=dd;
    }
    else error("Bad date!");
}*/

/*void Date::add_day(int n)
{
// increase dd by n days
    d=abs((d+n)%31);
}*/

void f()
{
    //Date today;
    //init_day(today, 12, 24, 2005); // oops! (no day 2005 in year 12)
    //add_day(today,1);


    /* BAAAD
    init_day(today,2008,3,30);
    cout << today << '\n';  // use today
    // . . .
    // . . .
    Date tomorrow;
    tomorrow.y = today.y;
    tomorrow.m = today.m;
    tomorrow.d = today.d+1; // add 1 to today
    cout << tomorrow << '\n';   // use tomorrow*/

    //Date my_birthday;  // error: my_birthday not initialized
    //Date today {12,24,2007};  // oops! run-time error
    
    /*Date last {2000,12,31};  // OK (colloquial style)
    Date next = {2014,2,14};  // also OK (slightly verbose)
    Date christmas = Date{1976,12,24};  // also OK (verbose style)
    last.add_day(1);
    //add_day(2);  // error: what date?
    Date last(2000,12,31);  // OK (old colloquial style)
    int x {7}; // OK (modern initializer list style)*/

    Date birthday {1970, 12, 30};   // OK
    //birthday.m = 14;    // error: Date::m is private
    cout << birthday.month() << '\n';   // we provided a way to read m
}

int main()
try
{
    f();

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Ooops... Unknown exception!!\n";
    return 2;
}