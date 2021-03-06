#include "gridsizer.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1009, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1008, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1999, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1998, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1997, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1996, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1995, wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
  display -> Clear();
}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("1");
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("2");
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("3");
	
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("4");
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("5");
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText("6");
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("7");
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("8");
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("9");
}
void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
	display -> AppendText ("0");
}

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	
	string texto= (string)display -> GetValue();
	valor1= atoi(texto.c_str()); 
  display -> Clear();
  
  operacion= "+"; 
  
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUSED (event)) {
	
	string texto= (string)display -> GetValue();
	valor1= atoi(texto.c_str()); 
  display -> Clear();
  
  operacion= "-"; 
}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)) {
	
	string texto= (string)display -> GetValue();
	valor1= atoi(texto.c_str()); 
  display -> Clear();
  
  operacion= "*"; 
}
void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)) {
	
	string texto= (string)display -> GetValue();
	valor1= atoi(texto.c_str()); 
  display -> Clear();
  
  operacion= "/"; 
}

void GridSizer::onBtEqu (wxCommandEvent& WXUNUSED (event)){
  int total;
  if(operacion == "+"){
    string texto2=(string)display -> GetValue();
	  valor2= atoi(texto2.c_str());
	  total= valor1 + valor2;
    cout << total<< endl;
    
    
    char buff[10];
    sprintf(buff,"%d",total);
    string s(buff);
    }
   
   if(operacion == "-"){
    string texto2=(string)display -> GetValue();
	  valor2= atoi(texto2.c_str());
	  total= valor1 - valor2;
    cout << total<< endl;
    
    char buff[10];
    sprintf(buff,"%d",total);
    string s(buff);
    }
   if(operacion == "*"){
    string texto2=(string)display -> GetValue();
	  valor2= atoi(texto2.c_str());
	  total= valor1 * valor2;
    cout << total<< endl;
    
    char buff[10];
    sprintf(buff,"%d",total);
    string s(buff);
    }
   if(operacion == "/"){
    string texto2=(string)display -> GetValue();
	  valor2= atoi(texto2.c_str());
	  total= valor1 / valor2;
    cout << total<< endl;
    
    char buff[10];
    sprintf(buff,"%d",total);
    string s(buff);
    }
  
} 


BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1002,  GridSizer::onBt1)
    EVT_BUTTON(1001,  GridSizer::onBt2)
    EVT_BUTTON(1000,  GridSizer::onBt3)
    EVT_BUTTON(1006,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1004,  GridSizer::onBt6)
    EVT_BUTTON(1010,  GridSizer::onBt7)
    EVT_BUTTON(1009,  GridSizer::onBt8)
    EVT_BUTTON(1008,  GridSizer::onBt9)
    EVT_BUTTON(1998,  GridSizer::onBt0)
   
    EVT_BUTTON(1995,  GridSizer::onBtSum)
    EVT_BUTTON(1999, GridSizer::onBtRes)
    EVT_BUTTON(1003, GridSizer::onBtMul)
    EVT_BUTTON(1996, GridSizer::onBtEqu)
    EVT_BUTTON(1007, GridSizer::onBtDiv)
END_EVENT_TABLE()
