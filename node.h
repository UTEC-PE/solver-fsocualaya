#include <cmath>
using namespace std;

struct BNode
{
	char* data;
	struct BNode* childLeft;
	struct BNode* childRight;

	float operate(){
	    if(this->data != nullptr) {
            if ((this->data) == "+")
                return this->childLeft->operate() + this->childRight->operate();
            if ((this->data) == "-")
                return this->childLeft->operate() - this->childRight->operate();
            if ((this->data) == "*")
                return this->childLeft->operate() * this->childRight->operate();
            if ((this->data) == "/")
                return this->childLeft->operate() / this->childRight->operate();;
            if ((this->data) == "^")
                return pow(this->childLeft->operate(), this->childRight->operate());
            else
                return static_cast<float>(atof(this->data));
        }
        throw "Check ur tree!";
	}

	void insertLeft(char* str){
        BNode *node = new BNode;
        this->childLeft = node;
        node->data = str;
        node->childLeft = node->childRight = nullptr;
	}

    void insertRight(char* str){
        BNode *node = new BNode;
        this->childRight = node;
        node->data = str;
        node->childRight= node->childLeft = nullptr;
    }

};