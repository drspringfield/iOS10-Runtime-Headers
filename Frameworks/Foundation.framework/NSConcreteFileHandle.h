/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_data>;

@interface NSConcreteFileHandle : NSFileHandle  {
    int _fd;
    unsigned short _flags;
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source> *_dsrc;
    NSObject<OS_dispatch_data> *_resultData;
    NSObject<OS_dispatch_queue> *_fhQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _readabilityHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _writeabilityHandler;

    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
}


- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setPort:(id)arg1;
- (void)writeData:(id)arg1;
- (void)synchronizeFile;
- (unsigned long long)seekToEndOfFile;
- (unsigned int)readDataOfLength:(unsigned int)arg1 buffer:(char *)arg2;
- (id)init;
- (id)port;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readInBackgroundAndNotify;
- (id)initWithFileDescriptor:(int)arg1;
- (id)_monitor:(int)arg1;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)performActivity:(int)arg1 modes:(id)arg2;
- (void)_commonDealloc;
- (void)_cancelDispatchSources;
- (void)_locked_clearHandler:(id*)arg1 forSource:(id*)arg2;
- (void)setReadabilityHandler:(id)arg1;
- (id)readabilityHandler;
- (void)setWriteabilityHandler:(id)arg1;
- (id)writeabilityHandler;
- (int)fileDescriptor;
- (void)closeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)readDataToEndOfFile;
- (id)availableData;
- (id)initWithURL:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)offsetInFile;

@end
