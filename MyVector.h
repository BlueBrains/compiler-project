template <class vec>
class MyVector
{
public:
	MyVector(){
		capacity = 10;
		n = 0;
		arr = new vec[capacity];
	}

	~MyVector()
	{       // destructor
		delete[] arr;
	}

	//MyVector(unsigned int size, vec fill);
	//MyVector(vec first);


	int size() const
	{
		return n;
	}
	void push_back(vec x)
	{
		if (n >= capacity) increase_capacity(2 * capacity);
		arr[n] = x;
		++n;
	}
	void set(int i, vec val)
	{
		if (i < 0 || i >= n) error("range error");
		arr[i] = val;
	}


	vec get(int i) const
	{
		if (i < 0 || i >= n) cout << "range error";
		return arr[i];
	}
	double& operator[](int i) {
		if (i < 0 || i >= n) error("range error");
		return arr[i];
	}

	const double& operator[](int i) const {
		if (i < 0 || i >= n) error("range error");
		return arr[i];
	}
	void clear()
	{       // destructor
		this->capacity = 10;
		this->n = 0;
	}


	int find(vec x)
	{
		cout << "x= " << x << " siz= " << this->size() << endl;
		for (int i = 0; i < this->size(); i++)
		{
			cout << "arr[i]= " << arr[i] << endl;
			if (x == arr[i])
				return i;
		}
		return -1;
	}
	void erase(int x)
	{
		int location = x;
		for (int i = location; i < this->size() - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		--this->n;
	}
private:
	vec* arr;  // pointer to the first element of this myvec
	int capacity; // number of elements arr can hold (i.e. size of underlying array)
	int n;        // size of this myvec
	
	// Increases the capacity of the underlying array to be sz. If sz
	// is smaller than the current capacity then nothing is done.
	void increase_capacity(int sz) {
		if (sz <= capacity) return;

		vec* new_arr = new vec[sz];   // allocate a new array on the free store

		for (int i = 0; i < capacity; ++i) { // copy old vector into new one
			new_arr[i] = arr[i];
		}
		capacity = sz;                      // set the new capacity

		delete[] arr;                       // delete the old vector
		arr = new_arr;
	}
	
	
};


