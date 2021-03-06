/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2015 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                              SOFA :: Framework                              *
*                                                                             *
* Authors: damien.marchal@univ-lille1.fr Copyright (C) CNRS                   *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include "FileMonitor.h"

namespace sofa
{

namespace helper
{

namespace system
{

void FileMonitor::removeFileListener(const string& filename,
                                     FileEventListener *listener)
{
}


void FileMonitor::removeListener(FileEventListener *listener)
{
}

int FileMonitor::addFile(const std::string& filepath, FileEventListener* listener)
{
    return 0 ;
}

int FileMonitor::addFile(const std::string& parentname,
                         const std::string& filename,
                         FileEventListener* listener)
{
    return 0 ;
}

int FileMonitor::updates(int timeout)
{
    return 0 ;
}

}
}
}
