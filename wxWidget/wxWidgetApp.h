/***************************************************************
 * Name:      wxWidgetApp.h
 * Purpose:   Defines Application Class
 * Author:    Dylan Matheson (dmathsdev@gmail.com)
 * Created:   2023-11-09
 * Copyright: Dylan Matheson ()
 * License:
 **************************************************************/

#ifndef WXWIDGETAPP_H
#define WXWIDGETAPP_H

#include <wx/app.h>

class wxWidgetApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // WXWIDGETAPP_H
