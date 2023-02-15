#pragma once
#include <cstdlib>

//arreglo de floats
class Arreglo
{
private:
	//numero de elementos del array
	size_t m_count=0;

	//apuntador del comienzo [0] del arreglo
	float* data; 

public:
	size_t count()
	{
		return m_count;
	}

	//ctor
	Arreglo(size_t _size)
	{
		data = (float*) malloc(_size);   //void*
		m_count = _size;

		//limpiar la basura
		memset(data, 0, _size);
	}

	//setter de posicion en el arreglo
	void setval(size_t index, float value)
	{
		if (index > m_count)
		{
			std::cout << "Error: index > arreglo count \n";
			return;
		}
		else
		{
			*(data + index) = value;
		}
	}

	float getval(size_t index)
	{
		if (index > m_count)
		{
			std::cout << "Error: index > arreglo count \n";
			return 0;
		}
		else
		{
			return *(data + index);
		}
	}

	void print()
	{
		for (int i = 0; i < m_count; i++)
		{
			//std::cout << "[" << i << "] = " << getval(i) << "\n";
			printf("[%i] = %f \n", i, getval(i));
		}
	}

};

