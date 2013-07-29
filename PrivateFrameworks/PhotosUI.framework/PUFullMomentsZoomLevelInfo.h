/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUGridZoomLevelInfo;

@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate> {
    PUGridZoomLevelInfo *_transitionOtherLevelInfo;
}


- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)newCollectionViewLayout;
- (double)zoomInDuration;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (void)prepareForAnimatedTransitionFromZoomLevelInfo:(id)arg1;
- (void)prepareForAnimatedTransitionToZoomLevelInfo:(id)arg1;
- (BOOL)hasEnoughContentToDisplay;
- (BOOL)wantsMagnifierNavigation;
- (BOOL)supportsEditMode;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)sectionHeaderElementKind;
- (struct __CFString { }*)aggregateLevelKey;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (int)imageFormat;
- (id)displayTitle;
- (void).cxx_destruct;

@end
