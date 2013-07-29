/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFHeaderLabelView, UIView, NSString, NSLayoutConstraint;

@interface MFComposeHeaderView : UIView  {
    NSString *_label;
    NSString *_navTitle;
    MFHeaderLabelView *_labelView;
    id _delegate;
    UIView *_separator;
    NSLayoutConstraint *_labelAlignToTopConstraint;
    BOOL _drawsLetterpress;
}

@property BOOL drawsLetterpress;

+ (float)_labelTopPaddingSpecification;
+ (float)separatorHeight;
+ (float)preferredHeight;
+ (id)defaultFont;

- (void)refreshPreferredContentSize;
- (void)addCenteredLayoutConstraintForView:(id)arg1;
- (float)maxLabelX;
- (void)setLabelHighlighted:(BOOL)arg1;
- (id)navTitle;
- (void)handleTouchesEnded;
- (float)labelTopPadding;
- (struct CGColor { }*)labelColor;
- (void)setNavTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)drawsLetterpress;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)updateConstraints;
- (BOOL)_canBecomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)_automationID;
- (void)layoutSubviews;

@end
