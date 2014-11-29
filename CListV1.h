#ifndef CLIST_H_
#define CLIST_H_
#include <iostream>
#include "CNode.h"

namespace nsSdD {

	template <typename T>

    /* Class CList version 1 */

	class CListV1 {

		private : /* Private data members */

			CNode<T> m_Info;                                // Info
			CNode<T> m_Next;                                // Next
			CNode<T> m_Prev;                                // Previous

		public:   /* Public functions */

		    explicit CListV1 ();                            // Constructor
            explicit CListV1 (CNode<T> n);                  // Constructor 2
            CListV1 (CListV1 n, const CNode<T> val);     // Constructor 3
            CListV1 (const CListV1 & x);                         // Constructor 4

            ~CListV1();                            // Destructor

            CNode<T> GetInfo () const throw();              // Getter Info
            void SetInfo (CNode<T> info) throw();           // Setter Info
            CNode<T> GetNext () const throw();              // Getter Next
            void SetNext (CNode<T> next) throw();           // Setter Next
            CNode<T> GetPrev () const throw();              // Getter Prev
            void SetPrev (CNode<T> prev) throw();           // Setter Prev

            int GetSize(CListV1 list);
            void Swap(CListV1 list, CNode<T> elem1, CNode<T> elem2);

            void AddAfter(CNode<T> newElem ) throw();
            void AddBefore(CNode<T> newElem )throw();
            void Remove(void) throw();


	};//CListV1

}//nsSdD
#endif /* CLIST_H_ */
