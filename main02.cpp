#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cin>>x;
    cin>>y;
    if((x==-1&&(y<=2&&y>=-2))||(y==-2&&(x>=-1&&x<=3))||(y==2&&(x>=-1&&x<=3))||(x==3&&(y>=2&&y<=4.5))||(x==3&&(y>=0.5&&y<=2))||(y==-0.5&&(x>=3&&x<=5.5))||(y==4.5&&(x>=3&&x<=7)))
    {
        cout<<"1";
    }
    else if(((x>-1&&x<3)&&(y<2&&y>-2))||((x<5.5&&x>3)&&(y<4.5&&y>0.5))||((x>5.5&&x<7)&&(y<4.5&&y>2))||(x==3&&(y>0.5&&y<2))||(x==5.5&&(y<4.5&&y>2)))
    {
        cout<<"2";
    }
    else cout<<"0";
    return 0;
}
