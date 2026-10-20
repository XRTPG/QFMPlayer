#include "head.h"
#include "frame.h"


int WINAPI WinMain(HINSTANCE l, HINSTANCE s, LPSTR a, int n) {
    int argc = 1;
    char* argv[] = { (char*)"myapp" };
    QApplication app(argc, argv);
    QQuickWidget* quickWidget = new QQuickWidget;

    QWidget window;
    window.setWindowTitle("QFMPlayer");
    QSize screen = app.primaryScreen()->size();
    window.resize(screen.width() / 2.2, screen.height() / 1.3);

    // File
    QAction* ac1 = new QAction("Open File", &window);
    QAction* ac2 = new QAction("Open Directory", &window);

    // Edit
    QAction* ac3 = new QAction("resample", &window);
    QAction* ac4 = new QAction("add plugins", &window);


    QList<QAction*> list;
    list.append(ac1);
    list.append(ac2);
    list.append(ac3);
    list.append(ac4);
    place_1(&window, list);
    window.show();
    return app.exec();
}