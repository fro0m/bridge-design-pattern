#include <QCoreApplication>
#include <item.h>
#define qst2ch(str) str.toLatin1().data()
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Item item, item2;
    item.setName("fuck");
    //qDebug("item's name is %s", item.getName().toLatin1().data());
    qDebug("item's name is %s", qst2ch(item.getName()));
    qDebug("pointer to data in item is %d", reinterpret_cast<int>(item.constDataPointer()));
    item2 = item;
    qDebug("pointer to data in item2 after copy is %d", reinterpret_cast<int>(item2.constDataPointer()));
    item2.setName("new item2 name")         ;
    qDebug("item2's name is %s", qst2ch(item2.getName()));
    qDebug("pointer to data in item2 is %d", reinterpret_cast<int>(item2.constDataPointer()));
    return a.exec();
}
