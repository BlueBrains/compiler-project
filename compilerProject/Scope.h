#pragma once
#ifndef __Symbol_Table__
#define __Symbol_Table__
#include "..\MyMap.h"
class Scope{
public:
	Scope();
	Scope * parent;
	MyMap * m;
};

#endif