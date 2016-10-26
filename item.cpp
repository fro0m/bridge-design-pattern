#include "item.h"


Item::Item() : data(new ItemData)
{

}

Item::Item(const Item &rhs) : data(rhs.data)
{

}

Item &Item::operator=(const Item &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Item::~Item()
{

}
