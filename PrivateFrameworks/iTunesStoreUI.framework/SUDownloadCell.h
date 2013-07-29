/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, UIButton, UISlider, UIGestureRecognizer;

@interface SUDownloadCell : SUGridTableViewCell  {
    UIButton *_accessoryButton;
    UISlider *_progressBar;
    UIImageView *_editView;
    UIGestureRecognizer *_tapRecognizer;
}


- (void)_tapGesture:(id)arg1;
- (id)_parentGridView;
- (BOOL)_isDownloadResumable:(id)arg1;
- (void)_reloadEditView;
- (void)_reloadProgressBar;
- (void)_reloadAccessoryButton;
- (void)reloadForStatusChange;
- (void)setEditState:(int)arg1;
- (void)dealloc;
- (void)setConfiguration:(id)arg1;
- (BOOL)handleTap;
- (void)_accessoryButtonAction:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end
