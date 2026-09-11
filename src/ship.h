#include <SFML/Graphics.hpp>
#include <vector>

// Class to represent the ship in the game. The ship is made up of triangles 
// and will eventually be able to move around the screen, rotate, and fire projectiles.

// For now, the ship is just a static triangle that is drawn in the center of the screen.

class Ship : public sf::Drawable, public sf::Transformable {
private:

    // Vertex array to hold base geometry centered at the origin 
    // (i.e. local object space coordinates)
    sf::VertexArray vertices;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:
    
    // Default constructor
    Ship();
};


