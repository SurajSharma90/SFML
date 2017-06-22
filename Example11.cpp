//#include<iostream>
//#include"SFML\Graphics.hpp"
//#include"SFML\Window.hpp"
//#include"SFML\System.hpp"
//
//using namespace sf;
//
//int main()
//{
//	RenderWindow window(VideoMode(800, 600), "Text intro", Style::Default);
//	window.setFramerateLimit(60);
//
//	Font font;
//	if (!font.loadFromFile("Fonts/Metropolian-Display.ttf"))
//		throw("COULD NOT LOAD FONT!");
//
//	Text text;
//	text.setFont(font);
//	text.setCharacterSize(24);
//	text.setColor(Color::Red);
//	text.setStyle(Text::Bold);
//	text.setString("HEY I AM A STRING OF TEXT IN SFML BRAH!");
//	text.setPosition(10.f, window.getSize().y / 2);
//
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == Event::Closed)
//				window.close();
//		}
//
//		text.move(5.f, 0.f);
//
//		if (text.getPosition().x > window.getSize().x)
//			text.setPosition(0.f, text.getPosition().y);
//
//		//Draw
//		window.clear();
//
//		window.draw(text);
//
//		window.display();
//	}
//
//	return 0;
//}