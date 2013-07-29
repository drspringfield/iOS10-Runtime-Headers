/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@class NSObject<OS_dispatch_source>, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface DashboardBackend : RTCReportingBackEnd  {
    int _socketDescriptor;
    NSMutableArray *_messageQueue;
    bool_reliableUDP;
    NSObject<OS_dispatch_queue> *_networkProcQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_timer;
    int _cleanupState;
}


- (void)processSocketRead;
- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 eventID:(unsigned short)arg4 dict:(id)arg5;
- (id)initWithName:(id)arg1 serverIP:(id)arg2 serverPort:(unsigned short)arg3;
- (void)tryToSendMsg:(struct tagReportingPacket { struct tagReportingPacketHeader { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned short x_1_1_9; unsigned short x_1_1_10; unsigned char x_1_1_11[40]; unsigned short x_1_1_12; unsigned short x_1_1_13; } x1; BOOL x2[1024]; }*)arg1 length:(unsigned short)arg2 eventNumber:(unsigned short)arg3;
- (id)writeLocalLog:(struct tagReportingPacket { struct tagReportingPacketHeader { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned short x_1_1_9; unsigned short x_1_1_10; unsigned char x_1_1_11[40]; unsigned short x_1_1_12; unsigned short x_1_1_13; } x1; BOOL x2[1024]; }*)arg1;
- (id)sanitize:(id)arg1;
- (id)descriptionForObject:(id)arg1;
- (void)cleanupSources;
- (id)initWithName:(id)arg1 profile:(id)arg2 serverIP:(id)arg3 serverPort:(unsigned short)arg4;
- (void)myPeriodicTask;
- (void)useReliableUDP;
- (id)initWithName:(id)arg1 profile:(id)arg2;
- (void)dealloc;
- (void)cleanup;

@end
