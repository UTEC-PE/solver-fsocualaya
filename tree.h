#include "node.h"

class BTree{
public:
	BNode* root;

public:
	BTree(){
		root = nullptr;
	};

	BTree(char* str){
		BNode* node = new BNode;
		node->data = str;
		this->root = node;
		node->childRight = node->childLeft = nullptr;
	};

    void construct(){
        this->root->construct();
    };

    float operate(){
    	return this->root->operate();
    };

	 ~BTree(){};
};