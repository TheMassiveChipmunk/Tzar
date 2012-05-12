template <typename T>
tzar::Manager<T>::Manager ()
{
}

template <typename T>
tzar::Manager<T>::~Manager ()
{
}


template <typename T>
void tzar::Manager<T>::release_all ()
{
    tzar::Manager<T>::iterator_t it;
    
    for (it = this->begin () ; it != this->end () ; it++)
    {
	this->ResourceMap.erase (it);
    }
}

template <typename T>
void tzar::Manager<T>::release_element (const std::string& Key)
{
    tzar::Manager<T>::iterator_t it = this->ResourceMap.find (Key);

    if (it != this->end ())
    {
	this->ResourceMap.erase (it);
    }
}

template <typename T>
auto tzar::Manager<T>::end () -> tzar::Manager<T>::iterator_t
{
    return this->ResourceMap.end ();
} 

template <typename T>
auto tzar::Manager<T>::begin () -> tzar::Manager<T>::iterator_t
{
    return this->ResourceMap.begin ();
} 

template <typename T>
auto tzar::Manager<T>::find (const std::string& Key) -> tzar::Manager<T>::iterator_t
{
    return this->ResourceMap.find (Key);
}

template <typename T>
auto tzar::Manager<T>::operator[] (const std::string& Key) -> T&
{
    tzar::Manager<T>::iterator_t it = this->find (Key);
    
    if (it != this->end ())
    {
	return *(it->second);
    }
    
    this->load (Key);
    
    return *(this->find (Key)->second);
}
