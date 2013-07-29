/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, AFContextManager, ABPersonViewControllerHelper, <ABPersonEditDelegate>, UIFont, ABPersonTableViewSharingDelegate, <ABStyleProvider>, UIView, NSArray, <ABPersonViewControllerDelegate>, ABUIPerson, ABPersonTableViewDataSource, NSString, ABPersonTableViewActionsDelegate, NSTimer;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration> {
    <ABPersonViewControllerDelegate> *_personViewDelegate;
    id _helper;
    id _internal;
    BOOL _internal2;
    NSTimer *_editAnimationTimer;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
}

@property <ABPersonViewControllerDelegate> * personViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property BOOL allowsEditing;
@property BOOL allowsActions;
@property BOOL shouldShowLinkedPeople;
@property BOOL allowsSharing;
@property BOOL allowsAddToFavorites;
@property BOOL allowsDeletion;
@property BOOL allowsCancel;
@property BOOL allowsSounds;
@property BOOL allowsVibrations;
@property BOOL allowsConferencing;
@property BOOL allowsContactBlocking;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(readonly) UIView * tableHeaderView;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsOnlyFaceTimeActions;
@property(copy) NSString * attribution;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property BOOL badgeEmailPropertiesForMailVIP;
@property BOOL observesExternalChanges;
@property(retain) ABUIPerson * displayedUIPerson;
@property(retain) <ABStyleProvider> * styleProvider;
@property BOOL appearsInLinkingPeoplePicker;
@property BOOL allowsSettingAsPreferredCardForName;
@property(readonly) AFContextManager * contextManager;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property <ABPersonEditDelegate> * editDelegate;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (BOOL)allowContextProvider:(id)arg1;
- (id)getCurrentContext;
- (void)saveChanges;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (void)_handleLocalChange:(struct __CFDictionary { }*)arg1;
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1;
- (void)_editAnimationTimerFired:(id)arg1;
- (void)pickerCancel:(id)arg1;
- (void)startDelayingChangeNotifications;
- (BOOL)isDelayingChangeNotifications;
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)arg1;
- (void)_removeContextProviderOnMainThread;
- (id)contextManager;
- (void)cancelEditing:(BOOL)arg1;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (BOOL)allowsSettingAsPreferredCardForName;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (BOOL)shareMessageBodyIsHTML;
- (void)shareContactByEmail:(id)arg1;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (id)personViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (BOOL)manuallyLinkPerson:(id)arg1;
- (BOOL)observesExternalChanges;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (BOOL)appearsInLinkingPeoplePicker;
- (BOOL)shouldShowLinkingUIOnCard;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (BOOL)allowsVibrations;
- (BOOL)allowsSounds;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (id)sharingDelegate;
- (id)editDelegate;
- (id)attribution;
- (BOOL)shouldShowLinkedPeople;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setObservesExternalChanges:(BOOL)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (id)helper;
- (BOOL)handleExternalChange;
- (BOOL)allowsCancel;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)updateTitle;
- (void*)displayedPerson;
- (void)setCustomAppearanceProvider:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setPersonHeaderView:(id)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsDeletion;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsSharing;
- (BOOL)allowsActions;
- (void)editCancel:(id)arg1;
- (id)personHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)peoplePickerLinkButtonTapped;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (BOOL)isReadonly;
- (int)abViewControllerType;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)newActionButton;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)actionsDelegate;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (void)updateNavigationButtons;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;
- (id)displayedProperties;
- (void)setDisplayedProperties:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)dataSource;
- (id)message;
- (id)init;
- (void)dealloc;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)setMessage:(id)arg1;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (id)tableHeaderView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;

@end
