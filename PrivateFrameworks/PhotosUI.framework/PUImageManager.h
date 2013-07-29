/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableIndexSet, NSMutableDictionary;

@interface PUImageManager : NSObject  {
    NSMutableDictionary *_preheatSourcesByFormat;
    NSMutableDictionary *_preheatItemsByAssetByFormat;
    NSMutableIndexSet *_suspendedFormats;
}


- (void)resumeFetchesForFormat:(int)arg1;
- (void)suspendFetchesForFormat:(int)arg1;
- (void)cancelAllFetches;
- (id)_keyForFormat:(int)arg1;
- (id)_preheatSourceForFormat:(int)arg1;
- (id)_preheatItemsByAssetForFormat:(int)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)_isSuspendingFetchesForFormat:(int)arg1;
- (id)_preheatItemForAsset:(id)arg1 format:(int)arg2 createIfNeeded:(BOOL)arg3;
- (void)stopFetchingImagesForAssets:(id)arg1 format:(int)arg2;
- (void)startPrefetchingImagesForAssets:(id)arg1 format:(int)arg2;
- (void)fetchImageForAsset:(id)arg1 fastFormat:(int)arg2 qualityFormat:(int)arg3 handler:(id)arg4;
- (id)init;
- (void).cxx_destruct;

@end
