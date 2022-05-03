#include<SFML/Graphics.hpp> //SFML is a multimedia c++ library
//It creates an interface between the user and the:-
//1] System,   2] Window,  3] Graphics   4] Audio  and 5] Network
#include <iostream>
#include <cmath>
//#include <Eigen/Dense>		//g++ -I /path/to/eigen/ my_program.cpp -o my_program 


using namespace std;
void interface(){
	cout<<"In interface"<<endl;

}

 void physics(sf::CircleShape* shape, float* px, float* py, int* vx, int* vy, float dt){


	*px+=*vx*dt;
	*py+=*vy*dt;

	if (*py<=0.f || *py>=630){
		*vy = -*vy;
		*py+=*vy*dt;

	}

	if (*px<=0.f || *px>=920){
		*vx = -*vx;
		*px+=*vx*dt;
	}


}

void collisions(float* px, float* py, int* vx, int* vy, float* px2, float* py2, int* vx2, int* vy2){

	if (pow(pow(*px - *px2,2) + pow(*py - *py2,2),0.5)<=80){

		swap(*vx2, *vx);
		swap(*vy2, *vy);
		
	}
}
void controls(){
	cout<<"In controls"<<endl;

} 
void randoms(){
	cout<<"In randoms "<<endl;

}
