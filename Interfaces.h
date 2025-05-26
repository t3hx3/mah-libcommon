#include <QtPlugin>

QT_BEGIN_NAMESPACE
class QWidget;
class QString;
QT_END_NAMESPACE


class Interface
{
public:
    virtual ~Interface() = default;
    virtual QString pname()  = 0;
    virtual QString pdesc()  = 0;
    virtual QWidget* pcontent() = 0;

   virtual void initialize() = 0;
};

QT_BEGIN_NAMESPACE
#define Interface_iid "org.MAH.Interface/1.0"
Q_DECLARE_INTERFACE(Interface, Interface_iid)
QT_END_NAMESPACE
