#include <QCoreApplication>
#include <UPowerDeviceManager.h>

int main(int argc, char* argv[]) {
    
    QCoreApplication app(argc, argv);
    
    UPowerDeviceManager manager;

    return app.exec();
}
