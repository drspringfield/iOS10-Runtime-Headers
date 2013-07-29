/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIKeyboard, NSString, DevicePINController;

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController  {
    DevicePINController *_devicePINController;
    BOOL _showingBlockedMessage;
    NSString *_enterPasscodeTitle;
    NSString *_enterPasscodeReason;
    UIKeyboard *_disabledKeyboard;
}

@property(retain) NSString * enterPasscodeTitle;
@property(retain) NSString * enterPasscodeReason;
@property(retain) UIKeyboard * disabledKeyboard;


- (id)disabledKeyboard;
- (id)enterPasscodeReason;
- (id)enterPasscodeTitle;
- (void)setDisabledKeyboard:(id)arg1;
- (void)updateBlockedState:(id)arg1;
- (void)setEnterPasscodeReason:(id)arg1;
- (void)setEnterPasscodeTitle:(id)arg1;
- (void)didFinishEnteringText:(id)arg1;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
