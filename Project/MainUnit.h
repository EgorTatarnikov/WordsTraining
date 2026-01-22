//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *OK;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label2;
	TMemo *Memo5;
	TMemo *Memo6;
	TLabel *Label3;
	TLabel *Label4;
	TMemo *Memo7;
	TLabel *Label5;
	TButton *Button4;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TLabel *Label6;
	TLabel *Label7;
	TMemo *Memo1;
	TButton *Button5;
	TMemo *Memo2;
	TMemo *Memo3;
	TEdit *Edit1;
	TButton *Button6;
	TEdit *Edit5;
	TOpenDialog *OpenDialog1;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *SelectFile1;
	TMenuItem *Description1;
	void __fastcall OKClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	//void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall SelectFile1Click(TObject *Sender);
	void __fastcall Description1Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
