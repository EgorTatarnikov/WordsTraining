//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LB7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	float u;
	float r;
	float i;


	u=StrToFloat (Edit1->Text);
	r=StrToFloat (Edit2->Text);
	i=u/r;

	Label4->Caption= "Ток : " +
						FloatToStrF(i,ffGeneral,7,2) + " A"  ;
}
//---------------------------------------------------------------------------

