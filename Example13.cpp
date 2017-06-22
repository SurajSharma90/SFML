#include<iostream>
#include"SFML\Graphics.hpp"
#include"SFML\Window.hpp"
#include"SFML\System.hpp"

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "Rotation", Style::Default);
	window.setFramerateLimit(60);

	RectangleShape shape;
	shape.setSize(Vector2f(100.f, 50.f));
	shape.setOrigin(50.f, 25.f);

	CircleShape circle;
	circle.setRadius(10.f);
	circle.setFillColor(Color::Green);
	circle.setPosition(window.getSize().x/2, window.getSize().y/2);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::A))
			shape.move(-10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::D))
			shape.move(10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::W))
			shape.move(0.f, -10.f);
		if (Keyboard::isKeyPressed(Keyboard::S))
			shape.move(0.f, 10.f);

		if (Keyboard::isKeyPressed(Keyboard::R))
			shape.rotate(10.f);

		if (shape.getGlobalBounds().intersects(circle.getGlobalBounds()))
			circle.setFillColor(Color::Red);
		else
			circle.setFillColor(Color::Green);

		//Draw
		window.clear();

		//Draw everything
		window.draw(shape);
		window.draw(circle);

		window.display();
	}

	return 0;
}