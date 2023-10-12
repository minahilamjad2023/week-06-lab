#include<iostream>
using namespace std;
float lowestPrice(int kilometers,string time);
main()
{
	int kilometers;
	cout<<"Enter the number of kilometers: ";
	cin>>kilometers;
	string time;
	cout<<"Enter the period of the day (day/night): ";
	cin>>time;
	float result=lowestPrice(kilometers,time);
	cout<<"Lowest price for "<<kilometers<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(int kilometers,string time)
{
	float result;
	if(kilometers>=20 && kilometers<100)
		{
			result=kilometers*0.09;
		}
	if(kilometers>=100)
		{
			result=kilometers*0.06;
		}
	if(kilometers<20 && time=="day")
		{
			result=(kilometers*0.79)+0.70;
		}
	if(kilometers<20 && time=="night")
		{
			result=(kilometers*0.90)+0.70;
		}
	return result;
}
