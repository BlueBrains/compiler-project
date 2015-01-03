#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_
template<class T>
class myvector
{
public:
	myvector();
	T at(int i);
	void insert(T new_obj);
	void clear(myvector);
	T pop();
	bool find(T);

private:
	T Obj;
	myvector* next;
	myvector* start;
};
#endif