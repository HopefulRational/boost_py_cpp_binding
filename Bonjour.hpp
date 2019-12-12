#include<iostream>
#include<string>

class Bonjour
{
	std::string m_msg;
	
public:
	Bonjour(std::string msg):m_msg(msg) { }
	
	void greet() { std::cout << m_msg << std::endl; }
	
	void set_msg(std::string msg) { this->m_msg = msg; }
	
	std::string get_msg() { return m_msg; }
	
};
