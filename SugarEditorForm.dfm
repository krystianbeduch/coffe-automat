object SugarEditor: TSugarEditor
  Left = 942
  Top = 416
  Width = 521
  Height = 269
  AutoSize = True
  Caption = 'Sugar Editor'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 505
    Height = 230
    TabOrder = 0
    object Label1: TLabel
      Left = 0
      Top = 16
      Width = 505
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'By default we add 1 sachet of sugar to each drink'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 0
      Top = 48
      Width = 505
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'An additional sachet costs an addtional  0.2 PLN'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 48
      Top = 80
      Width = 121
      Height = 20
      Alignment = taCenter
      Caption = 'Sugar sachets'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object SugarEditorPriceLabel: TLabel
      Left = 0
      Top = 152
      Width = 505
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 0
      Top = 120
      Width = 505
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'Current order price'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object SugarSachetsEdit: TComboBox
      Left = 184
      Top = 80
      Width = 137
      Height = 28
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 20
      ItemIndex = 1
      ParentFont = False
      TabOrder = 0
      Text = '1'
      OnChange = SugarSachetsEditChange
      Items.Strings = (
        '0'
        '1'
        '2'
        '3'
        '4'
        '5')
    end
    object SugarEditorCancel: TBitBtn
      Left = 272
      Top = 185
      Width = 89
      Height = 25
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      Kind = bkCancel
    end
    object SugarEditorOK: TBitBtn
      Left = 160
      Top = 185
      Width = 89
      Height = 25
      Caption = 'Confirm'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      Kind = bkOK
    end
  end
end
