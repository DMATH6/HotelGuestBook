/***************************************************************
 * Name:      wxWidgetMain.h
 * Purpose:   Defines Application Frame
 * Author:    Dylan Matheson (dmathsdev@gmail.com)
 * Created:   2023-11-09
 * Copyright: Dylan Matheson ()
 * License:
 **************************************************************/

#ifndef WXWIDGETMAIN_H
#define WXWIDGETMAIN_H



#include "wxWidgetApp.h"


#include "GUIFrame.h"

class wxWidgetFrame: public GUIFrame
{
    public:
        wxWidgetFrame(wxFrame *frame);
        ~wxWidgetFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // WXWIDGETMAIN_H
