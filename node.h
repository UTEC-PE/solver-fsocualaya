
template <typename T>

struct Node
{
	T data;
	struct Node* childLeft;
	struct Node* childRight;

	Node(T data) : data(data){
		childLeft = childRight = nullptr;
	}
};