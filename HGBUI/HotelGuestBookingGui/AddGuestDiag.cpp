#include "AddGuestDiag.h"
#include "HotelGuestBookingGui/HotelGuestBookingGuiMain.h"



//#include "Functions.h"

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
	GridSizer1 = new wxGridSizer(5, 0, 0, 0);
	FirstNameTextC = new wxTextCtrl(this, ID_TEXTCTRL1, _("Enter firstname"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer1->Add(FirstNameTextC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	LastNameTextC = new wxTextCtrl(this, ID_TEXTCTRL2, _("Enter last name"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	GridSizer1->Add(LastNameTextC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	PhoneNumTextCntrl = new wxTextCtrl(this, ID_TEXTCTRL3, _("Enter phone number"), wxDefaultPosition, wxSize(200,50), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	GridSizer1->Add(PhoneNumTextCntrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	OkAddButton = new wxButton(this, ID_BUTTON2, _("Add Guest"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridSizer1->Add(OkAddButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BackToMainMenuButton = new wxButton(this, ID_BUTTON1, _("Back"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridSizer1->Add(BackToMainMenuButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AddGuestDiag::OnOkAddButtonClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AddGuestDiag::OnBackToMainMenuButtonClick);
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

void AddGuestDiag::OnBackToMainMenuButtonClick(wxCommandEvent& event)
{

this->Close(true);

}

void AddGuestDiag::OnOkAddButtonClick(wxCommandEvent& event)
{
    std::string firstNameStr = FirstNameTextC->GetValue().ToStdString();
    std::string lastNameStr = LastNameTextC->GetValue().ToStdString();
    std::string phoneNumStr = PhoneNumTextCntrl->GetValue().ToStdString();

    //FirstNameTextC::GetValue();//ReadWriteGuestDataFile(true);
}

