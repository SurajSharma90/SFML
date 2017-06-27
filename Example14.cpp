//#include<iostream>
//#include"SFML\Graphics.hpp"
//#include"SFML\Window.hpp"
//#include"SFML\System.hpp"
//
//using namespace sf;
//
//int main()
//{
//	RenderWindow window(VideoMode(800, 600), "Framerate independent!", Style::Default);
//	window.setFramerateLimit(60);
//
//	//dt at 60fps = 0,016s
//
//	Clock clock;
//	float dt;
//	float multiplier = 60.f;
//
//	RectangleShape shape;
//	shape.setFillColor(Color::White);
//	shape.setSize(Vector2f(50.f, 50.f));
//
//	Vector2f currentVelocity;
//	Vector2f direction;
//	float maxVelocity = 25.f;
//	float acceleration = 1.f;
//	float drag = 0.5f;
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
//		dt = clock.restart().asSeconds();
//
//		//Update
//		//Acceleration
//		direction = Vector2f(0.f, 0.f);
//		if (Keyboard::isKeyPressed(Keyboard::A))
//		{
//			direction.x = -1.f;
//
//			if (currentVelocity.x > -maxVelocity)
//				currentVelocity.x += acceleration * direction.x * dt * multiplier;
//		}
//		if (Keyboard::isKeyPressed(Keyboard::D))
//		{
//			direction.x = 1.f;
//
//			if (currentVelocity.x < maxVelocity)
//				currentVelocity.x += acceleration * direction.x * dt * multiplier;
//		}
//		if (Keyboard::isKeyPressed(Keyboard::W))
//		{
//			direction.y = -1.f;
//
//			if (currentVelocity.y > -maxVelocity)
//				currentVelocity.y += acceleration * direction.y * dt * multiplier;
//		}
//		if (Keyboard::isKeyPressed(Keyboard::S))
//		{
//			direction.y = 1.f;
//
//			if (currentVelocity.y < maxVelocity)
//				currentVelocity.y += acceleration * direction.y * dt * multiplier;
//		}
//
//		//Drag
//		if (currentVelocity.x > 0.f)
//		{
//			currentVelocity.x -= drag * dt * multiplier;
//
//			if (currentVelocity.x < 0.f)
//				currentVelocity.x = 0.f;
//		}
//		else if (currentVelocity.x < 0.f)
//		{
//			currentVelocity.x += drag * dt * multiplier;
//
//			if (currentVelocity.x > 0.f)
//				currentVelocity.x = 0.f;
//		}
//		if (currentVelocity.y > 0.f)
//		{
//			currentVelocity.y -= drag * dt * multiplier;
//
//			if (currentVelocity.y < 0.f)
//				currentVelocity.y = 0.f;
//		}
//		else if (currentVelocity.y < 0.f)
//		{
//			currentVelocity.y += drag * dt * multiplier;
//
//			if (currentVelocity.y > 0.f)
//				currentVelocity.y = 0.f;
//		}
//
//		//Final move
//		shape.move(currentVelocity.x * dt * multiplier, currentVelocity.y * dt * multiplier);
//
//		//Draw
//		window.clear();
//
//		//Draw everything
//		window.draw(shape);
//
//		window.display();
//
//		std::cout << "dt: " << dt << "\n";
//	}
//
//	return 0;
//}