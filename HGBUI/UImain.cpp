// For compilers that don't support precompilation, include "wx/wx.h"
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#	include "wx/wx.h"
#endif


#ifndef INCLUDED_HELLOWORLDAPP_H
#define INCLUDED_HELLOWORLDAPP_H

// The HelloWorldApp class. This class shows a window
// containing a statusbar with the text "Hello World"
class HotelGuestBookingApp : public wxApp
{
public:
	virtual bool OnInit();
};

DECLARE_APP(HotelGuestBookingApp)

#endif // INCLUDED_HELLOWORLDAPP_H

IMPLEMENT_APP(HotelGuestBookingApp)

// This is executed upon startup, like 'main()' in non-wxWidgets programs.
bool HotelGuestBookingApp::OnInit()
{
	wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hotel Guest Booking"));
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}
