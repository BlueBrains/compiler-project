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
	virtual void generateCode()
	{
		if (_type == breakNode)
		{
			if (lastLabel.size()>0)
				MIPS_ASM::jump(lastLabel.back().second);
//			cout << "enter" << endl;
		}
		else if (_type == continueNode)
		{
			if (lastLabel.size()>0)
				MIPS_ASM::jump(lastLabel.back().first);
			//			cout << "enter" << endl;
		}
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