#include<iostream>
#include<math.h>
int n;
using namespace std;
int input();
int num_count();
void new_val();

int main()
{
    n = input();
    new_val();
}

int input()
{
    int x;
    cout<<"Insert:";
    cin>>x;
    return x;
}

int num_count()
{
    int sub_n = n;
    int amount = 0;
    while(sub_n>0)
    {
        sub_n = sub_n/10;
        amount++;
    }
    return amount;
}

void new_val()
{
    int m[100] = {};
    int i;
    int count_n = num_count()-1;
    for(i=0; n>0; i++)
    {
         m[i]=n/(int)(pow(10,count_n));
         switch(m[i])
         {
             case 0:cout<<"Zero";break;
             case 1:cout<<"One"; break;
             case 2:cout<<"Two"; break;
             case 3:cout<<"Three";break;
             case 4:cout<<"Four";break;
             case 5:cout<<"Five";break;
             case 6:cout<<"Six";break;
             case 7:cout<<"Seven";break;
             case 8:cout<<"Eight";break;
             case 9:cout<<"Nine";break;
         }
         n = n%(int)pow(10,count_n);
         count_n--;
    }
}