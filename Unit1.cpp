//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TToDoApp *ToDoApp;
//---------------------------------------------------------------------------
__fastcall TToDoApp::TToDoApp(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------
void __fastcall TToDoApp::AddButtonClick(TObject *Sender)
{
	String task=Task->Text;
	if(task==""){
		return;
	}
	ToDoList->Items->Add(task);
	Task->Text="";
	return;
}
//---------------------------------------------------------------------------
void __fastcall TToDoApp::ToDoListItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index=Item->Index;
	ToDoList->Items->Delete(index);
    return;
}
//---------------------------------------------------------------------------

void __fastcall TToDoApp::TaskKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
					  if(Key==VK_RETURN ){
					 String task=Task->Text;
	if(task==""){
		return;
	}
					  ToDoList->Items->Add(task);
	Task->Text="";
	return;

					  }
}
//---------------------------------------------------------------------------
