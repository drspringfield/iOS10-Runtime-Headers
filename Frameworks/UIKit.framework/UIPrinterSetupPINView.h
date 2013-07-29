/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, UIPasscodeField, UITextField;

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {
    UILabel *_titleLabel;
    UILabel *_enterLabel;
    UIPasscodeField *_passcodeField;
    UITextField *_textEntryField;
    UILabel *_failedLabel;
    UIImageView *_failedBackground;
    int _failedAttemptCount;
}

@property(retain) UILabel * titleLabel;
@property(retain) UILabel * enterLabel;
@property(retain) UIPasscodeField * passcodeField;
@property(retain) UITextField * textEntryField;
@property(retain) UILabel * failedLabel;
@property(retain) UIImageView * failedBackground;
@property int failedAttemptCount;


- (void)dealloc;
- (void)setFailedAttemptCount:(int)arg1;
- (int)failedAttemptCount;
- (id)failedBackground;
- (id)failedLabel;
- (id)textEntryField;
- (id)passcodeField;
- (id)enterLabel;
- (void)showSuccess:(BOOL)arg1;
- (id)PIN;
- (void)stopPINInput;
- (void)startPINInput;
- (id)initWithPrinterName:(id)arg1;
- (void)setFailedBackground:(id)arg1;
- (void)setFailedLabel:(id)arg1;
- (void)setTextEntryField:(id)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setEnterLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)titleLabel;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
