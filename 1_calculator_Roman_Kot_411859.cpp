#include <iostream>
using namespace std;


void give_coordinates(double size_plot_x,double size_plot_y, double x_div, double y_div){
double x,y;
char ans='Y';
while(ans=='Y' || ans=='y'){
cout<<"Enter X coordinate\n";
cin>>x;
cout<<"Enter Y coordinate\n";
cin>>y;

cout<<"G("<<size_plot_x/2+(size_plot_x/(x_div*2))*x<<", "<<size_plot_y/2+(size_plot_y/(y_div*2))*y<<")\n";

cout<<"Do you want to continue?(Y/N)\n";

cin>>ans;
}
}


int main(){
    give_coordinates(200,100,20,20);
}
