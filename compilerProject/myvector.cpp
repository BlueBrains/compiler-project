#include "myvector.h"

template <class T>
myvector<T>::myvector()
{
	this->next = null;
	this->start = null;
}

template <class T>
void myvector<T>::insert(T new_obj)
{
	myvector *ptr = new myvector();
	myvector *temp = this->start;
	if (temp == NULL)
	{
		this->start = ptr;
		ptr->next = NULL;
		ptr->Obj = new_obj;
		ptr->start = this->start;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		ptr->next = NULL;
		ptr->Obj = new_obj;
		ptr->start = this->start;
	}
}

template <class T>
void myvector<T>::clear(myvector s)
{
	
	if (s->next == NULL)
	{
		delete s;
	}
	else
	{
		clear(s->next);
	}
}

template <class T>
bool myvector<T>::find(T x)
{
	myvector *temp = this->start;
	if (temp == NULL)
	{
		return false
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->Obj == x)
				return true;
			temp = temp->next;
		}
		return false
	}
}

template <class T>
T myvector<T>::pop()
{
	myvector *temp = this->start;
	if (temp == NULL)
	{
		return null;
	}
	else
	{
		if (temp->next == null)
		{
			T t = temp->Obj;
			delete temp;
		}
		else{
			while (temp->next->next != NULL)
			{
				temp = temp->next;
			}
			T t = temp->next->Obj;
			delete (temp->next);
			temp->next = null;
		}
		return t;
	}
	
}

template <class T>
T myvector<T>::at(int i)
{
	myvector *temp = this->start;
	if (temp == NULL)
	{
		return false
	}
	else
	{
	while (i != 0){
			if (temp == NULL)
			{
					return false;
			}
			temp = temp->next;
		}
		return temp->Obj
	}
}

