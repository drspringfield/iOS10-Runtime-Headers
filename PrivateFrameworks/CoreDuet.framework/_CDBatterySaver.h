/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDBatterySaver : NSObject {
    NSXPCConnection * _connection;
}

+ (id)batterySaver;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)getPowerMode;
- (id)init;
- (long long)setMode:(long long)arg1;
- (bool)setPowerMode:(long long)arg1 error:(id*)arg2;

@end