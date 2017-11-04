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
  void onBt3 (wxCommandEvent&);
  void onBt4 (wxCommandEvent&);
  void onBt5 (wxCommandEvent&);
  void onBt6 (wxCommandEvent&);
  void onBt7 (wxCommandEvent&);
  void onBt8 (wxCommandEvent&);
  void onBt9 (wxCommandEvent&);
  void onBt0 (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);

private:
  int valor1;
  int valor2;
  string operacion;
  int nClicks;
  	
  DECLARE_EVENT_TABLE()
};
