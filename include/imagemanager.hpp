#ifndef _IMAGEMANAGER_HPP_
#define _IMAGEMANAGER_HPP_

#include <SFML/Graphics.hpp>

#include "manager.hpp"

namespace tzar
{
    class TextureManager : protected tzar::Manager<sf::Texture>
    {
    public:
	/*!
	 * Construct an empty texture manager.
	 */
	TextureManager ();
	
	/*!
	 * Destroy the current instance.
	 */
	~TextureManager ();

	/*!
	 * Load a texture onto resource map.
	 * @param Filename Where to load the resource from.
	 */
	void load (const std::string& Filename);
    };
}

#endif /* _IMAGEMANAGER_HPP_ */
