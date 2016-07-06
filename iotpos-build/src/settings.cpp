// This file is generated by kconfig_compiler from iotpos.kcfg.
// All changes you do to this file will be lost.

#include "settings.h"

#include <kglobal.h>
#include <QtCore/QFile>

class SettingsHelper
{
  public:
    SettingsHelper() : q(0) {}
    ~SettingsHelper() { delete q; }
    Settings *q;
};
K_GLOBAL_STATIC(SettingsHelper, s_globalSettings)
Settings *Settings::self()
{
  if (!s_globalSettings->q) {
    new Settings;
    s_globalSettings->q->readConfig();
  }

  return s_globalSettings->q;
}

Settings::Settings(  )
  : KConfigSkeleton( QLatin1String( "iotposrc" ) )
{
  Q_ASSERT(!s_globalSettings->q);
  s_globalSettings->q = this;
  setCurrentGroup( QLatin1String( "iotpos" ) );

  QList<int> defaultSplitterSizes;

  KConfigSkeleton::ItemIntList  *itemSplitterSizes;
  itemSplitterSizes = new KConfigSkeleton::ItemIntList( currentGroup(), QLatin1String( "SplitterSizes" ), mSplitterSizes, defaultSplitterSizes );
  addItem( itemSplitterSizes, QLatin1String( "SplitterSizes" ) );
  QList<int> defaultGridSplitterSizes;

  KConfigSkeleton::ItemIntList  *itemGridSplitterSizes;
  itemGridSplitterSizes = new KConfigSkeleton::ItemIntList( currentGroup(), QLatin1String( "GridSplitterSizes" ), mGridSplitterSizes, defaultGridSplitterSizes );
  addItem( itemGridSplitterSizes, QLatin1String( "GridSplitterSizes" ) );

  setCurrentGroup( QLatin1String( "Store Preferences" ) );

  KConfigSkeleton::ItemString  *itemEditStoreName;
  itemEditStoreName = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editStoreName" ), mEditStoreName, QLatin1String( "My Store" ) );
  addItem( itemEditStoreName, QLatin1String( "editStoreName" ) );
  KConfigSkeleton::ItemString  *itemStorePhone;
  itemStorePhone = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storePhone" ), mStorePhone );
  addItem( itemStorePhone, QLatin1String( "storePhone" ) );
  KConfigSkeleton::ItemString  *itemStoreAddress;
  itemStoreAddress = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storeAddress" ), mStoreAddress );
  addItem( itemStoreAddress, QLatin1String( "storeAddress" ) );
  KConfigSkeleton::ItemString  *itemEditTicketMessage;
  itemEditTicketMessage = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editTicketMessage" ), mEditTicketMessage, QLatin1String( "Thanks for your preference!" ) );
  addItem( itemEditTicketMessage, QLatin1String( "editTicketMessage" ) );
  KConfigSkeleton::ItemString  *itemStoreLogo;
  itemStoreLogo = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storeLogo" ), mStoreLogo );
  addItem( itemStoreLogo, QLatin1String( "storeLogo" ) );
  KConfigSkeleton::ItemBool  *itemChLogoOnTop;
  itemChLogoOnTop = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "chLogoOnTop" ), mChLogoOnTop, false );
  addItem( itemChLogoOnTop, QLatin1String( "chLogoOnTop" ) );

  setCurrentGroup( QLatin1String( "General Preferences" ) );

  KConfigSkeleton::ItemBool  *itemGroupUserIdAsCode;
  itemGroupUserIdAsCode = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "groupUserIdAsCode" ), mGroupUserIdAsCode, 0 );
  addItem( itemGroupUserIdAsCode, QLatin1String( "groupUserIdAsCode" ) );
  KConfigSkeleton::ItemBool  *itemRb6Digits;
  itemRb6Digits = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "rb6Digits" ), mRb6Digits, 0 );
  addItem( itemRb6Digits, QLatin1String( "rb6Digits" ) );
  KConfigSkeleton::ItemBool  *itemRb12DigitsCustom;
  itemRb12DigitsCustom = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "rb12DigitsCustom" ), mRb12DigitsCustom, 0 );
  addItem( itemRb12DigitsCustom, QLatin1String( "rb12DigitsCustom" ) );
  KConfigSkeleton::ItemInt  *itemEditTerminalNumber;
  itemEditTerminalNumber = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "editTerminalNumber" ), mEditTerminalNumber, 1 );
  addItem( itemEditTerminalNumber, QLatin1String( "editTerminalNumber" ) );
  KConfigSkeleton::ItemBool  *itemRequiereDelAuth;
  itemRequiereDelAuth = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "requiereDelAuth" ), mRequiereDelAuth, false );
  addItem( itemRequiereDelAuth, QLatin1String( "requiereDelAuth" ) );
  KConfigSkeleton::ItemBool  *itemLowSecurityMode;
  itemLowSecurityMode = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "lowSecurityMode" ), mLowSecurityMode, true );
  addItem( itemLowSecurityMode, QLatin1String( "lowSecurityMode" ) );
  KConfigSkeleton::ItemBool  *itemShowCurrencyOnTotal;
  itemShowCurrencyOnTotal = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "showCurrencyOnTotal" ), mShowCurrencyOnTotal, true );
  addItem( itemShowCurrencyOnTotal, QLatin1String( "showCurrencyOnTotal" ) );
  KConfigSkeleton::ItemString  *itemEditCurrencyFull;
  itemEditCurrencyFull = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editCurrencyFull" ), mEditCurrencyFull, QLatin1String( "Pesos Mexicanos" ) );
  addItem( itemEditCurrencyFull, QLatin1String( "editCurrencyFull" ) );
  KConfigSkeleton::ItemString  *itemEditCurrencyShort;
  itemEditCurrencyShort = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editCurrencyShort" ), mEditCurrencyShort, QLatin1String( "MXP" ) );
  addItem( itemEditCurrencyShort, QLatin1String( "editCurrencyShort" ) );
  KConfigSkeleton::ItemBool  *itemShowGrid;
  itemShowGrid = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "showGrid" ), mShowGrid, true );
  addItem( itemShowGrid, QLatin1String( "showGrid" ) );
  KConfigSkeleton::ItemInt  *itemStockAlertValue;
  itemStockAlertValue = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "stockAlertValue" ), mStockAlertValue, 5 );
  addItem( itemStockAlertValue, QLatin1String( "stockAlertValue" ) );
  KConfigSkeleton::ItemDouble  *itemCashMinLevel;
  itemCashMinLevel = new KConfigSkeleton::ItemDouble( currentGroup(), QLatin1String( "cashMinLevel" ), mCashMinLevel, 100 );
  addItem( itemCashMinLevel, QLatin1String( "cashMinLevel" ) );
  KConfigSkeleton::ItemBool  *itemDisplayWarningOnLowCash;
  itemDisplayWarningOnLowCash = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "displayWarningOnLowCash" ), mDisplayWarningOnLowCash, true );
  addItem( itemDisplayWarningOnLowCash, QLatin1String( "displayWarningOnLowCash" ) );
  KConfigSkeleton::ItemBool  *itemFirstDiscountOnly;
  itemFirstDiscountOnly = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "firstDiscountOnly" ), mFirstDiscountOnly, true );
  addItem( itemFirstDiscountOnly, QLatin1String( "firstDiscountOnly" ) );
  KConfigSkeleton::ItemBool  *itemAddTax;
  itemAddTax = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "addTax" ), mAddTax, true );
  addItem( itemAddTax, QLatin1String( "addTax" ) );
  KConfigSkeleton::ItemBool  *itemRoundToUSStandard;
  itemRoundToUSStandard = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "roundToUSStandard" ), mRoundToUSStandard, 0 );
  addItem( itemRoundToUSStandard, QLatin1String( "roundToUSStandard" ) );
  KConfigSkeleton::ItemBool  *itemAskForInvoice;
  itemAskForInvoice = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "askForInvoice" ), mAskForInvoice, 0 );
  addItem( itemAskForInvoice, QLatin1String( "askForInvoice" ) );
  KConfigSkeleton::ItemBool  *itemAllowNegativeStock;
  itemAllowNegativeStock = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "allowNegativeStock" ), mAllowNegativeStock, 1 );
  addItem( itemAllowNegativeStock, QLatin1String( "allowNegativeStock" ) );

  setCurrentGroup( QLatin1String( "Database" ) );

  KConfigSkeleton::ItemString  *itemEditDBServer;
  itemEditDBServer = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBServer" ), mEditDBServer, QLatin1String( "localhost" ) );
  addItem( itemEditDBServer, QLatin1String( "editDBServer" ) );
  KConfigSkeleton::ItemString  *itemEditDBUsername;
  itemEditDBUsername = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBUsername" ), mEditDBUsername, QLatin1String( "iotposclient" ) );
  addItem( itemEditDBUsername, QLatin1String( "editDBUsername" ) );
  KConfigSkeleton::ItemString  *itemEditDBPassword;
  itemEditDBPassword = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBPassword" ), mEditDBPassword, QLatin1String( "xarwit0721" ) );
  addItem( itemEditDBPassword, QLatin1String( "editDBPassword" ) );
  KConfigSkeleton::ItemString  *itemEditDBName;
  itemEditDBName = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBName" ), mEditDBName, QLatin1String( "iotposdb" ) );
  addItem( itemEditDBName, QLatin1String( "editDBName" ) );
  KConfigSkeleton::ItemBool  *itemDeleteEmptyCancelledTransactions;
  itemDeleteEmptyCancelledTransactions = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "deleteEmptyCancelledTransactions" ), mDeleteEmptyCancelledTransactions, true );
  addItem( itemDeleteEmptyCancelledTransactions, QLatin1String( "deleteEmptyCancelledTransactions" ) );

  setCurrentGroup( QLatin1String( "Styles" ) );

  KConfigSkeleton::ItemBool  *itemUseStyle;
  itemUseStyle = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "useStyle" ), mUseStyle, true );
  addItem( itemUseStyle, QLatin1String( "useStyle" ) );
  KConfigSkeleton::ItemString  *itemStyleName;
  itemStyleName = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "styleName" ), mStyleName, QLatin1String( "1" ) );
  addItem( itemStyleName, QLatin1String( "styleName" ) );

  setCurrentGroup( QLatin1String( "security" ) );

  KConfigSkeleton::ItemBool  *itemAllowAnyUserToQuit;
  itemAllowAnyUserToQuit = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "allowAnyUserToQuit" ), mAllowAnyUserToQuit, false );
  addItem( itemAllowAnyUserToQuit, QLatin1String( "allowAnyUserToQuit" ) );

  setCurrentGroup( QLatin1String( "printer" ) );

  KConfigSkeleton::ItemBool  *itemShowDialogOnPrinting;
  itemShowDialogOnPrinting = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "showDialogOnPrinting" ), mShowDialogOnPrinting, true );
  addItem( itemShowDialogOnPrinting, QLatin1String( "showDialogOnPrinting" ) );
  KConfigSkeleton::ItemInt  *itemTicketTime;
  itemTicketTime = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ticketTime" ), mTicketTime, 3 );
  addItem( itemTicketTime, QLatin1String( "ticketTime" ) );
  KConfigSkeleton::ItemBool  *itemOpenDrawer;
  itemOpenDrawer = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "openDrawer" ), mOpenDrawer, true );
  addItem( itemOpenDrawer, QLatin1String( "openDrawer" ) );
  KConfigSkeleton::ItemBool  *itemSmallTicketDotMatrix;
  itemSmallTicketDotMatrix = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "smallTicketDotMatrix" ), mSmallTicketDotMatrix, true );
  addItem( itemSmallTicketDotMatrix, QLatin1String( "smallTicketDotMatrix" ) );
  KConfigSkeleton::ItemBool  *itemSmallTicketCUPS;
  itemSmallTicketCUPS = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "smallTicketCUPS" ), mSmallTicketCUPS, false );
  addItem( itemSmallTicketCUPS, QLatin1String( "smallTicketCUPS" ) );
  KConfigSkeleton::ItemBool  *itemBigReceipt;
  itemBigReceipt = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "bigReceipt" ), mBigReceipt, false );
  addItem( itemBigReceipt, QLatin1String( "bigReceipt" ) );
  KConfigSkeleton::ItemBool  *itemPrintBalances;
  itemPrintBalances = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printBalances" ), mPrintBalances, false );
  addItem( itemPrintBalances, QLatin1String( "printBalances" ) );
  KConfigSkeleton::ItemBool  *itemPrintZeroTicket;
  itemPrintZeroTicket = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printZeroTicket" ), mPrintZeroTicket, true );
  addItem( itemPrintZeroTicket, QLatin1String( "printZeroTicket" ) );
  KConfigSkeleton::ItemBool  *itemPrintPackContents;
  itemPrintPackContents = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printPackContents" ), mPrintPackContents, true );
  addItem( itemPrintPackContents, QLatin1String( "printPackContents" ) );
  KConfigSkeleton::ItemBool  *itemPrintSO;
  itemPrintSO = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printSO" ), mPrintSO, true );
  addItem( itemPrintSO, QLatin1String( "printSO" ) );
  KConfigSkeleton::ItemBool  *itemPrintRandomMsg;
  itemPrintRandomMsg = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printRandomMsg" ), mPrintRandomMsg, true );
  addItem( itemPrintRandomMsg, QLatin1String( "printRandomMsg" ) );
  KConfigSkeleton::ItemBool  *itemPrintTicket;
  itemPrintTicket = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printTicket" ), mPrintTicket, true );
  addItem( itemPrintTicket, QLatin1String( "printTicket" ) );
  KConfigSkeleton::ItemBool  *itemPrintChangedDateTicket;
  itemPrintChangedDateTicket = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printChangedDateTicket" ), mPrintChangedDateTicket, false );
  addItem( itemPrintChangedDateTicket, QLatin1String( "printChangedDateTicket" ) );
  KConfigSkeleton::ItemString  *itemPrinterDevice;
  itemPrinterDevice = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "printerDevice" ), mPrinterDevice, QLatin1String( "/dev/ttyAMA0" ) );
  addItem( itemPrinterDevice, QLatin1String( "printerDevice" ) );
  KConfigSkeleton::ItemString  *itemPrinterCodec;
  itemPrinterCodec = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "printerCodec" ), mPrinterCodec, QLatin1String( "UTF-8" ) );
  addItem( itemPrinterCodec, QLatin1String( "printerCodec" ) );

  setCurrentGroup( QLatin1String( "Facturas" ) );

  KConfigSkeleton::ItemString  *itemStoreCity;
  itemStoreCity = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storeCity" ), mStoreCity );
  addItem( itemStoreCity, QLatin1String( "storeCity" ) );
  KConfigSkeleton::ItemString  *itemStoreRFC;
  itemStoreRFC = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storeRFC" ), mStoreRFC );
  addItem( itemStoreRFC, QLatin1String( "storeRFC" ) );
  KConfigSkeleton::ItemString  *itemStoreRegimen;
  itemStoreRegimen = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "storeRegimen" ), mStoreRegimen, QString::fromUtf8( "Rgimen de Persona Fsica con actividad empresarial" ) );
  addItem( itemStoreRegimen, QLatin1String( "storeRegimen" ) );
}

Settings::~Settings()
{
  if (!s_globalSettings.isDestroyed()) {
    s_globalSettings->q = 0;
  }
}

