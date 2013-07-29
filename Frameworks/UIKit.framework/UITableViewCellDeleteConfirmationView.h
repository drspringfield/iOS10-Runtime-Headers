/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationButton;

@interface UITableViewCellDeleteConfirmationView : UIView  {
    float _visibleWidth;
    float _cornerRadius;
    int _sectionLocation;
    UITableViewCellDeleteConfirmationButton *_deleteView;
    UITableViewCellDeleteConfirmationButton *_accessoryView;
}

@property float visibleWidth;
@property float cornerRadius;
@property int sectionLocation;
@property(readonly) UITableViewCellDeleteConfirmationButton * deleteView;
@property(readonly) UITableViewCellDeleteConfirmationButton * accessoryView;


- (float)cornerRadius;
- (void)dealloc;
- (id)deleteView;
- (float)visibleWidth;
- (void)updateMaskView:(BOOL)arg1;
- (id)accessoryView;
- (void)setVisibleWidth:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 deleteView:(id)arg2 accessoryView:(id)arg3;
- (void)setSectionLocation:(int)arg1;
- (int)sectionLocation;
- (void)setCornerRadius:(float)arg1;
- (void)didMoveToWindow;

@end
