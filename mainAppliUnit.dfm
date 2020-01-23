object mainForm: TmainForm
  Left = 0
  Top = 0
  AutoSize = True
  Caption = 'mainForm'
  ClientHeight = 353
  ClientWidth = 601
  Color = clBtnFace
  DefaultMonitor = dmDesktop
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ScreenSnap = True
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 601
    Height = 353
    ActivePage = tbsheetManageInfo
    TabOrder = 0
    object tbsheetManageInfo: TTabSheet
      Caption = 'Manage Information'
      OnShow = tbsheetManageInfoShow
      object DBGrid1: TDBGrid
        Left = 16
        Top = 16
        Width = 553
        Height = 241
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
      end
      object btnAddClient: TButton
        Left = 259
        Top = 280
        Width = 75
        Height = 25
        Caption = 'Add Client'
        TabOrder = 1
        OnClick = btnAddClientClick
      end
      object Button2: TButton
        Left = 97
        Top = 280
        Width = 75
        Height = 25
        Caption = 'Button2'
        TabOrder = 2
      end
      object btnUpdate: TButton
        Left = 178
        Top = 280
        Width = 75
        Height = 25
        Caption = 'Update'
        TabOrder = 3
        OnClick = btnUpdateClick
      end
      object btnSearch: TButton
        Left = 16
        Top = 280
        Width = 75
        Height = 25
        Caption = 'Search'
        TabOrder = 4
        OnClick = btnSearchClick
      end
      object btnBack: TButton
        Left = 496
        Top = 280
        Width = 25
        Height = 25
        Caption = '<'
        TabOrder = 5
        OnClick = btnBackClick
      end
      object btnForward: TButton
        Left = 527
        Top = 280
        Width = 26
        Height = 25
        Caption = '>'
        TabOrder = 6
        OnClick = btnForwardClick
      end
    end
    object tbshtManageAppt: TTabSheet
      Caption = 'Appointments'
      ImageIndex = 1
      object memoAppointment: TMemo
        Left = 16
        Top = 24
        Width = 241
        Height = 225
        Lines.Strings = (
          'Memo1')
        TabOrder = 0
      end
      object btnSchedule: TButton
        Left = 16
        Top = 272
        Width = 137
        Height = 25
        Caption = 'Schedule an Appointment'
        TabOrder = 1
      end
      object btnManage: TButton
        Left = 176
        Top = 272
        Width = 129
        Height = 25
        Caption = 'Manage Appointments'
        TabOrder = 2
      end
    end
    object tbshtPayment: TTabSheet
      Caption = 'Billing Information'
      ImageIndex = 2
    end
  end
end
