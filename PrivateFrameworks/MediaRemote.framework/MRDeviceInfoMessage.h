/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRDeviceInfo * _deviceInfo;
}

@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;

- (void)dealloc;
- (id)deviceInfo;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)arg1;
- (unsigned long long)type;

@end