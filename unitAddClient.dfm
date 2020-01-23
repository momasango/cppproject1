object formAddInformation: TformAddInformation
  Left = 0
  Top = 0
  AutoSize = True
  Caption = 'formAddInformation'
  ClientHeight = 347
  ClientWidth = 325
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Padding.Left = 20
  Padding.Top = 20
  Padding.Right = 20
  Padding.Bottom = 20
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 20
    Top = 20
    Width = 88
    Height = 13
    Caption = 'Client'#39's Full Names'
  end
  object Label2: TLabel
    Left = 20
    Top = 116
    Width = 64
    Height = 13
    Caption = 'Case Number'
  end
  object Label3: TLabel
    Left = 20
    Top = 212
    Width = 91
    Height = 13
    Caption = 'Client Date of Birth'
  end
  object Label4: TLabel
    Left = 184
    Top = 20
    Width = 79
    Height = 13
    Caption = 'Client'#39's Surname'
  end
  object Label5: TLabel
    Left = 184
    Top = 116
    Width = 100
    Height = 13
    Caption = 'Client Phone Number'
  end
  object Label6: TLabel
    Left = 184
    Top = 212
    Width = 81
    Height = 13
    Caption = 'Client ID Number'
  end
  object edtCName: TEdit
    Left = 20
    Top = 52
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object edtCaseNum: TEdit
    Left = 20
    Top = 148
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object edtCSurname: TEdit
    Left = 184
    Top = 52
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object edtPhNum: TEdit
    Left = 184
    Top = 148
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object cIDNum: TEdit
    Left = 184
    Top = 244
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object DateTimePicker1: TDateTimePicker
    Left = 20
    Top = 244
    Width = 121
    Height = 21
    Date = 43849.000000000000000000
    Time = 0.703789629631501200
    TabOrder = 5
  end
  object btnAdd: TButton
    Left = 230
    Top = 302
    Width = 75
    Height = 25
    Caption = 'Add'
    TabOrder = 6
    OnClick = btnAddClick
  end
end
