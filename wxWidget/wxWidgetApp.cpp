/***************************************************************
 * Name:      wxWidgetApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Dylan Matheson (dmathsdev@gmail.com)
 * Created:   2023-11-09
 * Copyright: Dylan Matheson ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxWidgetApp.h"
#include "wxWidgetMain.h"

IMPLEMENT_APP(wxWidgetApp);

bool wxWidgetApp::OnInit()
{
    wxWidgetFrame* frame = new wxWidgetFrame(0L);
    
    frame->Show();
    
    return true;
}
