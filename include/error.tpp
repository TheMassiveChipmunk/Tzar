template <typename T>
void tzar::log_message (const T& Value)
{
    std::cout << "[MSG]: " << Value << std::endl;
}

template <typename T>
void tzar::log_message (const std::string& Message, const T& Value)
{
    std::cout << "[MSG]: " << Message << Value << std::endl;
}

template <typename T>
void tzar::log_error (const T& Value)
{
    std::cout << "[ERR]: " << Value << std::endl;
}

template <typename T>
void tzar::log_error (const std::string& Message, const T& Value)
{
    std::cout << "[ERR]: " << Message << Value << std::endl;
}
