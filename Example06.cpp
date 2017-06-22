//#include<iostream>
//#include"SFML\Graphics.hpp"
//#include"SFML\Window.hpp"
//#include"SFML\System.hpp"
//
//using namespace sf;
//
//void Update(int &keyTime, RectangleShape &square, RenderWindow &window);
//void Draw(RenderWindow &window, RectangleShape &square);
//
//int main()
//{
//	int keyTime = 8;
//	RenderWindow window(VideoMode(640, 480), "Simple Square Swag");
//	window.setFramerateLimit(60);
//
//	RectangleShape square(Vector2f(100.f, 100.f));
//	square.setFillColor(Color::Red);
//	square.setPosition(window.getSize().x / 2, window.getSize().y / 2);
//
//	while (window.isOpen())
//	{
//
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//
//			if (event.KeyPressed && event.key.code == Keyboard::Escape)
//				window.close();
//		}
//
//		Update(keyTime, square, window);
//		Draw(window, square);
//	}
//
//	return 0;
//}
//
//void Update(int &keyTime, RectangleShape &square, RenderWindow &window)
//{
//	if(keyTime < 8)
//		keyTime++;
//
//	if (Keyboard::isKeyPressed(Keyboard::A) && square.getPosition().x > 0)
//	{
//		square.move(-5.f, 0.f);
//		keyTime = 0;
//	}
//	if (Keyboard::isKeyPressed(Keyboard::D) && square.getPosition().x + square.getSize().x < window.getSize().x)
//	{
//		square.move(5.f, 0.f);
//		keyTime = 0;
//	}
//	if (Keyboard::isKeyPressed(Keyboard::W) && square.getPosition().y > 0)
//	{
//		square.move(0.f, -5.f);
//		keyTime = 0;
//	}
//	if (Keyboard::isKeyPressed(Keyboard::S) && square.getPosition().y + square.getSize().y < window.getSize().y)
//	{
//		square.move(0.f, 5.f);
//		keyTime = 0;
//	}
//
//	if (Mouse::isButtonPressed(Mouse::Left))
//	{
//		square.setFillColor(Color::Blue);
//	}
//	else
//		square.setFillColor(Color::Red);
//}
//
//void Draw(RenderWindow &window, RectangleShape &square)
//{
//	window.clear(Color::White);
//
//	//Draw stuff
//	window.draw(square);
//
//	window.display();
//}