#include <cmath>
using namespace std;

struct Node
{
	char* data;
	struct Node* childLeft;
	struct Node* childRight;

	float operate(){
	    if((this->data)=="+")
	        return static_cast<float>(atof(this->childLeft->data) + atof(this->childRight->data));
        if((this->data)=="-")
            return static_cast<float>(atof(this->childLeft->data) - atof(this->childRight->data));
        if((this->data)=="*")
            return static_cast<float>(atof(this->childLeft->data) * atof(this->childRight->data));
        if((this->data)=="/")
            return static_cast<float>(atof(this->childLeft->data) / atof(this->childRight->data));
        if((this->data)=="^")
            return static_cast<float>(pow(atof(this->childLeft->data), atof(this->childRight->data)));
	}
};