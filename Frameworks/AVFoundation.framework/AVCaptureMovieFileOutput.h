/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput  {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(copy) NSArray * metadata;

+ (BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;
+ (BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (void)initialize;

- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)setSendsLastVideoPreviewFrame:(BOOL)arg1;
- (BOOL)isRecording;
- (id)_avErrorUserInfoDictionaryForError:(long)arg1 wrapper:(id)arg2;
- (id)outputSettingsForConnection:(id)arg1;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (void)_handleStartRecordingError:(long)arg1 info:(id)arg2;
- (long)_startRecording:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecordingPaused;
- (id)outputFileURL;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (long)_stopRecording;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)init;
- (void)dealloc;
- (void)stopRecording;

@end
