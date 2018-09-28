#include <cmath>
#include <cstring>
using namespace std;

struct BNode
{
	char* data;
	struct BNode* childLeft;
	struct BNode* childRight;

    int size(){
        int size = 0, pos = 0;
        while((this->data[pos])){
            size++;
            pos++;
        }
        return size;
    };

	float operate(){
	    if(this->data) {
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

	int search(char sign){
		int level = 0, pos = 0;
        while((this->data)[pos]){
            if((this->data)[pos] == '(')
                level++;
            if((this->data)[pos] == ')')
                level--;
            if(((this->data)[pos]==sign && level == 0))
                return pos;
            pos++;
        }
        return -1;
//	    throw "Syntax error!";
	}


	void construct(){
//	    removeParenth();
        if(this->search('+')!=-1) {
            int pos = this->search('+');
            char left[pos];
            char right[this->size() - (pos + 1)];

            for (int i = 0; i < pos; i++)
                left[i] = this->data[i];
            for (int i = 0; i < this->size() - (pos+1); i++)
                right[i] = data[pos+i+1];

            this->insertLeft(left);
            this->insertRight(right);
            this->data = "+";
        }
        else{

        }
    };

};