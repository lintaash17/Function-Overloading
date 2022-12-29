//LINTA ASHFAQ
//DATA SCIENCE 
#include<iostream>
using namespace std;
void noReturnNoArgs(){
	cout<<"This function not receiving any arguments and not returning anything"<<endl;	
}

void noReturnWithArgs(int a){
    cout<<"This function received this argument = "<<a<<" and not returning anything"<<endl;	
}

string returnNoArgs(){
	return "This function not receiving any arguments and but returning this String";
}

int returnWithArgs(int a){
	cout<<"This function received this argument = "<<a<<" and returning argument after taking its square "<<endl;
    return a*a;
}

int main(){
   int a;
   cout<<"Enter Any No. ";
   cin>>a;
   noReturnNoArgs();
   noReturnWithArgs(a);
   cout<<returnNoArgs()<<endl;
   cout<<returnWithArgs(a);
}
