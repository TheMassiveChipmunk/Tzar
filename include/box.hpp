#ifndef _BOX_HPP_
#define _BOX_HPP_

#include "vector.hpp"

namespace tzar
{
    /*!
     * Represent a 2D box in space.
     */
    template <typename T>
    struct Box
    {
	T X;
	T Y;
	
	T Width; 
	T Height;

	/*!
	 * Constructs an empty box.
	 */
	Box ();
	
	/*!
	 * Constructs a box from another box.
	 * @param Copy The box to be copied.
	 */
	Box (const Box<T>& Copy);
	
	/*!
	 * Constructs a box from it's coordinates and dimensions.
	 * @param Coord Box coordinates.
	 * @param Dimensions Box width and height.
	 */
	Box (tzar::Vector2D<T> Coord, 
	     tzar::Vector2D<T> Dimensions);

	/*!
	 * Checks for collision of two box objects.
	 * @param Object Box to check collision against.
	 * @return True on collision false otherwise.
	 */
	bool collides (const Box<T>& Object) const;

	/*!
	 * Copies a box to another box.
	 * @param Copy The box to be copied.
	 * @return A reference to this.
	 */
	Box<T>& operator= (const Box<T>& Copy);
    };

    typedef Box<int> boxi_t;
    typedef Box<float> boxf_t;
    typedef Box<unsigned int> boxu_t;
}

#include "box.tpp"

#endif /* _BOX_HPP_ */
