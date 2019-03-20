/*
 * Copyright (C) 2019 Damir Porobic <https://github.com/damirporobic>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef KSNIP_TRANSLATIONLOADER_H
#define KSNIP_TRANSLATIONLOADER_H

#include <QApplication>
#include <QTranslator>

#include "BuildConfig.h"

class TranslationLoader
{
public:
    TranslationLoader();
    ~TranslationLoader() = default;
    void load(const QApplication &app) const;

private:
    QString mPathToTranslation;

    bool loadTranslation(QTranslator *translator, const QString &path) const;
    bool loadTranslationForAppImage(QTranslator *translator) const;
};

#endif //KSNIP_TRANSLATIONLOADER_H