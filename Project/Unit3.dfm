object Form3: TForm3
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Words Training'
  ClientHeight = 378
  ClientWidth = 617
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 120
  TextHeight = 16
  object Label2: TLabel
    Left = 255
    Top = 314
    Width = 112
    Height = 24
    Caption = 'Right/Wrong'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 968
    Top = 33
    Width = 63
    Height = 16
    Caption = #1074#1089#1077' '#1089#1090#1088#1086#1082#1080
  end
  object Label4: TLabel
    Left = 911
    Top = 127
    Width = 125
    Height = 16
    Caption = #1080#1089#1087#1086#1083#1100#1079#1091#1077#1084#1072#1103' '#1089#1090#1088#1086#1082#1072
  end
  object Label5: TLabel
    Left = 911
    Top = 231
    Width = 109
    Height = 16
    Caption = #1087#1088#1072#1074#1080#1083#1100#1085#1099#1081' '#1086#1090#1074#1077#1090
  end
  object Label6: TLabel
    Left = 58
    Top = 157
    Width = 32
    Height = 24
    Caption = 'Rus'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 58
    Top = 224
    Width = 33
    Height = 24
    Caption = 'Eng'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OK: TButton
    Left = 504
    Top = 222
    Width = 57
    Height = 33
    Caption = 'OK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = OKClick
  end
  object Button1: TButton
    Left = 512
    Top = 155
    Width = 41
    Height = 32
    Caption = '?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 328
    Top = 96
    Width = 82
    Height = 41
    Caption = 'Random'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 210
    Top = 96
    Width = 82
    Height = 41
    Caption = 'Order'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button3Click
  end
  object Memo5: TMemo
    Left = 1056
    Top = 13
    Width = 553
    Height = 89
    Lines.Strings = (
      'Memo5')
    TabOrder = 4
  end
  object Memo6: TMemo
    Left = 1056
    Top = 108
    Width = 553
    Height = 89
    Lines.Strings = (
      'Memo6')
    TabOrder = 5
  end
  object Memo7: TMemo
    Left = 1056
    Top = 203
    Width = 553
    Height = 89
    Lines.Strings = (
      'Memo7')
    TabOrder = 6
  end
  object Button4: TButton
    Left = 144
    Top = 35
    Width = 148
    Height = 41
    Caption = 'Start'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button4Click
  end
  object Edit2: TEdit
    Left = 120
    Top = 155
    Width = 378
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object Edit3: TEdit
    Left = 120
    Top = 222
    Width = 378
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnKeyDown = Edit3KeyDown
  end
  object Edit4: TEdit
    Left = 279
    Top = 276
    Width = 66
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
  end
  object Memo1: TMemo
    Left = 1056
    Top = 298
    Width = 553
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 11
  end
  object Button5: TButton
    Left = 328
    Top = 35
    Width = 107
    Height = 41
    Caption = 'Mistakes'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    OnClick = Button5Click
  end
  object Memo2: TMemo
    Left = 1056
    Top = 402
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo2')
    TabOrder = 13
  end
  object Memo3: TMemo
    Left = 1280
    Top = 402
    Width = 557
    Height = 89
    Lines.Strings = (
      'Memo3')
    TabOrder = 14
  end
  object Edit1: TEdit
    Left = 929
    Top = 336
    Width = 121
    Height = 24
    TabOrder = 15
    Text = 'Edit1'
  end
  object Button6: TButton
    Left = 435
    Top = 35
    Width = 38
    Height = 41
    Caption = 'C'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
    OnClick = Button6Click
  end
  object Edit5: TEdit
    Left = 120
    Top = 276
    Width = 57
    Height = 32
    BiDiMode = bdLeftToRight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 0
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBiDiMode = False
    ParentFont = False
    TabOrder = 17
  end
  object OpenDialog1: TOpenDialog
    Left = 512
    Top = 312
  end
  object MainMenu1: TMainMenu
    Left = 560
    Top = 312
    object File1: TMenuItem
      Caption = 'File'
      object SelectFile1: TMenuItem
        Caption = 'Select File'
        OnClick = SelectFile1Click
      end
    end
    object Description1: TMenuItem
      Caption = 'Description'
      OnClick = Description1Click
    end
  end
end
