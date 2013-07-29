/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, NSObject<OS_dispatch_queue>, AVVideoCompositionRenderContext, AVWeakReference, NSDictionary, <AVVideoCompositing>, AVVideoComposition;

@interface AVCustomVideoCompositorSession : NSObject  {
    struct OpaqueFigVideoCompositor { } *_figCustomCompositor;
    BOOL _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    BOOL _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    <AVVideoCompositing> *_clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}

+ (id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2;

- (void)_customCompositorFigPropertyDidChange;
- (long)_customCompositorShouldCancelPendingFrames;
- (long)_compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4;
- (void)requestDidCancel:(id)arg1;
- (void)request:(id)arg1 didFinishWithError:(id)arg2;
- (void)request:(id)arg1 didFinishWithComposedPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)_willDeallocOrFinalize;
- (void)_cleanupFigCallbacks;
- (long)_setupFigCallbacks;
- (id)initWithVideoComposition:(id)arg1;
- (struct OpaqueFigVideoCompositor { }*)_copyFigVideoCompositor;
- (id)getAndClearClientError;
- (void)detachVideoComposition;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end
