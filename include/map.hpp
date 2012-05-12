#ifndef _MAP_HPP_
#define _MAP_HPP_

#include <iostream>
#include <fstream>

#include <string>
#include <map>

#include "error.hpp"

namespace tzar
{
    class Map
    {
    public:
	/*!
	 * Constructs an empty map object.
	 */
	Map ();

	/*!
	 * Destroys the current instance.
	 */
	~Map ();
	
	typedef std::map<std::string, std::string> map_t;
	typedef std::pair<std::string, std::string> value_t;
	typedef typename map_t::iterator iterator_t;

	/*!
	 * Load map values onto a map from a file.\
	 * @param Filename File to be loaded.
	 */
	void load_file (const std::string& Filename);

	/*!
	 * Get the ending iterator in the map.
	 * @return Last iterator.
	 */
	iterator_t end ();

	/*!
	 * Get the beginning iterator in the map.
	 * @return First iterator.
	 */
	iterator_t begin ();

	/*!
	 * Find a mapped value in the map.
	 * @param Key Key value.
	 * @return An iterator_t pointing to the mapped value and key.
	 */
	iterator_t find (const std::string& Key);
	
	/*!
	 * Find a mapped value.
	 * @param Key Key value.
	 * @return A reference to the mapped value.
	 */
	std::string& operator[] (const std::string& Key);	
    private:
	map_t Values;
    };
}

#endif /* _MAP_HPP_ */
