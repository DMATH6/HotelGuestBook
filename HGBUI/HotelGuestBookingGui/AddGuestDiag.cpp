#include "AddGuestDiag.h"

//(*InternalHeaders(AddGuestDiag)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AddGuestDiag)
const long AddGuestDiag::ID_TEXTCTRL1 = wxNewId();
const long AddGuestDiag::ID_TEXTCTRL2 = wxNewId();
const long AddGuestDiag::ID_TEXTCTRL3 = wxNewId();
const long AddGuestDiag::ID_BUTTON2 = wxNewId();
const long AddGuestDiag::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AddGuestDiag,wxDialog)
	//(*EventTable(AddGuestDiag)
	//*)
END_EVENT_TABLE()

AddGuestDiag::AddGuestDiag(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AddGuestDiag)
	wxGridSizer* GridSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(309,176));
	GridSizer1 = new wxGridSizer(5, 0, 0, 0);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Enter firstname"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Enter last name"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	GridSizer1->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("Enter phone number"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	GridSizer1->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON2, _("Add Guest"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button1->Hide();
	GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BackToMainMenuButton = new wxButton(this, ID_BUTTON1, _("Back"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridSizer1->Add(BackToMainMenuButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	SetSizer(GridSizer1);
	Layout();
	//*)
}

AddGuestDiag::~AddGuestDiag()
{
	//(*Destroy(AddGuestDiag)
	//*)
}


void AddGuestDiag::OnRadioBox1Select(wxCommandEvent& event)
{

}
