/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView  {
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard : 1;
    UIViewController *_viewController;
}

@property UIViewController * viewController;

+ (id)defaultBackgroundColor;
+ (float)preferredHeight;

- (void)editMode;
- (void)doneEditing;
- (void)addNewValue;
- (BOOL)wantsNewButton;
- (id)specifierLabel;
- (id)scrollViewToBeInsetted;
- (BOOL)handlesDoneButton;
- (id)preferenceValue;
- (void)viewDidBecomeVisible;
- (id)preferenceSpecifier;
- (void)setPreferenceValue:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)layoutInsetContent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)requiresKeyboard;
- (void)insetContent;
- (BOOL)shouldInsetContent;
- (BOOL)changed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;

@end
