#pragma once
#include "node.h"
enum flowType{ breakNode = 0, continueNode, ReturnNode};
class FlowStmtNode :
	public Node
{
protected:
	flowType _type;
	Node* _scoop;
public:
	static	int 	flow_label;
	FlowStmtNode(Node* son, Node* next, flowType type, Node* scoop) :Node(son,next), _type(type),_scoop(scoop)
	{


	}
	char* getFlowType(){
		if(_type==breakNode)
			return "break";
		else if(_type==continueNode)
			return "continue";
		else if (_type==ReturnNode)
			return "return";
	}

};