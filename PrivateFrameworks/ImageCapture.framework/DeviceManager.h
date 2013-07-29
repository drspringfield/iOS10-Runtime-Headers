/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableDictionary, DeviceManagerThread, NSDictionary;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
    DeviceManagerThread *_thread;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
}


- (void)postCommandCompletionNotification:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (int)closeDevice:(id)arg1 contextInfo:(void*)arg2;
- (int)openDevice:(id)arg1 contextInfo:(void*)arg2;
- (int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (int)eject:(id)arg1;
- (int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (int)syncClock:(id)arg1 contextInfo:(void*)arg2;
- (int)closeSession:(id)arg1 contextInfo:(void*)arg2;
- (int)openSession:(id)arg1 contextInfo:(void*)arg2;
- (void)stopRunning;
- (void)startRunning;
- (id)init;
- (void)dealloc;
- (void)postNotification:(id)arg1;

@end
