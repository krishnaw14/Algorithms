// CS 213 assignment Attempt 4
#include <iostream>

int coun=0;
using namespace std;
bool capture(int y[])
{
	int send, more, money, value;
	send= y[3]+y[2]*10+y[1]*100+y[0]*1000;
	more= y[1]+y[6]*10+y[5]*100+y[4]*1000;
	money= y[7]+y[1]*10+y[2]*100+y[5]*1000+y[4]*10000;
	value=money-more-send;
	if(value==0)
		return false;
	return true;
}

bool lastCapture(int y[], int k)
{
	for(int j=0;j<k;j++)
	{
		if(y[j]==y[k])
			return true;
	}
	return false;
}

void search(int n, int y[], int k){
 if(k == n)
{      
   	if(!capture(y)){
   		coun++;
   	 cout <<"S="<<y[0];
   	 cout <<" E="<<y[1];
   	 cout <<" N="<<y[2];
   	 cout <<" D="<<y[3];
   	 cout <<" M="<<y[4];
   	 cout <<" O="<<y[5];
   	 cout <<" R="<<y[6];
   	 cout <<" Y="<<y[7];
   	 cout<<endl;
   	 //exit(0);
   }
}
 
 else{            
   for(int j=0; j<10; j++){
     y[k] = j;    
     if(!lastCapture(y,k))
     	search(n, y, k+1);
   }
 }
}

int main()
{
	int sendmory[8];
	search(8, sendmory, 0);
	cout<<"COUNT = "<<coun<<endl;
}