#include "node.h"

class BTree{
public:
	Node* root;

public:
	BTree(){
		root = nullptr;
	};

	BTree(char* &str){
		Node* node = new Node;
		node->data = str;
		this->root = node;
		node->childRight = node->childLeft = nullptr;
	};

    void insertLeft(char* str, Node* parent){
        if(!parent->childLeft) {
            Node *node = new Node;
            parent->childLeft = node;
            node->data = str;
            node->childLeft = node->childRight = nullptr;
        }
    };

    void insertRight(char* str, Node* parent){
        if(!parent->childRight){
            Node *node = new Node;
            parent->childRight = node;
            node->data = str;
            node->childRight = node->childLeft= nullptr;
        }
    };

    int search(char, Node* node){
        int level = 0;

    };

    void construct(Node* node){

    };

	 ~BTree(){};
};