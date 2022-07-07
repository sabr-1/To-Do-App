//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TToDoApp : public TForm
{
__published:	// IDE-managed Components
	TLabel *Heading1;
	TEdit *Task;
	TButton *AddButton;
	TListBox *ToDoList;
	TLabel *Credits;
	TLabel *Instructions;
	TLabel *Instructions1;
	TLabel *Instruction2;
	TLabel *Instruction3;
	TLabel *Instruction3a;
	TLabel *Instruction2a;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall ToDoListItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);

	void __fastcall TaskKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);

private:	// User declarations
public:		// User declarations
	__fastcall TToDoApp(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TToDoApp *ToDoApp;
//---------------------------------------------------------------------------
#endif
