/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PLFetchingAlbum, PUCollectionViewFlowLayout, PUPhotosPanoramaViewControllerSpec;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController <UICollectionViewDelegateFlowLayout> {
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PLFetchingAlbum *_userPanoAlbum;
}

@property(retain) PUPhotosPanoramaViewControllerSpec * panoramaSpec;
@property(retain) PUCollectionViewFlowLayout * mainGridLayout;
@property(retain) PLFetchingAlbum * userPanoAlbum;


- (void)setPanoramaSpec:(id)arg1;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
- (void)updatePhotoView:(id)arg1 withThumbnailImage:(id)arg2;
- (id)userPanoAlbum;
- (id)panoramaSpec;
- (id)newPanoPhotoCollections;
- (void)setUserPanoAlbum:(id)arg1;
- (BOOL)_hasScrollableContent;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (int)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (BOOL)wantsGlobalFooter;
- (void)updateLayoutMetrics;
- (id)newGridLayout;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)initWithSpec:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
