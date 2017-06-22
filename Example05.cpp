//#include<iostream>
//#include"SFML\Graphics.hpp"
//#include"SFML\Window.hpp"
//#include"SFML\System.hpp"
//
//using namespace sf;
//
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//			//if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
//			//	window.close();
//		}
//
//		//if (Keyboard::isKeyPressed(Keyboard::Escape))
//		//	window.close();
//
//		//if (Mouse::isButtonPressed(Mouse::Left))
//		//	window.close();
//
//		window.clear();
//
//		window.display();
//	}
//
//	return 0;
//}