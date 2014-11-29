#include <iostream>
#include <memory>

namespace nsSdD {

	template <typename T>

	class CNode
	{
		private:
			T m_Data;
			T* m_NextNode;
			std::shared_ptr <CNode<T>> m_ptr;

		public:

			CNode(T Data = 0, std::shared_ptr <CNode<T>> ptr=0) throw();

			// Data Getter + Setter
			T GetData(void)const throw();
			void SetData(T NewData)throw();

			// NextNode Getter + Setter
			T GetNextNode(void)const throw();
			void SetNextNode(T* NewNextNode);

			~CNode(void) throw();
	};
}//nsSdD
