/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSimpleTextInputViewControllerDelegate>, NSString, <ABStyleProvider>;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {
    <ABSimpleTextInputViewControllerDelegate> *_delegate;
    id _value;
    NSString *_placeholder;
    <ABStyleProvider> *_styleProvider;
}

@property <ABSimpleTextInputViewControllerDelegate> * delegate;
@property(copy) NSString * stringValue;
@property(copy) NSString * placeholder;
@property(retain) <ABStyleProvider> * styleProvider;


- (void)updateSaveButton;
- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;
- (void)setTitleLocalizationKey:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)stringValue;
- (void)dealloc;
- (id)delegate;
- (id)placeholder;
- (void)setStringValue:(id)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setPlaceholder:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
