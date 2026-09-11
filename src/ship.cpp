#include "ship.h"

Ship::Ship() : vertices(sf::PrimitiveType::TriangleStrip, 4)  {
    // TO DO
    // Add vertices to the vertex array to form a triangle strip that represents the ship.
    // ...
    
    // TO DO
    // Define the color of the ship. All vertices get the same color. You can make the ship red.
    // ...
}

void Ship::draw(sf::RenderTarget& target, sf::RenderStates states) const {   
    target.draw( vertices, getTransform() );    
}

