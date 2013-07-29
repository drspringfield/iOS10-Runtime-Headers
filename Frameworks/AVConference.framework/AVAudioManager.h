/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSObject<OS_dispatch_queue>, AVAudioDevice, NSDictionary, NSMutableArray;

@interface AVAudioManager : NSObject  {
    int direction;
    int audioRefCount;
    int connectionRefCount;
    int internalBlockSize;
    int hardwareSampleRate;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } vpioFormat;
    BOOL usingFloat;
    BOOL isGKVoiceChat;
    BOOL enableSpeakerPhone;
    BOOL isUsingSuppression;
    BOOL isTetheredDisplayMode;
    BOOL shouldSetupAudioSession;
    int clientPID;
    NSDictionary *backMicSource;
    NSDictionary *frontMicSource;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } audioLock;
    NSObject<OS_dispatch_queue> *cmSessionQueue;
    NSObject<OS_dispatch_queue> *inputDeviceQueue;
    struct tagHANDLE { int x1; } *hAUIO;
    AVAudioDevice *targetInputDevice;
    int inferredOperatingMode;
    unsigned long currentVPOperatingMode;
    BOOL currentAudioRecordingMode;
    int currentSampleRate;
    int currentMinSamplesPerFrame;
    BOOL currentReceiverStatus;
    struct AudioEventQueue_t { } *eventQ;
    NSMutableArray *spkrConfList;
    NSMutableArray *micConfList;
    BOOL micInUse;
    BOOL spkrInUse;
}

@property BOOL shouldSetupAudioSession;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property int clientPID;
@property BOOL isUsingSuppression;
@property BOOL isGKVoiceChat;
@property(readonly) BOOL usingFloat;
@property(readonly) int inferredOperatingMode;
@property(retain) AVAudioDevice * targetInputDevice;

+ (id)defaultAVAudioManager;

- (void)setTargetInputDevice:(id)arg1;
- (id)targetInputDevice;
- (void)setBlockSize:(BOOL)arg1;
- (void)setupVPBlockFormat;
- (void)setSampleRate;
- (void)resetAudioSessionProperties;
- (void)setAudioSessionProperties;
- (BOOL)forceBufferFrames:(int*)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (void)stopAudioSession:(unsigned long)arg1;
- (unsigned long)startAudioSessionWithCompletionHandler:(id)arg1 dispatchQueue:(id)arg2;
- (void)setAudioSessionParameters:(id)arg1;
- (void)audioSessionClientDied:(int)arg1;
- (BOOL)shouldSetupAudioSession;
- (void)tearDownAudioSession:(unsigned long)arg1 forceTearDown:(BOOL)arg2;
- (unsigned long)setupAudioSession;
- (BOOL)projectionModeEnabledState;
- (void)setupAudioNotifications;
- (void)tearDownAudioIO:(BOOL)arg1;
- (void)AUIOTeardown:(BOOL)arg1;
- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(BOOL)arg3 ignoreRefCount:(BOOL)arg4 operatingMode:(int)arg5 completionHandler:(id)arg6;
- (void)processEventQueue;
- (void)cleanupAUIOSetupWithResult:(long)arg1 completionHandler:(id)arg2;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setClientPID:(int)arg1;
- (BOOL)setCurrentInputDevice:(id)arg1;
- (void)removeConference:(id)arg1;
- (void)addConference:(id)arg1;
- (int)clientPID;
- (void)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (void)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9;
- (BOOL)usingFloat;
- (BOOL)isUsingSuppression;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (void)getVpioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)setSamplesPerFrame:(int)arg1;
- (int)inferredOperatingMode;
- (BOOL)isGKVoiceChat;
- (void)setIsGKVoiceChat:(BOOL)arg1;
- (void)stopAudioIO;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 allowAudioRecording:(BOOL)arg4 operatingMode:(int)arg5 completionHandler:(id)arg6;
- (BOOL)isSpeakerPhoneEnabled;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (id)currentInputDevice;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (id)init;
- (void)setDirection:(int)arg1;

@end
