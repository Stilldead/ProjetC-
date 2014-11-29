/* .hxx */

#include "CList.h"
#include "CNode.h"

using namespace nsSdD;

    // Constructor
    explicit CListV1::CListV1()throw() {

    } //CListV1

    // Constructor 2
    explicit CListV1::CListV1 (size_type n)throw() {

    } //CListV1

    // Constructor 3
    CListV1::CList (size_type n, const value_type& val)throw() {

    } //CListV1

    //Constructor 4
    CListV1::list (const CList & x)throw() {

    } //list

    // Destructor
    CListV1::~CListV1()throw() {

    } //~CListV1

    // Getters et Setters

    CNode<T> CListV1::GetInfo ()const throw() {
        return m_Info;
    } //GetInfo

    void CListV1::SetInfo (CNode<T> info)throw() {
        m_Info = info;
    } //SetInfo

    CNode<T> CListV1::GetNext ()const throw() {
        return m_Next;
    } //GetNext

    void CListV1::SetNext (CNode<T> next)throw() {
        m_Next = next;
    } //SetNext

    CNode<T> CListV1::GetPrev ()const throw() {
        return m_Prev;
    } //GetPrev

    void CListV1::SetPrev (CNode<T> prev)throw() {
        m_Prev = prev;
    } //SetPrev

    void AddAfter(CNode<T> newElem ) throw();
    {
        	NewElem -> SetPrev(this);
        	NewElem -> SetPrev(GetPrev());
        	GetNext() -> SetPrev(NewElem);
        	SetNext(NewElem);
        	return NewElem;
    }

    void AddBefore(CNode<T> newElem )throw();
    {
    	return GetPrev()-> AddAfter(NewElem);
    }

    void Remove(void)throw ()
    {
    	GetPrev() -> SePrev(GetNext());
    	GetNext() -> SetNext(GetPrev());

    	SetNext(0);

    	return this;
    }




