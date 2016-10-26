#include "itemdata.h"

//ItemData::ItemData()
//    : QSharedData()
//{

//}

ItemData::ItemData() : QSharedData(){}

ItemData::ItemData(const ItemData &t_other)
    :  QSharedData(t_other), m_itemName(t_other.itemName())
{

}

QString ItemData::itemName() const
{
    return m_itemName;
}

void ItemData::setItemName(const QString &itemName)
{
    m_itemName = itemName;
}
