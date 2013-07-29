/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray;

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    NSArray *_allMomentLists;
}


- (id)_momentLists;
- (int)maxRowsPerSection;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)newCollectionViewLayout;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (id)renderedStripsElementKind;
- (BOOL)hasEnoughContentToDisplay;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (void)modelDidChange;
- (BOOL)supportsIncrementalChangeNotifications;
- (id)sectionHeaderElementKind;
- (struct __CFString { }*)aggregateLevelKey;
- (int)imageFormat;
- (id)displayTitle;
- (void).cxx_destruct;

@end
