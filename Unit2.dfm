object Form2: TForm2
  Left = 1472
  Top = 531
  Width = 521
  Height = 248
  AutoSize = True
  Caption = 'Form2'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 505
    Height = 209
    TabOrder = 0
    object Label1: TLabel
      Left = 0
      Top = 16
      Width = 505
      Height = 20
      Alignment = taCenter
      AutoSize = False
      Caption = 'Do kazdej pozycji dodajemy domyslnie 1 saszetke cukru'
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
      Caption = 'Dodatkowa saszetka p'#322'atna dodatkowo 20 groszy'
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
      Width = 129
      Height = 20
      Alignment = taCenter
      Caption = 'Saszetek cukru'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object SugarEditorPriceLabel: TLabel
      Left = 0
      Top = 120
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
      Top = 160
      Width = 89
      Height = 25
      Caption = 'Anuluj'
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
      Top = 160
      Width = 89
      Height = 25
      Caption = 'Zatwierdz'
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
