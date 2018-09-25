#include "node.h"

class BTree{
private:
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

    int search(char sign, BNode* node){
        int level = 0;
    };

    void construct(BNode* node){

    };

    float operate(){
    	return this->root->operate();
    };

	 ~BTree(){};
};