template <typename T>
tzar::Vector2D<T>::Vector2D ()
{
}

template <typename T>
tzar::Vector2D<T>::Vector2D (T X, T Y)
    : X (X), 
      Y (Y)
{
}

template <typename T>
tzar::Vector2D<T>::Vector2D (const Vector2D<T>& Copy)
    : X (Copy.X), 
      Y (Copy.Y)
{
}

template <typename T>
tzar::Vector2D<T>::~Vector2D ()
{
}

template <typename T>
tzar::Vector2D<T>& tzar::Vector2D<T>::operator= (const Vector2D<T>& Copy)
{
    this->X = Copy.X;
    this->Y = Copy.Y;
    
    return *this;
}
