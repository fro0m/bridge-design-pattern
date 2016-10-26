#ifndef ITEM_H
#define ITEM_H

#include <QSharedDataPointer>
#include <itemdata.h>


//class ItemData;
class Item
{
public:
    Item();
    Item(const Item &);
    Item &operator=(const Item &);
    ~Item();
public:
    QString getName() const {
        return data->itemName();
    }
    void setName(QString t_name) {
        data->setItemName(t_name);
    }


private:
    QSharedDataPointer<ItemData> data;
};
/*!
 * Q_MOVABLE_TYPE specifies that Type has a constructor and/or a destructor but can be moved in memory using memcpy(). Note: despite the name, this has nothing to do with move constructors or C++ move semantics.
 */
Q_DECLARE_TYPEINFO(Item, Q_MOVABLE_TYPE);

#endif // ITEM_H
