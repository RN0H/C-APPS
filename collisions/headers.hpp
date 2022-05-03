#ifndef HEADERS_HPP
#define HEADERS_HPP
#include<SFML/Graphics.hpp> 
#include <iostream>

using namespace std;


void interface();
void physics(sf::CircleShape*, float*, float*, int*, int*, float);
void controls();
void randoms();
void collisions(float*, float*, int*, int*, float*, float*, int*, int*);

#endif