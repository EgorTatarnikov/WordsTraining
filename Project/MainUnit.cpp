//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vcl.h>
#include "DescriptionUnit.h"
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

 String	a;
 String	x;
 String	y;
 String	MyFName="words.txt";
 int i;
 int RAND=1;
 int j=1;
 int Count=0;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
KeyPreview = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::OKClick(TObject *Sender)
{
try {
for (int q = 0; q < 2; q++) {


j=1;
if (x==y) {
Edit3->Clear();
Edit4->Text=" Right";
if (RAND==1) {
 i++;
}
else {
 i=rand()%Count;
}

if (i>Count-1) {
 i=0;
}
Edit1->Text=Count;
Edit3->Clear();
}
else {
Edit4->Clear();
Edit4->Text="Wrong";
	  }
Edit2->Clear();
Memo6->Lines->Clear();
Memo7->Lines->Clear();
Memo6->Lines->Add(Memo5->Lines->Strings[i]);
a=Memo6->Lines->Strings[0];

while (a[j]!=' ') {
	 Memo7->Lines->Text = Memo7->Lines->Text + a[j];
	 j++;
}

for (j; j < a.Length(); j++) {
	Edit2->Text = Edit2->Text + a[j+1];
	}
Edit5->Text=i+1;
Edit5->Text = Edit5->Text + "/";
Edit5->Text = Edit5->Text + Count;
x=Memo7->Lines->Strings[0];
y=Edit3->Text;

}

 if (Edit4->Text=="Wrong")
  {

			Memo1->Lines->LoadFromFile("wrong.txt");
  if (Memo1->Lines->Strings[Memo1->Lines->Count-1]!=Memo6->Lines->Strings[0]) {
	   Memo1->Lines->Add(Memo6->Lines->Strings[0]);
	   Memo2->Lines->Add(Memo1->Lines->Count-1);
			}
			Memo1->Lines->SaveToFile("wrong.txt");
			Memo3->Lines->LoadFromFile("wrong.txt");
			Memo1->Lines->Clear();
  }
}
catch (ERangeError &) {
}
}

//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
	if (Memo7->Lines->Strings[0]==Edit3->Text) {
        return;
	}
	else {
		OKClick(NULL);
		Edit3->Clear();
		Edit3->Text = Memo7->Lines->Strings[0];
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
	SystemParametersInfo(SPI_SETBEEP,FALSE,NULL,0);
j=1;
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
Memo5->Lines->Clear();
Memo6->Lines->Clear();
Memo7->Lines->Clear();

try
	{
		Memo5->Lines->LoadFromFile(MyFName, TEncoding::ANSI);
	}
catch (EFOpenError &e)
    {
		ShowMessage("Не удалось открыть файл: " + MyFName + "\n\n"
					"Выберите другой файл через меню 'File -> Select File' \n\n"
					"Подробнее читайте в разделе 'Description'");
		return;
	}

Count=Memo5->Lines->Count;

if (Count == 0) {
	ShowMessage("Файл " + MyFName + " пустой или не удалось загрузить слова!");
    Edit5->Text = "0 / 0";
	Edit2->Text = "[Не удалось загрузить слова]";
	return;
}

Memo6->Lines->Add(Memo5->Lines->Strings[i]);
a=Memo6->Lines->Strings[0];

while (a[j]!=' ') {
	 Memo7->Lines->Text = Memo7->Lines->Text + a[j];
	 j++;
}

for (j; j < a.Length(); j++) {
	Edit2->Text = Edit2->Text + a[j+1];
	}
Edit5->Text=1;
Edit5->Text = Edit5->Text + "/";
Edit5->Text = Edit5->Text + Count;
x=Memo7->Lines->Strings[0];

y=Edit3->Text;
}
//---------------------------------------------------------------------------




void __fastcall TForm3::Button5Click(TObject *Sender)
{
	SystemParametersInfo(SPI_SETBEEP,FALSE,NULL,0);
j=1;
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
Memo5->Lines->Clear();
Memo6->Lines->Clear();
Memo7->Lines->Clear();
Memo5->Lines->LoadFromFile("wrong.txt", TEncoding::ANSI);
Count=Memo5->Lines->Count;

if (Count == 0) {
	ShowMessage("Файл wrong.txt пустой или не удалось загрузить слова!");
	Edit5->Text = "0 / 0";
	Edit2->Text = "[Нет ошибок для тренировки]";
	return;
}

Memo6->Lines->Add(Memo5->Lines->Strings[i]);
a=Memo6->Lines->Strings[0];

while (a[j]!=' ') {
	 Memo7->Lines->Text = Memo7->Lines->Text + a[j];
	 j++;
}

for (j; j < a.Length(); j++) {
	Edit2->Text = Edit2->Text + a[j+1];
	}
Edit5->Text=1;
Edit5->Text = Edit5->Text + "/";
Edit5->Text = Edit5->Text + Count;
x=Memo7->Lines->Strings[0];

y=Edit3->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
RAND=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
RAND=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button6Click(TObject *Sender)
{

Memo1->Lines->Clear();
Memo1->Lines->SaveToFile("wrong.txt");
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
Memo5->Lines->Clear();
Memo6->Lines->Clear();
Memo7->Lines->Clear();
Edit5->Text = "0 / 0";
Edit2->Text = "[Нет ошибок для тренировки]";
}
//---------------------------------------------------------------------------




void __fastcall TForm3::SelectFile1Click(TObject *Sender)
{
 if (OpenDialog1->Execute())
{
MyFName = OpenDialog1->FileName;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Description1Click(TObject *Sender)
{

   Form1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{

    if (Key == VK_RETURN)
    {
		OKClick(NULL);
        Key = 0;
		return;
    }


	if (Key == VK_CONTROL)
    {
		Button1Click(NULL);
        Key = 0;
        return;
    }
}



