/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class AVConference, NSLock, NSMutableArray, NSMutableDictionary;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {
    NSMutableArray *_avConferencesToCleanup;
    NSMutableDictionary *_avConferences;
    NSLock *_avConferencesLock;
    BOOL _duringInit;
    BOOL _pendingCleanup;
}

@property(readonly) AVConference * controller;

+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 contentRectChanged:(BOOL)arg5 cameraWillSwitch:(BOOL)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize { float x1; float x2; })arg9 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10;
+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize { float x1; float x2; })arg8;
+ (BOOL)_useMultipleAVConference;

- (id)_imAVChatParticipantForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3;
- (BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;
- (id)_existingConferenceForAVChatGUID:(id)arg1;
- (id)_conferenceForAVChat:(id)arg1;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (id)_existingConferenceForAVChat:(id)arg1;
- (void)_cleanupAVInterface;
- (id)_avChatForConference:(id)arg1;
- (id)_avChatForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3;
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg2 localPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg3;
- (id)_controller;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (BOOL)supportsRelay;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void*)localVideoLayer;
- (void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2;
- (void*)remoteVideoBackLayerForChat:(id)arg1;
- (void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2;
- (void*)remoteVideoLayerForChat:(id)arg1;
- (BOOL)supportsLayers;
- (id)getNatIPFromICEData:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id*)arg1;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (BOOL)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (BOOL)isMuteForAVChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)initAVInterface;
- (BOOL)isAVInterfaceReady;
- (int)endConferenceForAVChat:(id)arg1;
- (void)chatStateUpdated;
- (void)_avChatDealloc:(id)arg1;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
- (unsigned long long)capabilities;
- (void)serverDiedForConference:(id)arg1;
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2;
- (void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2;
- (void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(BOOL)arg3;
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)controller;

@end
