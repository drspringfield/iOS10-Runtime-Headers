/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, ALAssetsLibrary, AVAssetExportSession, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SLAssetDataProvider : NSObject  {
    ALAssetsLibrary *_assetsLibrary;
    int _numRequestedImages;
    unsigned int _maxByteSize;
    NSMutableArray *_deliveryQueue;
    NSError *_lastError;
    AVAssetExportSession *_assetExportSession;
    NSObject<OS_dispatch_queue> *_downsamplingQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchCompletion;

}

@property(copy) id fetchCompletion;


- (void)mappedDataFromVideoAtFileURL:(id)arg1 completion:(id)arg2;
- (void)exportDataFromVideoAssetURL:(id)arg1 toFileURL:(id)arg2 exportPreset:(id)arg3 completion:(id)arg4;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned int)arg2 completion:(id)arg3;
- (id)_generateTemporaryFilename;
- (void)_assetFetchFailedWithError:(id)arg1;
- (void)fetchedAsset:(id)arg1;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (void)_checkDeliveryComplete;
- (void)setFetchCompletion:(id)arg1;
- (id)fetchCompletion;
- (id)init;
- (void).cxx_destruct;

@end
