#ifndef ELEMENTQ2_H
#define ELEMENTQ2_H

#include "element.h"
#include "dependencies/Eigen/Dense"

class ElementQ2 : public Element
{
public:


    ElementQ2();
    ElementQ2(int element_id, Node* node_list, int *node_ids);
};

#endif // ELEMENTQ2_H
