#include <QApplication>
#include "click.h"
#include "keypress.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

//    Click window;
    KeyPress window;

    window.resize(250,150);
    window.setWindowTitle("machukhinktato application");
    window.show();

    return QApplication::exec();
}
