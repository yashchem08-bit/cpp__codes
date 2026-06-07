#include <SFML/Graphics.hpp>
#include <vector>

struct SnakeSegment {
    int x, y;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Game");

    // Snake body
    std::vector<SnakeSegment> snake = {{5, 5}};
    int blockSize = 20;

    // Food
    SnakeSegment food = {10, 10};

    sf::Clock clock;
    float speed = 0.2f;
    float timer = 0;

    int dx = 1, dy = 0; // initial direction

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Controls
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) { dx = 0; dy = -1; }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) { dx = 0; dy = 1; }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) { dx = -1; dy = 0; }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) { dx = 1; dy = 0; }

        // Timer for movement
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        if (timer > speed) {
            timer = 0;

            // Move snake
            for (int i = snake.size() - 1; i > 0; --i)
                snake[i] = snake[i - 1];
            snake[0].x += dx;
            snake[0].y += dy;

            // Eat food
            if (snake[0].x == food.x && snake[0].y == food.y) {
                snake.push_back({food.x, food.y});
                food.x = rand() % (800 / blockSize);
                food.y = rand() % (600 / blockSize);
            }
        }

        // Draw everything
        window.clear();

        // Draw snake
        for (auto &s : snake) {
            sf::RectangleShape rect(sf::Vector2f(blockSize, blockSize));
            rect.setFillColor(sf::Color::Green);
            rect.setPosition(s.x * blockSize, s.y * blockSize);
            window.draw(rect);
        }

        // Draw food
        sf::RectangleShape foodRect(sf::Vector2f(blockSize, blockSize));
        foodRect.setFillColor(sf::Color::Red);
        foodRect.setPosition(food.x * blockSize, food.y * blockSize);
        window.draw(foodRect);

        window.display();
    }

    return 0;
}