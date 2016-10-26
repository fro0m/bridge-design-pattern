#include <QCoreApplication>
#include <item.h>
#define qst2ch(str) str.toLatin1().data()
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Item item;
    item.setName("fuck");
    //qDebug("item's name is %s", item.getName().toLatin1().data());
    qDebug("item's name is %s", qst2ch(item.getName()));
    return a.exec();
}
