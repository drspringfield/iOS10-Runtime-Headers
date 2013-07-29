/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexPath, UITapGestureRecognizer, NSString, <PUFeedCellDelegate>;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    BOOL _tappable;
    <PUFeedCellDelegate> *_delegate;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    UITapGestureRecognizer *__tapGestureRecognizer;
}

@property <PUFeedCellDelegate> * delegate;
@property(getter=isTappable) BOOL tappable;
@property(retain) NSIndexPath * indexPath;
@property(retain) NSString * representedElementKind;
@property(setter=_setTapGestureRecognizer:,retain) UITapGestureRecognizer * _tapGestureRecognizer;


- (BOOL)shouldRecognizerTap:(id)arg1;
- (BOOL)isTappable;
- (void)setRepresentedElementKind:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (void)setTappable:(BOOL)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (id)_tapGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setIndexPath:(id)arg1;
- (id)representedElementKind;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)indexPath;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;

@end
