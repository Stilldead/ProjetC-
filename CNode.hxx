/* CNode.hxx */

#include "CNode.h"
using namespace nsSdD;
template <typename T>

	//Constructor
	CNode::CNode (T Data /* =0*/, std::shared_ptr <CNode<T>> ptr/*=0*/)throw()
	: 	m_Data (Data), m_ptr(ptr){}//CNode()

	//Destructor
	CNode::~CNode(void)throw() {

		delete m_NextNode;
		delete m_Data;
	}//~CNode()

	// Data Getter & Setter
	T GetData(void)const throw() {
		return m_Data;
	}//GetData()

	void SetData(T NewData)throw() {
		m_Data = NewData;
	}//SetData()

	// NextNode Getter & Setter
	T GetNextNode(void)const throw() {
		return m_NextNode;
	}//GetNextNode()

	void SetNextNode(T* NewNextNode) {
		m_NextNode=NewNextNode;
	}//SetNextNode()

