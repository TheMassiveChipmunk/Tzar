#include "soundmanager.hpp"

tzar::SoundManager::SoundManager ()
{
}

tzar::SoundManager::~SoundManager ()
{
}

void tzar::SoundManager::load (const std::string& Filename)
{
    sf::Music* Music = new sf::Music;
    
    if (!Music->openFromFile (Filename))
    {
	tzar::log_error<std::string> ("Could not load " + Filename);
	return;
    }

    this->ResourceMap.insert (tzar::SoundManager::resource_t 
			      (Filename, std::shared_ptr<sf::Music> (Music)));
}
