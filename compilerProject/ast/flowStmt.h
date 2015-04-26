#pragma once
#include "node.h"
enum flowType{ breakNode = 0, continueNode, returnNode};
class FlowStmtNode :
	public Node
{
protected:
	flowType _type;
	Node* _scoop;
public:
	static	int 	if_label;
	FlowStmtNode(Node* son, Node* next, flowType type, Node* scoop) :Node(son,next,flowStmtNode), _type(type),_scoop(scoop)
	{


	}
	char* getFlowType(){
		if(_type==breakNode)
			return "break";
		else if(_type==continueNode)
			return "continue";
		else if (_type==returnNode)
			return "return";
	}

};