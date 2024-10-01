#include <iostream>
// #include <sstring>
#include <vector>

namespace soft {
	template <typename _T_t>
	class softArray {
	
	private:
		unsigned int add_index = 0, array_size_; 
		std::vector<_T_t> some_vector;

		_T_t *some_array;
	public:
		softArray() = default;
		softArray(unsigned int size_) { this->some_array = new _T_t[size_]; this->array_size_ = size_; }
		 
		void add (_T_t object_blovk_) {
			if (this->add_index >= this->array_size_)
				this->some_vector.push_back(object_blovk_);
			else some_array[add_index] = object_blovk_;
			this->add_index++;
		}
		void clear () {
			for (int i = 0; i < this->array_size_; i++) {
				this->some_array[i] = -0;
			}
			this->some_vector.clear();
			this->add_index = 0;
		}
		void print() {
			std::cout << "Array<" << this->array_size_ << "> = [";
			for ( int i = 0; i < this->array_size_; i++) {
				std::cout << this->some_array[i] << ", ";
			} 
			std::cout << "]\n";
			std::cout << "Vector<" << this->some_vector.size() << "> = {";
			for (auto a : this->some_vector) {
				std::cout << a << ", ";
			}
			std::cout << "}\n";
		}
		
	};
}
