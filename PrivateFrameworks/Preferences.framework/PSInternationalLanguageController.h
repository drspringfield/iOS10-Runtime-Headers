/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary;

@interface PSInternationalLanguageController : PSListItemsController  {
    NSMutableDictionary *_cellCache;
}

@property(retain) NSMutableDictionary * cellCache;


- (void)generateLanguageCellCache;
- (id)cellCache;
- (void)updateNavigationItem;
- (void)doneButtonTapped;
- (void)setCellCache:(id)arg1;
- (void)_removeBlackFrame;
- (void)cancelButtonTapped;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
