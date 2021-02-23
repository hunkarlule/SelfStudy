#include <iostream>
#include "Int.h"

using namespace std;

Int::Int(int value, auto(*validationFunction)(int, std::string&)-> bool)
{
	m_value = value;
	m_valid = validationFunction;
}

void Int::set(auto(*validationLogicAddress)(int, std::string&)-> bool)
{
	m_valid = validationLogicAddress;
}

auto Int::get(std::istream& istr) -> std::istream&
{
	bool done = false;
	do
	{
		if (istr >> m_value)
		{
			//if (m_valid)
			//{
			//	done = m_valid(m_value, m_message);
			//}

			//same effect
			done = !m_valid || m_valid(m_value, m_message);
		}
		else
		{
			m_message = "Invalid Integer, try again: ";
			istr.clear();
		}

		istr.ignore(1000, '\n');

	} while (!done && cout << m_message);
	return istr;
}

auto Int::put(std::ostream& ostr) const -> std::ostream&
{
	return ostr << m_value;
}

std::ostream& operator<<(std::ostream& ostr, const Int& I)
{
	return I.put(ostr);
}

std::istream& operator>>(std::istream& istr, Int& I)
{
	return I.get(istr);
}
