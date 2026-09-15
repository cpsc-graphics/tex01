#include "ship.h"

Ship::Ship() : vertices(sf::PrimitiveType::TriangleStrip, 4)  {
    // define the positions
    vertices[0].position = sf::Vector2f(-0.7071f, -0.7071f);
    vertices[1].position = sf::Vector2f(1.0f, 0.0f);;
    vertices[2].position = sf::Vector2f(0.0f, 0.0f);
    vertices[3].position = sf::Vector2f(-0.7071f, 0.7071f);

    // define the color of the ship. All vertices get the same color
    for (std::size_t i = 0; i < vertices.getVertexCount(); ++i) {
        vertices[i].color = sf::Color::Red;
    }
}

void Ship::draw(sf::RenderTarget& target, sf::RenderStates states) const {   
    target.draw( vertices, getTransform() );    
}

