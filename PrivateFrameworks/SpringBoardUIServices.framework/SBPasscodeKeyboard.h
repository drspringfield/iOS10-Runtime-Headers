/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBPasscodeKeyboard : UIKeyboard {
    SBUIPasscodeLockViewWithKeyboard * _lockView;
}

- (void).cxx_destruct;
- (bool)canDismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lockView:(id)arg2;
- (bool)isActive;
- (void)maximize;
- (void)minimize;
- (bool)shouldSaveMinimizationState;

@end
