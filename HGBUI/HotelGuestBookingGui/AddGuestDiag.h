#ifndef ADDGUESTDIAG_H
#define ADDGUESTDIAG_H

//(*Headers(AddGuestDiag)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
//*)

class AddGuestDiag: public wxDialog
{
	public:

		AddGuestDiag(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AddGuestDiag();

		//(*Declarations(AddGuestDiag)
		wxButton* BackToMainMenuButton;
		wxButton* Button1;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		//*)

	protected:

		//(*Identifiers(AddGuestDiag)
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(AddGuestDiag)
		void OnRadioBox1Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
