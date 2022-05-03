/*
@author: Rohan Panicker
*/


#include "headers.hpp"

int main()



{




	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFMLApplication");

	//INIT
	
	sf::CircleShape shape1, shape2;
	shape1.setRadius(40.f);
	shape1.setPosition(100.f, 100.f);          //0,0 920, 630
	shape1.setFillColor(sf::Color::Cyan);


	
	shape2.setRadius(40.f);
	shape2.setPosition(600.f, 100.f);          //0,0 420, 630
	shape2.setFillColor(sf::Color::Red);


	srand(0);
	float dt;
	dt = 0.06;

	int vx, vy;
	vx = rand()%10;
	vy = rand()%10;
	float px,py;

	sf::Vector2f position = shape1.getPosition();
	px = position.x;
	py = position.y;

	int vx2, vy2;
	vx2 = rand()%10;
	vy2 = rand()%10;
	float px2, py2;

	sf::Vector2f position2 = shape2.getPosition();
	px2 = position2.x;
	py2 = position2.y;


while (window.isOpen())
{


	sf::Event event;
	while (window.pollEvent(event))
			{
			if (event.type == sf::Event::Closed)
			window.close();
			}
	window.clear();

    //920, 630

	physics(&shape1, &px, &py, &vx, &vy, dt);
	physics(&shape2, &px2, &py2, &vx2, &vy2, dt);
	collisions(&px, &py, &vx, &vy, &px2, &py2, &vx2, &vy2);
	
	shape1.setPosition(px, py);
	shape2.setPosition(px2, py2);
	
	window.draw(shape1);
	window.draw(shape2);

	window.display();

}
return 0;
}
