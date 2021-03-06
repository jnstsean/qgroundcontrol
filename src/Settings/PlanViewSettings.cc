/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "PlanViewSettings.h"

#include <QQmlEngine>
#include <QtQml>

const char* PlanViewSettings::name =            "PlanView";
const char* PlanViewSettings::settingsGroup =   "PlanView";

PlanViewSettings::PlanViewSettings(QObject* parent)
    : SettingsGroup(name, settingsGroup, parent)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
    qmlRegisterUncreatableType<PlanViewSettings>("QGroundControl.SettingsManager", 1, 0, "PlanViewSettings", "Reference only");
}
