/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageLoadingThread, PLImageCacheList;

@interface PLImageCache : NSObject  {
    PLImageLoadingThread *_loader;
    PLImageCacheList *_cacheList;
}


- (id)newImageLoadingQueue;
- (void)resumeLoading;
- (void)pauseLoading;
- (id)newCachedImageWithImageContents:(void*)arg1 orientation:(int)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(id)arg7;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)_addImageToCache:(id)arg1;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (void)_uncacheImage:(id)arg1;
- (id)_imageLoader;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (id)init;
- (void)dealloc;

@end
