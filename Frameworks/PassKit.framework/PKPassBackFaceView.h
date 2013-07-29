/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIAlertView, UILabel, UIRefreshControl, PKLinkedAppView, BluetoothManager, UIButton, UITableView, UIView, PKSettingTableCell, NSArray, NSMutableDictionary, NSTimer;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    UIRefreshControl *_refreshControl;
    BOOL _tall;
    UILabel *_updateDateLabel;
    UIButton *_doneButton;
    PKLinkedAppView *_linkedApp;
    UIAlertView *_storeDemoRefuseDeleteAlert;
    UIView *_locationHelpView;
    UITableView *_bodyTable;
    PKSettingTableCell *_automaticUpdates;
    PKSettingTableCell *_showInLockScreen;
    NSArray *_rowCountBySection;
    unsigned int _settingsSection;
    unsigned int _linkedAppSection;
    unsigned int _fieldsSection;
    NSMutableDictionary *_fieldCellsByIndexPath;
    NSTimer *_refreshTimeoutTimer;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsDelete;
    BOOL _showsLinkedApp;
    BOOL _showsSettings;
    BOOL _showsLinks;
}

@property BOOL showsSettings;
@property BOOL showsDelete;
@property BOOL showsLinks;
@property BOOL showsLinkedApp;
@property PKLinkedAppView * linkedApp;
@property(retain) UIAlertView * storeDemoRefuseDeleteAlert;

+ (id)_linkTextAttributes;
+ (id)_linkColor;
+ (BOOL)isWifiEnabled;

- (void)setLinkedApp:(id)arg1;
- (void)setShowsSettings:(BOOL)arg1;
- (BOOL)showsSettings;
- (void)setShowsLinkedApp:(BOOL)arg1;
- (BOOL)showsLinkedApp;
- (void)setShowsDelete:(BOOL)arg1;
- (BOOL)showBackgroundMatte;
- (BOOL)_isBluetoothEnabled;
- (void)_wifiChanged:(id)arg1;
- (void)setShowsLinks:(BOOL)arg1;
- (void)registerForEnterBackgroundNotification;
- (void)setStoreDemoRefuseDeleteAlert:(id)arg1;
- (id)storeDemoRefuseDeleteAlert;
- (void)setupRefreshControl:(id)arg1;
- (BOOL)_settingsAvailable;
- (BOOL)_linkedAppAvailable;
- (BOOL)showUpdateDateLabel;
- (void)_doneButtonPressed:(id)arg1;
- (BOOL)deleteEnabled;
- (void)_deleteButtonPressed:(id)arg1;
- (BOOL)showsDelete;
- (void)refreshControlValueChanged:(id)arg1;
- (BOOL)shouldAllowRefresh;
- (id)_updateLabelAttributedStringWithString:(id)arg1;
- (id)_formattedUpdateDate:(id)arg1;
- (void)_refreshTimeoutFired;
- (void)pushSettingsFromViewToModel;
- (id)_fieldForIndexPath:(id)arg1;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_settingsCellForRow:(unsigned int)arg1;
- (id)linkedApp;
- (id)_locationRelevancyHelpText;
- (BOOL)showsLinks;
- (void)unregisterForEnterBackgroundNotification;
- (void)_bluetoothPowerChanged:(id)arg1;
- (void)createBodyInvariantViews;
- (id)_relevantBuckets;
- (BOOL)isFrontFace;
- (id)initTall:(BOOL)arg1;
- (void)dealloc;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
