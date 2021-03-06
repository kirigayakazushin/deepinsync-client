#ifndef WALLPAPER_H
#define WALLPAPER_H

#include "Client.h"

#include <QObject>
#include <com_deepin_daemon_appearance.h>

using com::deepin::daemon::Appearance;

class Wallpaper : public QObject
{
    Q_OBJECT
public:
    explicit Wallpaper(Client *client, QObject *parent = 0);
    void bindingService();

private:
    Client *m_client;
    Appearance *m_wallpaperDBus;
    QString m_wallpaperName;
};

#endif // WALLPAPER_H
