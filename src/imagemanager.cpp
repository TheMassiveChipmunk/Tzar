#include "imagemanager.hpp"

tzar::TextureManager::TextureManager ()
{
}

tzar::TextureManager::~TextureManager ()
{
}

void tzar::TextureManager::load (const std::string& Filename)
{
    sf::Texture* Texture = new sf::Texture;
    
    if (!Texture->loadFromFile (Filename))
    {
	tzar::log_error<std::string> ("Could not load " + Filename);
	return;
    }

    this->ResourceMap.insert (tzar::TextureManager::resource_t 
			      (Filename, std::shared_ptr<sf::Texture> (Texture)));
}
