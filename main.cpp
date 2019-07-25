#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double a, b , c , x0, x1 , x2;

    for(int i=0; i<10; i++){



    cout<<"Program liczacy miejsca zerowe dla liczb rzeczywistych(delta>=0) \n";
    cout<<"Najpierw policzmy delte : \n";
    cout<<"Podaj a : " ;
    cin>>a;
    cout<<"Podaj b : ";
    cin>>b;
    cout<<"Podaj c : ";
    cin>>c;

double delta = (b * b)-(4 * a * c);
    x0= -b / ( 2 * a); //gdy delta=0
    x1= (-b - sqrt (delta)) /(2 * a); //gdy delta>1
    x2= (-b + sqrt (delta)) /(2 * a ); //gdy delta>1

    if(delta==0)
    {
        cout<<"Delta jest rowna 0 wiec ma 1 miejsce zerowe  : \n " ;
        cout<<"x0 : "<<x0<<endl;
    }
    else if(delta>0)

    {
        cout<<"Delta jest wieksza od 1 wiec ma 2 miejsca zerowe : \n" ;
        cout<<"x1 : " <<x1<<endl;
        cout<<"x2 : "<<x2<<endl;
    }
    else
        cout<<"Delta mniejsza od 0 - brak miejsc zerowych \n " ;


}
}
