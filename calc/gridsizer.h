#include <wx/wx.h>
#include <iostream>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);

  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;
  
  void onCls (wxCommandEvent&);
  void onBt1 (wxCommandEvent&);
  void onBt2 (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);

private:
  int valor1;
  int valor2;
  string operacion;
  int nClicks;
  	
  DECLARE_EVENT_TABLE()
};
