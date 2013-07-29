/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIView, <CAMModeDialDataSource>, NSMutableArray, CAGradientLayer;

@interface CAMModeDial : UIControl  {
    int _orientation;
    <CAMModeDialDataSource> *_dataSource;
    unsigned int _selectedIndex;
    NSMutableArray *__items;
    UIView *__dialContainerView;
    UIView *__itemsContainerView;
    UIImageView *__dotImageView;
    CAGradientLayer *__dialGradientLayer;
}

@property(readonly) int orientation;
@property <CAMModeDialDataSource> * dataSource;
@property unsigned int selectedIndex;
@property(readonly) NSMutableArray * _items;
@property(readonly) UIView * _dialContainerView;
@property(readonly) UIView * _itemsContainerView;
@property(readonly) UIImageView * _dotImageView;
@property(readonly) CAGradientLayer * _dialGradientLayer;


- (id)_dialGradientLayer;
- (id)_dotImageView;
- (id)_itemsContainerView;
- (id)_dialContainerView;
- (struct CGPoint { float x1; float x2; })_containerPositionFromSelectedIndex;
- (id)_fontForOrientation:(int)arg1;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOrientation:(int)arg1;
- (void)_commonCAMModeDialInitialization;
- (id)_verticalDialMeshTransform;
- (id)_horizontalDialMeshTransform;
- (id)_dotImage;
- (void)setSelectedIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (id)initWithOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)_items;
- (void)setSelectedIndex:(unsigned int)arg1;
- (unsigned int)selectedIndex;
- (int)orientation;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;

@end
