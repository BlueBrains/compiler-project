#pragma once
#ifndef __SCOPE_H__
#define __SCOPE_H__
#include "..\MyMap.h"
#include<vector>
class Scope{
public:
	Scope();
	Scope * parent;
	MyMap * m;
};

#endif