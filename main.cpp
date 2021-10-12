#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int a,b,c,n,x,y,z,chet=0,j,i,num,des;
    bool f;
    double s;
    srand(time(NULL));
    cout << "Ведите промежуток" << endl;
    a=100;
    b=999;
    c = rand() % (b - a + 1) + a;
    cout<<"Исходное число:"<<c<<endl;
    n=c;
    cout<<"В обратно порядке:";
    while (n>0)
    {
        cout<<n%10;
        n=n/10;
    }
    x=c/100;
    z=c%10;
    y=(c/10)%10;
    s=pow(x*y*z,1./3.);
    cout<<endl;
 cout<<"Cреднее геомтрическое:"<<s<<endl;
 if (x%2==0) chet++;
    if (y%2==0) chet++;
    if (z%2==0) chet++;
    cout<<"Количество четных:"<<chet<<endl;
    cout<<endl;
    switch (x)
    {
        case 1: cout<<"сто "; break;
        case 2: cout<<"двести "; break;
        case 3: cout<<"триста "; break;
        case 4: cout<<"четыреста "; break;
        case 5: cout<<"пятьсот "; break;
        case 6: cout<<"шестьсот  "; break;
        case 7: cout<<"семьсот "; break;
        case 8: cout<<"восемьсто "; break;
        case 9: cout<<"девятьсот "; break;
    }
    des=c%100;
    if (des<20 and des>=10)
      switch (des)
      {
          case 10: cout<<"десять"; break;
          case 11: cout<<"одинадцать"; break;
          case 12: cout<<"двенадцать"; break;
          case 13: cout<<"тренадцать"; break;
          case 14: cout<<"четырнадцать"; break;
          case 15: cout<<"пятнадцать"; break;
          case 16: cout<<"шестнадцать"; break;
          case 17: cout<<"семнадцать"; break;
          case 18: cout<<"восемнадцать"; break;
          case 19: cout<<"девятнцадать"; break;
      }
    else
    {
        switch (y)
        {

            case 2: cout<<"двадцать "; break;
            case 3: cout<<"тридцать "; break;
            case 4: cout<<"сорок "; break;
            case 5: cout<<"пятьдесят "; break;
            case 6: cout<<"шестьдесят "; break;
            case 7: cout<<"семдесят "; break;
            case 8: cout<<"восемдесят "; break;
            case 9: cout<<"девяносто "; break;
        }
        switch (z)
        {
            case 1: cout<<"один"; break;
            case 2: cout<<"два"; break;
            case 3: cout<<"три"; break;
            case 4: cout<<"четыре"; break;
            case 5: cout<<"пять"; break;
            case 6: cout<<"шесть"; break;
            case 7: cout<<"семь"; break;
            case 8: cout<<"восемь"; break;
            case 9: cout<<"девять"; break;
        }
    }
    cout<<endl;
    cout<<"Простые числа:";
    for (i=1;i<=c;i++)
    {
        num=0;
        for(j=2;j*j<=i;j++)
            if (i % j == 0) num++;
            if (num==0) cout << " " << i;
        }


}
