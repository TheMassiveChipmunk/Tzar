#include "map.hpp"

tzar::Map::Map ()
{
}

tzar::Map::~Map ()
{
}

void tzar::Map::load_file (const std::string& Filename)
{
    unsigned int Pos = 0;
    std::string Line ("");
    std::fstream Stream (Filename.c_str ());
    
    if (!Stream)
    {
	tzar::log_error<std::string> ("Could not load " + Filename);
	return;
    }
    
    while (Stream.good ())
    {
	Pos = 0;
	Line = "";

	std::getline (Stream, Line);
	
	if (Line.find ("=") != std::string::npos)
	{
	    Pos = Line.find ("=");

	    std::string Var (Line.substr (0, Pos));
	    std::string Data (Line.substr (Pos + 1, (Line.length () - Pos)));

	    this->Values.insert (tzar::Map::value_t (Var, Data));
	}
    }
}

tzar::Map::iterator_t tzar::Map::end ()
{
    return this->Values.end ();
}

tzar::Map::iterator_t tzar::Map::begin ()
{
    return this->Values.begin ();
}

tzar::Map::iterator_t tzar::Map::find (const std::string& Key)
{
    return this->Values.find (Key);
}

std::string& tzar::Map::operator[] (const std::string& Key)
{
    tzar::Map::iterator_t it = this->find (Key);
    
    if (it != this->end ())
    {
	return it->second;
    }
    
    this->Values.insert (tzar::Map::value_t (Key, ""));

    return (this->find (Key))->second;
}
