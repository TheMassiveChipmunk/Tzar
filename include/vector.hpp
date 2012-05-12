#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

namespace tzar
{
    /*!
     * Represent a 2D point.
     */
    template <typename T>
    struct Vector2D
    {
	T X;
	T Y;
	
	/*!
	 * Constructors an empty Vector2D.
	 */
	Vector2D ();
	
	/*!
	 * Constructs a vector from two coordinates.
	 * @param X Vector X element.
	 * @param Y Vector Y element.
	 */
	Vector2D (T X, T Y);

	/*!
	 * Construct a vector from another vector.
	 * @param Copy A Vector2D to be copied.
	 */
	Vector2D (const Vector2D<T>& Copy);

	/*!
	 * Destroys the current instance.
	 */
	~Vector2D ();

	/*!
	 * Vector2D assignment operator.
	 * Copies a vector to another vector.
	 * @param Copy A Vector2D to be copied.
	 * @return A reference to this.
	 */
	Vector2D& operator= (const Vector2D<T>& Copy);
    };

    typedef Vector2D<int> vector2i_t;
    typedef Vector2D<float> vector2f_t;
    typedef Vector2D<unsigned int> vector2u_t;
}

#include "vector.tpp"

#endif /* _VECTOR_HPP_ */
