#ifndef _MANAGER_HPP_
#define _MANAGER_HPP_

#include <map>
#include <string>

#include <memory>

#include "error.hpp"
#include "nocopy.hpp"

namespace tzar
{
    /*!
     * Manage resources such as sound, music, etc.
     */
    template <typename T>
    class Manager : tzar::NoCopy
    {
    public:
	typedef std::map<std::string, std::shared_ptr<T> > map_t;
	typedef std::pair<std::string, std::shared_ptr<T> > resource_t;
	typedef typename map_t::iterator iterator_t;
    
	/*!
	 * Constructs an empty resource manager.
	 */
	Manager ();

	/*!
	 * Destroys the current instance.
	 */
	virtual ~Manager ();
	
	/*!
	 * Release all elements from the map.
	 */
	void release_all ();
	
	/*!
	 * Release the current element from the map.
	 * @param Key The key to the element to be released.
	 */
	void release_element (const std::string& Key);

	/*!
	 * Get the ending iterator for the map.
	 * @return An iterator pointing to the last pair in the map.
	 */
	auto end () -> iterator_t;

	/*!
	 * Get the beginning iterator for the map.
	 * @return An iterator pointing to the first pair in the map.
	 */
	auto begin () -> iterator_t;

	/*!
	 * Find an element in map.
	 * @param Key The key to the element to be accessed.
	 * @return A reference to the element.
	 */
	auto find (const std::string& Key) -> iterator_t;
	
	/*!
	 * Find an element in map.
	 * @param Key The key to the element to be accessed.
	 * @return A reference to the element.
	 */
	auto operator[] (const std::string& Key) -> T&;

	/*!
	 * Load an element onto the map.
	 * @param The file containing the resource.
	 */
	virtual void load (const std::string& Filename) = 0;
    protected:
	map_t ResourceMap;
    };
}

#include "manager.tpp"

#endif /* _MANAGER_HPP_ */
