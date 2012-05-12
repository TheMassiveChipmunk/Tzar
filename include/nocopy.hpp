#ifndef _NOCOPY_HPP_
#define _NOCOPY_HPP_

namespace tzar
{
    class NoCopy
    {
    protected:
	/*!
	 * Constructs an empty NoCopy.
	 */
	NoCopy ();
	
    private:
	/*!
	 * By making to private and not defining it,
	 * we have made it impossible to copy any inherited classes.
	 */
	NoCopy (const NoCopy& Copy);
	
	/*!
	 * By making to private and not defining it,
	 * we have made it impossible to copy any inherited classes.
	 */
	NoCopy& operator= (const NoCopy& Copy);
    };
}
#endif /* _NOCOPY_HPP_ */
