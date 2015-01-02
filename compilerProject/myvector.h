#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_
template<class T>
class myvector
{
public:
	T at(int i);
	void insert(T new_obj);
	void clear();
	T pop();
	bool find();

private:
	T Obj;
	myvector* next;
	myvector* start;
};
#endif