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

        if(!this)
            return;
        else if(this->search('+')!=-1){
            int pos = this->search('+');
            char left[pos];
            for(int i=0; i<pos;i++)
                left[i]=data[i];
//            char right[];
//            this->insertLeft(left);
//            this->insertRight((this->data)+=(this->search('+')+1));
//            data = (this->data+=this->search('+'));
//            childLeft->construct();
//            childRight->construct();
        };
//        else if(this->search('-')==-1)
//        else if(this->search('*')==-1)
//        else if(this->search('/')==-1)
//        else if(this->search('^')==-1)

    };

};