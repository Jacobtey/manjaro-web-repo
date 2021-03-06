/*
 *  manjaro-web-repo
 *  Roland Singer <roland@manjaro.org>
 *
 *  Copyright (C) 2007 Free Software Foundation, Inc.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef REPOSITORYSTATEPAGE_H
#define REPOSITORYSTATEPAGE_H

#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

#include <WString>
#include <WContainerWidget>
#include <WApplication>
#include <WStandardItemModel>
#include <WTableView>
#include <WStandardItemModel>
#include <WStandardItem>
#include <WPushButton>

#include "global.h"

using namespace Wt;
using namespace std;


class RepositoryStatePage : public WContainerWidget
{
public:
    RepositoryStatePage();

private:
    enum STATE {
        STATE_NORMAL,
        STATE_YELLOW,
        STATE_ORANGE,
        STATE_RED
    };

    WTableView *tableView;
    WStandardItemModel *model;
    Wt::WPushButton *buttonRefresh;

    void updateRepositoryStates();
    string minutesToString(long minutes);
    void buttonRefresh_clicked();
};

#endif // REPOSITORYSTATEPAGE_H
