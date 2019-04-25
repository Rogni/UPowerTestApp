#include <QCoreApplication>
#include <UPowerDeviceManager.h>
#include <UPowerDevice.h>
#include <QDebug>


int main(int argc, char* argv[]) {
    
    QCoreApplication app(argc, argv);
    
    UPowerDeviceManager manager;
    
    qDebug () << "Battery used: " << manager.onBattery();
    auto devices = manager.EnumerateDevices().value();
    for (auto devicePath: devices) {
        UPowerDevice device(devicePath.path());
        qDebug () << "Device: " << device.name() 
                  << " (" << devicePath.path() << ")";
        if (device.type() == UPowerDevice::Type::Battery) {
            qDebug () << "Time to empty: " << device.timeToEmpty();
            qDebug () << "Time to full: " << device.timeToFull();
            qDebug () << "Remaining battery percentage: " << device.percentage();
        } else if (device.type() == UPowerDevice::Type::LinePower) {
            
        }
        
    }

    return app.exec();
}
