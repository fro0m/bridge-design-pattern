#ifndef ITEMDATA_H
#define ITEMDATA_H
#include <QSharedData>
#include <QString>

class ItemData : public QSharedData
{
public:
    ItemData();
    ItemData(const ItemData &t_other);
    QString itemName() const;
    void setItemName(const QString &itemName);
public: //data
    QString m_itemName;
private:
};

#endif // ITEMDATA_H
