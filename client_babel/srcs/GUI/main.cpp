#include <QApplication>
#include <QMainWindow>
#include <QDesktopWidget>
#include <QGridLayout>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <signal.h>
#include  "form.h"
#include "Client.hh"
#include "QTGUI.hh"
#include "init.h"

void signal_handler(int signal)
{
  exit(0);
}


int main(int argc, char *argv[])
{
    IEventManager *app = new QTEventManager(argc, argv);
    Client client;

    signal(SIGSEGV, signal_handler);
    client.loop(*app);
    delete app;
    return (0);
}
