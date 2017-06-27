//#include<iostream>
//#include"SFML\Graphics.hpp"
//#include"SFML\Window.hpp"
//#include"SFML\System.hpp"
//
//using namespace sf;
//
//int main()
//{
//	RenderWindow window(VideoMode(800, 600), "Rotation", Style::Default);
//	window.setFramerateLimit(60);
//
//	RectangleShape rectangle;
//	rectangle.setFillColor(Color::White);
//	rectangle.setSize(Vector2f(100.f, 50.f));
//	rectangle.setOrigin(50.f, 25.f);
//
//	CircleShape circle;
//	circle.setFillColor(Color::Green);
//	circle.setRadius(10.f);
//	circle.setOrigin(10.f, 10.f);
//	circle.setPosition(window.getSize().x / 2.f, window.getSize().y / 2.f);
//
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//		
//		//Update
//		if (Keyboard::isKeyPressed(Keyboard::A))
//			rectangle.move(-10.f, 0.f);
//		if (Keyboard::isKeyPressed(Keyboard::D))
//			rectangle.move(10.f, 0.f);
//		if (Keyboard::isKeyPressed(Keyboard::W))
//			rectangle.move(0.f, -10.f);
//		if (Keyboard::isKeyPressed(Keyboard::S))
//			rectangle.move(0.f, 10.f);
//
//		if (Keyboard::isKeyPressed(Keyboard::R))
//			rectangle.rotate(10.f);
//
//		if (rectangle.getGlobalBounds().intersects(circle.getGlobalBounds()))
//			circle.setFillColor(Color::Red);
//		else
//			circle.setFillColor(Color::Green);
//
//		//Draw
//		window.clear();
//
//		//Draw everything
//		window.draw(rectangle);
//		window.draw(circle);
//
//		window.display();
//	}
//
//	return 0;
//}