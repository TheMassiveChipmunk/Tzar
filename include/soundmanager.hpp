#ifndef _SOUNDMANAGER_HPP_
#define _SOUNDMANAGER_HPP_

#include <SFML/Audio.hpp>

#include "manager.hpp"

namespace tzar
{
    class SoundManager : public tzar::Manager<sf::Music>
    {
    public:
	/*!
	 * Construct an empty sound manager.
	 */
	SoundManager ();
	
	/*!
	 * Destroy the current instance.
	 */
	~SoundManager ();

	/*!
	 * Load a sound onto resource map.
	 * @param Filename Where to load the resource from.
	 */
	void load (const std::string& Filename);
    };
}

#endif /* _SOUNDMANAGER_HPP_ */
