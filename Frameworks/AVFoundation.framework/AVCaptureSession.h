/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureSessionInternal, NSString;

@interface AVCaptureSession : NSObject  {
    AVCaptureSessionInternal *_internal;
}

@property(copy) NSString * sessionPreset;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) BOOL running;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property BOOL usesApplicationAudioSession;
@property BOOL automaticallyConfiguresApplicationAudioSession;
@property(readonly) struct OpaqueCMClock { }* masterClock;

+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4;
+ (id)allSessionPresets;
+ (id)avCaptureSessionPlist;
+ (void)initialize;

- (BOOL)canAddOutput:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)commitConfiguration;
- (void)beginConfiguration;
- (void)addConnection:(id)arg1;
- (id)outputs;
- (id)inputs;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (void)_stopAndTearDownGraph;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3 frameRatesChanged:(BOOL*)arg4;
- (void)_doDidStop:(id)arg1;
- (void)_doDidStart:(BOOL)arg1;
- (void)_doDidStartSources;
- (long)_createRecorderIfNeeded;
- (BOOL)_startPreviewing;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1;
- (void)setUsesApplicationAudioSession:(BOOL)arg1;
- (void)_setInterrupted:(BOOL)arg1;
- (BOOL)isInterrupted;
- (BOOL)canAddConnection:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (id)inputWithClass:(Class)arg1;
- (id)outputWithClass:(Class)arg1;
- (void)_determineMasterClock;
- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (id)_currentDeviceWithMediaType:(id)arg1;
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (BOOL)_sessionHasEnabledMovieFileOutput;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)_rebuildLiveConnections;
- (BOOL)_stopPreviewing;
- (void)_postRuntimeError:(id)arg1;
- (BOOL)isPreviewing;
- (id)_stopError;
- (void)_doWillStart;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayer;
- (void)removeVideoPreviewLayerConnection:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (id)_liveConnections;
- (void)addVideoPreviewLayerConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_buildAndRunGraph;
- (void)_commitConfiguration;
- (void)_rebuildInternalCaptureOptions;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)_teardownFigRecorder;
- (void)removeOutput:(id)arg1;
- (void)_beginConfiguration;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (id)figRecorderOptions;
- (id)sessionPreset;
- (void)removeConnection:(id)arg1;
- (id)_resolvedCaptureOptions;
- (void)_rebuildGraph;
- (BOOL)isBeingConfigured;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (id)captureOptions;
- (id)videoPreviewLayer;
- (long)_startRecording;
- (BOOL)automaticallyConfiguresApplicationAudioSession;
- (BOOL)usesApplicationAudioSession;
- (long)_stopRecording;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)isRunning;
- (struct OpaqueCMBaseObject { }*)recorder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)valueForUndefinedKey:(id)arg1;

@end
