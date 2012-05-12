template <typename T>
tzar::Box<T>::Box ()
{
}

template <typename T>
tzar::Box<T>::Box (const Box<T>& Copy)
    : X (Copy.X),
      Y (Copy.Y),
      Width (Copy.Width),
      Height (Copy.Height)
{
}

template <typename T>
tzar::Box<T>::Box (tzar::Vector2D<T> Coord, 
		   tzar::Vector2D<T> Dimensions)
    : X (Coord.X),
      Y (Coord.Y),
      Width (Dimensions.X),
      Height (Dimensions.Y)
{
}

template <typename T>
bool tzar::Box<T>::collides (const Box<T>& Object) const
{
    
    if (this->X + this->Width > Object.X &&
	this->Y + this->Height > Object.Y &&
	this->X < Object.X + Object.Width && 
	this->Y < Object.Y + Object.Height)
    {
	return true;
    }
    
    return false;
}

template <typename T>
tzar::Box<T>& tzar::Box<T>::operator= (const Box<T>& Copy)
{
    this->X = Copy.X;
    this->Y = Copy.Y;
    this->Width = Copy.Width;
    this->Height = Copy.Height;

    return *this;
}
