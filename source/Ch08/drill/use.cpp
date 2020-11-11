#include "./my.h"
//#include "../../std_lib_facilities.h" //kell a cout-hoz
#include <iostream>//kell a cout-hoz
using namespace std;

int foo = 7;

int main()
{
    print_foo();
    print(99);
    int x = 7;
    int y = 9;
    //Try calling each swap like this
    // replace ? by v, r, or cr

    // v
    cout << "x=" << x << " y=" << y <<endl;
    swap_v(x,y);//nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "x=" << x << " y=" << y <<endl;
    swap_v(7,9);//még mindíg nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "x=" << x << " y=" << y <<endl;
    const int cx_v = 7;
    const int cy_v = 9;
    cout << "cx_v=" << cx_v << " cy_v=" << cy_v <<endl;
    swap_v(cx_v,cy_v);//még mindíg nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "cx_v=" << cx_v << " cy_v=" << cy_v <<endl;
    swap_v(7.7,9.9);//még mindíg nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "cx_v=" << cx_v << " cy_v=" << cy_v <<endl;
    double dx_v = 7.7;
    double dy_v = 9.9;
    cout << "dx_v=" << dx_v << " dy_v=" << dy_v <<endl;
    swap_v(dx_v,dy_v);//még mindíg nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "dx_v=" << dx_v << " dy_v=" << dy_v <<endl;
    swap_v(7.7,9.9);//még mindíg nem cseréli meg mert csak a megkapott értéket cserélte meg
    cout << "dx_v=" << dx_v << " dy_v=" << dy_v <<endl;

  
    // r
    cout << "x=" << x << " y =" << y <<endl;
    swap_r(x,y);//ez cserél mert csak referencia
    cout << "x=" << x << " y =" << y <<endl;
    //swap_r(7,9); //nem jó mert számnak nincs referenciája
    /*const int cx_r = 7; nem jó mert const-ra referencia
    const int cy_r = 9;
    swap_r(cx_r,cy_r);*/
    //swap_r(7.7,9.9);
    //double dx_r = 7.7;
    //double dy_r = 9.9;//nem jó mert int referenciát nem tudja a double értére
    int dx_r = 7;
    int dy_r = 9;

    cout << "dx_r=" << dx_r << " dy_r =" << dy_r <<endl;
    swap_r(dx_r,dy_r);//ez is cserél mert itt is helyes areferencia
    cout << "dx_r=" << dx_r << " dy_r =" << dy_r <<endl;
    //swap_r(7.7,9.9);

  /* ez nem fordul le mert konstanst nem tudunk cserélgetni
    // cr
    swap_cr(x,y);
    swap_cr(7,9);
    const int cx_cr = 7;
    const int cy_cr = 9;
    swap_cr(cx_cr,cy_cr);
    swap_cr(7.7,9.9);
    double dx_cr = 7.7;
    double dy_cr = 9.9;
    swap_cr(dx_cr,dy_cr);
    swap_cr(7.7,9.9);*/
}